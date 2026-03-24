# C++ Learnings & Cheat Sheet

## 1. I/O Manipulators: `fixed` and `setprecision`
Used to format floating-point output (requires `#include <iomanip>`).

* **`fixed`**: Forces floating-point numbers to be printed in normal decimal format (e.g., 123.45) instead of scientific notation (e.g., 1.23e+02). Once used, it stays active for all future `cout`.
* **`setprecision(n)`**: 
  * Without `fixed`: Sets the total number of significant digits.
  * With `fixed` (`cout << fixed << setprecision(n)`): Sets the exact number of digits to print *after* the decimal point. It will add trailing zeros if needed.

**Example:**
```cpp
cout << fixed << setprecision(9) << result << endl;
// If result is 3.14, it prints 3.140000000
```

## 2. Choosing Data Types based on Constraints
In competitive programming, you must pick the right data type to avoid "integer overflow" (which causes a Wrong Answer). Pay attention to variable maximums and intermediate calculations!

* **`int` (32-bit):** Use for variables up to **10^9** (1,000,000,000).
  * Matches common constraints like N <= 10^5 or values up to 10^9.
* **`long long` (64-bit):** Use for variables up to **10^18**.
  * *Crucial Rule:* When multiplying two `int` variables (e.g., 10^9 * 10^9 = 10^18) or adding many `int`s together, the *result* must be stored in a `long long`!
* **`unsigned long long`:** Rarely used. Only when strictly positive and exceeding long long maximums (up to ~1.8 * 10^19).
* **`string`:** Use for astronomically huge numbers (e.g., "up to 100 digits").

### Float Types
* **`double` (64-bit float):** Use this by *default* for decimals. Avoid `float` as it loses precision quickly. It gives ~15 decimal digits of precision.
* **`long double`:** Use when extreme precision is required by the problem. Gives ~19 decimal digits of precision.

**Pro-Tip:** If an array has up to 10^5 elements, and each is up to 10^9, finding the sum of the array can reach 10^14. Your `sum` variable MUST be `long long`!

## 3. Range-Based For Loop (For-Each Loop)
Introduced in C++11, this loop simplifies iterating over collections (like arrays, vectors, strings, sets).

**Syntax Concept:** "For every item in the collection..."
```cpp
for (DataType variableName : collectionName) {
    // code using variableName
}
```

### When to use:
* When you need to go through an entire collection from start to finish.
* When you **do not** need the index numbers (like `i = 0, 1, 2`).

### How to use (Common Patterns):

1. **By Value (Making Copies)** - Best for small types like `int` or `char`.
```cpp
for (int num : arr) {
    cout << num << " "; 
}
```

2. **By Reference (Modifying Elements)** - Use `&`. If you change the variable, it changes the original collection.
```cpp
for (int& num : arr) {
    num = num * 2; // Doubles all numbers inside 'arr'
}
```

3. **By Constant Reference (Read-Only, No Copies)** - The safest and fastest way to read large data (like strings or custom objects).
```cpp
for (const string& word : words) {
    cout << word << endl;
}
```

**Pro-Tip (Using `auto`):** Use `auto` so C++ figures out the data type for you! 
* `for (auto x : vec)` -> Quick iteration by value.
* `for (auto& x : vec)` -> Quick iteration to modify elements.
* `for (const auto& x : vec)` -> Quick, zero-copy iteration just to read elements.

## 4. Type Casting in C++ (`static_cast`)
Type casting is converting a variable from one data type to another (e.g., from `float` to `int`).

### C-Style Cast vs C++ `static_cast`
* **C-Style (Old):** `(int)x` - Hard to search in code, can do unsafe conversions.
* **C++ Style (Modern):** `static_cast<int>(x)` - Safer, explicitly checks if the conversion is valid at compile-time, and is very easy to search for in a codebase.

### How and When to use `static_cast`
**Syntax:** `static_cast<NewType>(variable)`

**1. Extracting the Integer Part of a Decimal:**
If `float x = 5.234;`, doing `static_cast<int>(x)` throws away the decimal part and gives you just `5`. The decimal is truncated, NOT rounded.

**2. Checking if a number is a whole number:**
```cpp
float x = 5.0;
if (x == static_cast<int>(x)) {
    // 5.0 == 5 is TRUE. So x is a whole number (an integer)!
}
```

**3. Extracting the Decimal Part:**
You can subtract the integer part from the original float:
`float decimal_part = x - static_cast<int>(x); // 5.234 - 5 = 0.234`
