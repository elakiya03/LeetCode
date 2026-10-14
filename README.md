# Program Notes

## 1. File Naming Conventions

Use consistent naming so your files are easy to recognize and organize.

| Language   | Naming Rule                                                                                | Example                       |
| ---------- | ------------------------------------------------------------------------------------------ | ----------------------------- |
| C          | Ends with `.c`; headers use `.h`; lowercase with underscores                               | `main.c`, `user_profile.c`    |
| C++        | Ends with `.cpp`, `.cc`, or `.cxx`; headers use `.hpp` or `.h`; lowercase with underscores | `main.cpp`, `game_engine.cpp` |
| Java       | Must match the public class name exactly; ends with `.java`; PascalCase                    | `UserProfile.java`            |
| Python     | Ends with `.py`; lowercase with underscores; avoid built-in names                          | `main.py`, `data_loader.py`   |
| JavaScript | Ends with `.js`; use lowercase kebab-case or camelCase; React components use PascalCase    | `app.js`, `auth-service.js`   |

## 2. What Is an Array?

An array is a collection of values stored in a single variable.

Example:

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

This means:

- `numbers` is an array
- it holds 5 integer values
- each value has an index starting from 0

Example access:

```c
printf("%d", numbers[2]); // prints 30
```

---

## 3. Arrays in Different Languages

### 3.1 C

C arrays are fixed in size and store one type of data only.

#### Uninitialized array

```c
int arr[5];
```

This reserves space for 5 integers, but the values are uninitialized and may contain garbage data.

#### Initialized array with implicit size

```c
int arr[] = {10, 20, 30, 40, 50};
```

The compiler determines the size automatically.

#### Initialized array with explicit size

```c
int arr[5] = {10, 20, 30, 40, 50};
```

This clearly states the array length.

#### Designated initializer (C99+)

```c
int arr[5] = {[2] = 20, [4] = 40};
```

This fills only specific indices:

```text
{0, 0, 20, 0, 40}
```

---

### 3.2 C++

C++ supports C-style arrays, but it also provides safer modern alternatives.

#### C-style array

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

#### Fixed-size modern array

```cpp
#include <array>

std::array<int, 5> arr = {1, 2, 3, 4, 5};
```

This is safer and easier to use than raw arrays.

#### Dynamic array

```cpp
#include <vector>

std::vector<int> arr = {1, 2, 3};
```

Use `std::vector` when the size may change while the program is running.

---

### 3.3 Java

Java arrays are objects and must be allocated with `new`.

#### Declaration only

```java
int[] arr; // declares the variable, but no memory is allocated yet
```

#### Allocate with a fixed size

```java
int[] arr = new int[5];
```

Values default to `0` for numeric arrays.

#### Initialize values directly

```java
int[] arr = new int[]{10, 20, 30, 40, 50};
int[] arrShort = {10, 20, 30, 40, 50};
```

The second form is shorthand and commonly used.

---

### 3.4 Python

Python does not have primitive arrays like C or Java. Instead, it uses lists.

#### Empty list

```python
arr = []
arr = list()
```

#### List with values

```python
arr = [1, 2, 3, "apple", True]
```

Python lists can hold mixed data types.

#### Pre-fill a list

```python
arr = [0] * 5
```

This creates:

```python
[0, 0, 0, 0, 0]
```

#### More strict array type

```python
import array

arr = array.array('i', [1, 2, 3])
```

This is useful when you want a more memory-efficient array of one type.

---

### 3.5 JavaScript

JavaScript arrays are dynamic and can change size at runtime.

#### Empty array

```javascript
const arr = [];
```

#### Array with mixed values

```javascript
const fruits = ["apple", "banana", 42, true];
```

JavaScript arrays can store different types together.

#### Array constructor

```javascript
const arr = new Array();
const preFilled = new Array(10, 20, 30);
```

#### Create a fixed-size array with values

```javascript
const zeros = Array(5).fill(0);
```

This creates:

```javascript
[0, 0, 0, 0, 0];
```

---

## 4. Quick Comparison

| Feature               | C                            | C++                     | Java                             | Python                        | JavaScript                 |
| --------------------- | ---------------------------- | ----------------------- | -------------------------------- | ----------------------------- | -------------------------- |
| Resizable             | No                           | Yes, with `std::vector` | No                               | Yes                           | Yes                        |
| Mixed data types      | No                           | No                      | No                               | Yes                           | Yes                        |
| Out-of-range behavior | Undefined / crash risk       | Undefined / crash risk  | `ArrayIndexOutOfBoundsException` | `IndexError`                  | Returns `undefined`        |
| Typical usage         | Low-level systems / embedded | General-purpose / STL   | Object-oriented software         | Rapid development / scripting | Web and frontend scripting |

---

## 5. Key Takeaways

- C and Java arrays are usually fixed in size.
- C++ adds modern containers like `std::array` and `std::vector`.
- Python uses lists, which are flexible and easy to work with.
- JavaScript arrays are also dynamic and can hold mixed data.
- Always remember the language-specific rules before declaring arrays.

---
