# Mohamed, Mohamed E. Project

# Gamal, Ali A. Project


For this assignment, we are working on developing a simple text utility library in C++ that focuses on basic text processing tasks. A key requirement is to use C-style strings only—so instead of std::string, I’ll be using character arrays (char[]) or pointers to characters (char*).

The project will be modular, meaning we’ll separate the code into multiple files based on functionality to keep things organized and scalable. we’ll also use a build system like CMake to manage the compilation and linking process efficiently.

Finally, we’ll be managing the entire project using Git, which includes version control for tracking changes, creating commits, and possibly using branches to manage features or fixes. This assignment will help us practice working with lower-level string manipulation in C++, structuring code across files, and using real-world tools like CMake and Git.


=========================================================================================================================================================
### Documentation on how to use the library 

# Text Utility Library Documentation

## Overview

The Text Utility Library provides a collection of C++ functions for basic string manipulation and analysis using **C-style strings** (`char[]` or `char*`). It is built to work in-place where applicable, handle edge cases such as null and empty strings, and support a variety of text-processing tasks.

All functions are declared in `text_utility.h`, implemented in `text_utility.cpp`, and grouped under the `TextUtility` namespace.

---

## How to Use

1. **Include the header file:**

   ```cpp
   #include "text_utility.h"
   ```

2. **Call functions using the namespace:**

   ```cpp
   int wc = TextUtility::wordCount(myString);
   ```

3. **Compile with your build system** (e.g., CMake or Makefile) and ensure you link both `main.cpp` and `text_utility.cpp`.

---

## Files

* `text_utility.h`: Function declarations.
* `text_utility.cpp`: Function implementations.
* `main.cpp`: Demonstrates and tests library functions.

---

## Function List

### Text Analysis

#### `int wordCount(const char* text);`

Counts the number of words in the given string (a word is a sequence of alphanumeric characters).

```cpp
TextUtility::wordCount("Hello world!"); // Returns: 2
```

#### `int characterCount(const char* text);`

Counts characters excluding the null terminator.

```cpp
TextUtility::characterCount("Hi!"); // Returns: 3
```

#### `int vowelCount(const char* text);`

Counts vowels (both upper and lowercase).

```cpp
TextUtility::vowelCount("Education"); // Returns: 5
```

#### `int consonantCount(const char* text);`

Counts consonants (ignores digits and symbols).

```cpp
TextUtility::consonantCount("School123!"); // Returns: 6
```

### String Modifications

#### `void reverseString(char* text);`

Reverses the string in-place.

```cpp
char str[] = "hello";
TextUtility::reverseString(str); // str becomes "olleh"
```

#### `void toUpperCase(char* text);`

Converts all alphabetic characters to uppercase (in-place).

```cpp
char str[] = "HeLlo!";
TextUtility::toUpperCase(str); // str becomes "HELLO!"
```

#### `void toLowerCase(char* text);`

Converts all alphabetic characters to lowercase (in-place).

```cpp
char str[] = "HeLlo!";
TextUtility::toLowerCase(str); // str becomes "hello!"
```

### Advanced Features

#### `bool isPalindrome(const char* text);`

Checks whether the string is a palindrome, ignoring punctuation, spacing, and letter casing.

```cpp
TextUtility::isPalindrome("Madam, I'm Adam"); // Returns: true
```

#### `int substringCount(const char* text, const char* substring);`

Counts how many times `substring` occurs inside `text`.

```cpp
TextUtility::substringCount("abababa", "aba"); // Returns: 2
```

#### `void encrypt(char* plaintext, char* keyword, char* result);`

Encrypts `plaintext` using a Vigenère-like cipher with a lowercase `keyword`.
Only lowercase letters are encrypted. Others remain unchanged.

```cpp
char result[100];
TextUtility::encrypt("attackatdawn", "key", result);
// result: encrypted version (e.g., "kxriegkxhea")
```

#### `void decrypt(char* ciphertext, char* keyword, char* result);`

Decrypts a ciphertext encrypted using the `encrypt()` function.

```cpp
char result[100];
TextUtility::decrypt("kxriegkxhea", "key", result);
// result: "attackatdawn"
```

---

## Edge Case Handling

All functions gracefully handle:

* `nullptr` input
* Empty strings (`""`)
* Strings with only whitespace or symbols
