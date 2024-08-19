# Sudoku-Solver

This repository contains a C++ implementation of a Sudoku Solver using the backtracking algorithm.

## Description

The Sudoku Solver program solves Sudoku puzzles by filling in the empty cells of a 9x9 grid with digits from 1 to 9. The program uses a backtracking algorithm to ensure that each digit is placed according to Sudoku rules:

- Each digit must appear exactly once in each row.
- Each digit must appear exactly once in each column.
- Each digit must appear exactly once in each 3x3 subgrid.

## Features

- Implements a backtracking approach to solve the Sudoku puzzle.
- Allows users to input their Sudoku grid with empty cells represented by zeroes.
- Validates input to ensure numbers are between 0 and 9.

## How to Use

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/neethu2365/Sudoku-Solver.git

2. **Navigate to the Repository:**
   ```bash
   cd Sudoku-Solver
3. **Compile the Code:**
   ```bash
   g++ solver.cpp -o sudoku_solver
4. **Run the Program:**
   ```bash
   ./sudoku_solver

# Input your Sudoku Grid.

## Example

**Inuput**
```bash
  3 0 6 5 0 8 4 0 0
  5 2 0 0 0 0 0 0 0
  0 8 7 0 0 0 0 3 1
  0 0 3 0 1 0 0 8 0
  9 0 0 8 6 3 0 0 5
  0 5 0 0 9 0 6 0 0
  1 3 0 0 0 0 2 5 0
  0 0 0 0 0 0 0 7 4
  0 0 5 2 0 6 3 0 0
```
**Output**
```bash
Solved Sudoku grid:
3 1 6 5 7 8 4 9 2
5 2 9 1 3 4 7 6 8
4 8 7 6 2 9 5 3 1
2 6 3 4 1 5 9 8 7
9 7 4 8 6 3 1 2 5
8 5 1 7 9 2 6 4 3
1 3 8 9 4 7 2 5 6
6 9 2 3 5 1 8 7 4
7 4 5 2 8 6 3 1 9
