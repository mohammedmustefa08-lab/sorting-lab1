# Sorting Lab — Seminar 1

Five sorting algorithms implemented in C++ as a static library, tested with Google Test.

## Algorithms
- Insertion Sort
- Selection Sort
- Exchange Sort
- Bubble Sort
- Optimized Bubble Sort

## Project Structure
- `sorting/` — Static library with 5 header files and 5 source files (templated for `int` and `double`).
- `tests/` — Google Test project with 20 tests (4 per sort).

## Tests
Each sort has 4 tests:
- Already-sorted input
- Reverse-sorted input
- Empty array (edge case)
- Variant 9 input data

### Variant 9
- **Input:** `[7, 17, 9, 3, 13, 1, 16, 10]`
- **Expected output:** `[1, 3, 7, 9, 10, 13, 16, 17]`

## How to Build & Run
1. Open `sorting.sln` in Visual Studio.
2. Build the solution (**Ctrl+Shift+B**).
3. Open **Test → Test Explorer**.
4. Click **Run All Tests** → all 20 tests should pass.

## Author
Ahmed Mohammed Mustafa — group ИДБ-25-05