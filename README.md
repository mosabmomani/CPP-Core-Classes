# C++ Core Utility & Helper Libraries

A collection of custom, reusable C++ core classes and helper libraries built to streamline date calculations, string manipulations, input validations, and utility operations. 

---

## 📌 Note
> **Legacy / Practice Project:** This repository contains foundational practice projects and core class implementations developed some time ago as part of my continuous learning journey and programming coursework in C++.

---

## 📂 Included Components

* **`clsDate` (`clsdate.h`)**: Comprehensive date manipulation class supporting leap years, date comparisons, adding/subtracting days/weeks/months/years, calculating age, and printing formatted calendars.
* **`clsString` (`clsString.h` / `clsString.cpp`)**: A robust string processing library offering word counting, capitalization, letter inversion, splitting, joining, trimming, and punctuation removal.
* **`clsInputValidate` (`clsInputValidate.h`)**: A validation helper class ensuring safe console inputs for numeric ranges (integers, floats, doubles) and date bounds.
* **`clsUtility` (`clsutility.h`)**: General utility functions including random number and password/key generation, array shuffling, text encryption/decryption, and data swapping.

---

## 🛠️ Usage
All classes are header-based or organized as modular `.h` and `.cpp` files. You can include them directly in your C++ projects:

```cpp
#include "clsDate.h"
#include "clsString.h"
#include "clsInputValidate.h"

int main() {
    // Example: Read a validated integer from the user
    int age = clsInputValidate::ReadIntNumberBetween(1, 100, "Invalid range, try again: ");
    return 0;
}
