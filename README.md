# Backtrack Checker

A hash-based validation system for the Backtrack puzzle challenge. This program verifies your solutions by comparing hashes with expected answers.

## Compilation

### Using C++23 (Recommended)

```bash
g++ -std=c++23 checker.cpp -O2 -o checker
```

### Using C++11 or C++17

```bash
# C++11
g++ -std=c++11 checker.cpp -O2 -o checker

# C++17
g++ -std=c++17 checker.cpp -O2 -o checker
```

## Running the Program

After compilation, run the checker:

```bash
./checker
```

The program will prompt you to:

1. Enter the **level number** (1-7)
2. Enter your **guess/answer**

It will then verify your answer and display either `CORRECT` or `WRONG`.

## Using the `check()` Function

You can also use the `check()` function programmatically in your code:

```cpp
bool result = check("your_guess", level_number);
if (result) {
    cout << "Answer is correct!" << endl;
} else {
    cout << "Answer is incorrect!" << endl;
}
```

**Parameters:**

- `guess` (string): Your answer to verify
- `level` (int): The level number (1-7)

**Returns:**

- `true` if the answer is correct
- `false` if the answer is incorrect or level is invalid

## Levels

1. Level 1: The N-Queens Warm-Up → Answer: `1302`
2. Level 2: The Combination Vault → Answer: `73237`
3. Level 3: The Broken Maze → Answer: `ADEFHADGJKCDEFHCDGJK`
4. Level 4: The Old Telephone Keypad → Answer: `SFCFS`
5. Level 5: The Controlled Fractured Mirror → Answer: `75131`
6. Level 6: The Cryptic Mini-Sudoku → Answer: `1234341221434321`
7. Level 7: The Master Anagram Casing → Answer: `ABCKHACK`

## Notes

- Make sure to run the program from the project directory where `answer.txt` is located
- The hash function uses a polynomial rolling hash with XOR mixing for validation
- Input must match exactly (case-sensitive for string answers)
