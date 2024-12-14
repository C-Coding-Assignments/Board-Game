#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//global variable declaration and initialization
int iterations = 0;

//function prototype for whoseTurn which is used to determine whether it is Marjorie's or John's turn in the match
bool whoseTurn();
//function prototype for round_result which is used to determine the number of points that Marjorie and John earn for each round
void round_result(int *, int);

int main()
{
    //variable declarations
    int numRounds, roundTotals;

    //getting the number of rounds Marjorie and John will play from the user
    scanf("%d", &numRounds);

    //do-while loop which iterates until Marjorie and John play all of the desired rounds
    do
    {
        //getting the total number of numbers in the list for a given round
        scanf("%d", &roundTotals);

        //variable declarations and initialization
        int board[roundTotals], *ptr = board;

        //for loop which iterates until the user enters all the numbers in the list for the given round
        for (; ptr < board + roundTotals;)
            scanf("%d", ptr++); 

        //calling round_result function to find out whether Marjorie or John will win the match
        round_result(board, roundTotals); 
    } while (++iterations < numRounds);

    return 0;
}

//whoseTurn function definition which determines whether it is Marjorie's or John's turn
bool whoseTurn()
{
    //selection statement which returns true if it is Marjorie's turn
    if (iterations % 2 == 0)
        return true;
    //returns false if it is John's turn    
    return false;    
}

//round_result function definition which determines who won the given round of the game
void round_result(int *board, int roundTotals)
{
    //variable declarations and initializations
    int ptsMarjorie = 0, ptsJohn = 0, points, *ptr = board;
    bool turnMarjorie = whoseTurn();

    //for loop which iterates until there are no longer any numbers for Marjorie and John to select
    for (; roundTotals > 0; ptr = board)
    {
        //selection statement which checks if the given player selected the first element within the array
        if (*ptr > *(ptr + roundTotals - 1))
        {
            roundTotals--, points = *ptr;

            //for loop which shifts the array one index to the left
            for (; ptr < board + roundTotals; ptr++)
                *ptr = *(ptr + 1);
        } 
        //selection statement which checks if the given player selected the last element within the array
        else
            points = *(ptr + --roundTotals);  

        //selection statement which checks if it was Marjorie's turn; if so, the points earned are assigned to Marjorie and it now is John's turn
        if (turnMarjorie)
            ptsMarjorie += points, turnMarjorie = false;
        //selection statement which checks if it was John's turn; if so, the points earned are assigned to John and it now is Marjorie's turn    
        else
            ptsJohn += points, turnMarjorie = true;
    }

    //selection statement which will print "Marjorie" if Marjorie has more points than John at the end of the round
    if (ptsMarjorie > ptsJohn)
        printf("Marjorie\n");
    //selection statement which will print "Draw" if Marjorie and John have the same number of points    
    else if (ptsMarjorie == ptsJohn)   
        printf("Draw\n");
    //selection statement which will print "John" if John has more points than Marjorie at the end of the round    
    else
        printf("John\n");     
}
