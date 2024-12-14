<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Board Game: Marjorie and John 🎲</h1>
  <p>
    Marjorie and John are playing a board game where they take turns picking the largest number available from a sequence. The winner is determined by the highest sum of the picked numbers. Marjorie plays first in the first round, and they alternate who starts.
  </p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>
    Write a C program to determine the winner of a board game played by Marjorie and John. The players take turns choosing the largest number from a sequence of numbers arranged in a row. The winner is the player with the highest sum of the chosen numbers.
  </p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>An integer <code>T</code>, the number of rounds (1 ≤ T ≤ 100).</li>
    <li>For each round:
      <ul>
        <li>An integer <code>N</code>, the number of numbers in the sequence (1 ≤ N ≤ 1000).</li>
        <li>A sequence of <code>N</code> integers, each in the range [0, 1000].</li>
      </ul>
    </li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>For each round, print the winner's name ("Marjorie" or "John").</li>
    <li>If there is a tie, print "Draw".</li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Input:<br>
    5<br>
    7<br>
    1 2 3 4 5 6 7<br>
    3<br>
    1 3 2<br>
    1<br>
    1<br>
    1<br>
    1<br>
    11<br>
    5 8 3 10 1 11 2 9 4 7 6<br>
    Output:<br>
    Marjorie<br>
    Draw<br>
    Marjorie<br>
    John<br>
    John<br>
  </div>

  <p><strong>Explanation:</strong></p>
  <ul>
    <li>In round 1, Marjorie picks 7, John picks 6, and so on. Marjorie wins with a higher sum.</li>
    <li>In round 2, both have equal sums, resulting in a draw.</li>
    <li>In round 3, Marjorie wins with a higher sum of selected numbers.</li>
    <li>In round 4, John wins as he collects the higher numbers.</li>
    <li>In round 5, John wins with a higher sum overall.</li>
  </ul>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>The program must include the function:
      <ul>
        <li><code>void round_result(int *board, int n);</code></li>
        <li>Where <code>board</code> is the array of numbers for one round and <code>n</code> is the number of elements in the array.</li>
        <li>This function should print the winner for the round directly. You cannot modify the function prototype.</li>
      </ul>
    </li>
    <li>Use pointer arithmetic; array subscripting (e.g., <code>array[i]</code>) is not allowed.</li>
    <li>Do not use any counter variables (i, j), and avoid using the <code>[]</code> operator.</li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o board_game board_game.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./board_game</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>The number of rounds <code>T</code>.</li>
    <li>For each round, the number of elements in the sequence <code>N</code>, followed by the sequence of numbers.</li>
  </ul>
</section>

</body>
</html>
