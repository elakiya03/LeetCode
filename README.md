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

### Quick Comparison

| Feature               | C                            | C++                     | Java                             | Python                        | JavaScript                 |
| --------------------- | ---------------------------- | ----------------------- | -------------------------------- | ----------------------------- | -------------------------- |
| Resizable             | No                           | Yes, with `std::vector` | No                               | Yes                           | Yes                        |
| Mixed data types      | No                           | No                      | No                               | Yes                           | Yes                        |
| Out-of-range behavior | Undefined / crash risk       | Undefined / crash risk  | `ArrayIndexOutOfBoundsException` | `IndexError`                  | Returns `undefined`        |
| Typical usage         | Low-level systems / embedded | General-purpose / STL   | Object-oriented software         | Rapid development / scripting | Web and frontend scripting |

### Key Takeaways

- C and Java arrays are usually fixed in size.
- C++ adds modern containers like `std::array` and `std::vector`.
- Python uses lists, which are flexible and easy to work with.
- JavaScript arrays are also dynamic and can hold mixed data.
- Always remember the language-specific rules before declaring arrays.

---

## 3. Array Declarations in Different Languages

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

## 4. Find Array Length

The number of elements is the array's length. The syntax depends on the language and the kind of array.

| Language                          | Example                        | Meaning                                          |
| --------------------------------- | ------------------------------ | ------------------------------------------------ |
| C                                 | `sizeof(arr) / sizeof(arr[0])` | Total array bytes divided by one element's bytes |
| C++ `std::vector` or `std::array` | `arr.size()`                   | Number of elements in the container              |
| C++ built-in array (C++17+)       | `std::size(arr)`               | Number of elements; include `<iterator>`         |
| Java array                        | `arr.length`                   | Number of elements; no parentheses               |
| Python list                       | `len(arr)`                     | Number of elements                               |
| JavaScript array                  | `arr.length`                   | Number of elements                               |

### C example

```c
int arr[] = {10, 20, 30};
int length = sizeof(arr) / sizeof(arr[0]);
```

`sizeof(arr)` is the size of the whole array in bytes. `sizeof(arr[0])` is the size of one element in bytes. Dividing them gives the number of elements.

**Important:** This calculation only works where `arr` is still an actual array. When a C array is passed to a function, it is treated like a pointer, so pass the length to the function separately.

## 5. Passing an Array to a Function

The rules differ by language. In each example, the function changes the first value. The caller can see that change when the language passes access to the same mutable array or list.

### C

```c
void changeFirst(int arr[], int length) {
	if (length > 0) {
		arr[0] = 99;
	}
}

changeFirst(arr, length);
```

In a function parameter, `int arr[]` means `int *arr`. The pointer refers to the caller's first element, so changing `arr[0]` changes the caller's array. The array length is not included; pass it separately.

### C++

```cpp
void changeFirst(std::vector<int>& arr) {
	if (!arr.empty()) {
		arr[0] = 99;
	}
}
```

The `&` means `arr` is a reference to the caller's vector, so changes affect that vector. If the function parameter were `std::vector<int> arr` without `&`, it would receive a copy instead.

### Java

```java
static void changeFirst(int[] arr) {
	if (arr.length > 0) {
		arr[0] = 99;
	}
}
```

Java passes a copy of the array reference. Both references still point to the same array object, so changing an element is visible to the caller. Assigning a different array to the parameter would not replace the caller's array.

### Python

```python
def change_first(arr):
	if arr:
		arr[0] = 99
```

The parameter refers to the same list object passed by the caller. Changing a list element is visible to the caller. Reassigning `arr` inside the function does not reassign the caller's variable.

#### JavaScript

```javascript
function changeFirst(arr) {
  if (arr.length > 0) {
    arr[0] = 99;
  }
}
```

The parameter receives a copy of the array reference. It still points to the same array, so changing an element is visible to the caller. Reassigning `arr` inside the function does not replace the caller's array.

## 6. Loop Through an Array

Use a loop to visit the array's elements one at a time.

### For-each loop: visit each value

Use this when you need the values but do not need their index positions.

#### C

C has no built-in for-each loop, so use an index-based loop instead (shown below).

#### C++ (C++11+)

```cpp
for (int item : arr) {
	std::cout << item << '\n';
}
```

#### Java

```java
for (int item : arr) {
	System.out.println(item);
}
```

#### Python

```python
for item in arr:
	print(item)
```

#### JavaScript

```javascript
for (const item of arr) {
  console.log(item);
}
```

### Index-based loop: use each position

Use this when you need the index, want to change an element, skip positions, or loop backwards. In these examples, `i` is the current index and `arr[i]` is the value at that index.

#### C

```c
int length = sizeof(arr) / sizeof(arr[0]);
for (int i = 0; i < length; i++) {
	printf("%d\n", arr[i]);
}
```

#### C++

```cpp
for (int i = 0; i < arr.size(); i++) {
	std::cout << arr[i] << '\n';
}
```

For a built-in C++ array, use its known length or `std::size(arr)` (C++17+) instead of `.size()`.

#### Java

```java
for (int i = 0; i < arr.length; i++) {
	System.out.println(arr[i]);
}
```

#### Python

```python
for i in range(len(arr)):
	print("Index", i, "Value", arr[i])
```

#### JavaScript

```javascript
for (let i = 0; i < arr.length; i++) {
  console.log("Index", i, "Value", arr[i]);
}
```

### Which loop should I choose?

- Choose a **for-each loop** when you only need to read each value, such as printing values or finding the largest one.
- Choose an **index-based loop** when you need the position, need to update an element, or need more control over how the loop moves.

## 7. Print an Entire Array on One Line

Some languages have a built-in shortcut to print an array. These examples use an array containing `1`, `2`, and `3`.

### Python

Print the list with brackets:

```python
print(arr)
```

Output:

```text
[1, 2, 3]
```

Print the values separated by spaces:

```python
print(*arr)
```

Output:

```text
1 2 3
```

### JavaScript

Print the array:

```javascript
console.log(arr);
```

To choose the separator between values, use `join`:

```javascript
console.log(arr.join(" -> "));
```

Output:

```text
1 -> 2 -> 3
```

### Java

Use `Arrays.toString`. Printing an array directly does not show its values.

```java
import java.util.Arrays;

System.out.println(Arrays.toString(arr));
```

Output:

```text
[1, 2, 3]
```

### C++ (C++23)

C++23 provides `std::println` to print standard containers such as `std::vector`:

```cpp
#include <print>
#include <vector>

std::vector<int> arr = {1, 2, 3};
std::println("{}", arr);
```

Output:

```text
[1, 2, 3]
```

This requires a compiler and standard library that support C++23 printing and range formatting. With older C++ versions, use a loop to print the values.

### C

C does not have a built-in shortcut to print all array elements. Use a loop and the array length:

```c
#include <stdio.h>

int arr[] = {1, 2, 3};
int length = sizeof(arr) / sizeof(arr[0]);

for (int i = 0; i < length; i++) {
	printf("%d ", arr[i]);
}
printf("\n");
```

Output:

```text
1 2 3
```

### Quick summary

| Language   | Shortcut                                   | Example output |
| ---------- | ------------------------------------------ | -------------- |
| Python     | `print(arr)`                               | `[1, 2, 3]`    |
| JavaScript | `console.log(arr)`                         | `[1, 2, 3]`    |
| Java       | `System.out.println(Arrays.toString(arr))` | `[1, 2, 3]`    |
| C++23      | `std::println("{}", arr)`                  | `[1, 2, 3]`    |
| C          | Use a loop                                 | `1 2 3`        |

---

## 8. Get a Character from a String

String positions use zero-based indexing: the first character is at index `0`, the second is at index `1`, and so on.

For the string `"Hello"`, index `1` contains `e`.

### Python

Use square brackets. Negative indexes count from the end, so `-1` means the last character.

```python
text = "Hello"
character = text[1]   # 'e'
last_character = text[-1]  # 'o'
```

### JavaScript

Use square brackets or `.at()`. The `.at()` method accepts negative indexes.

```javascript
const text = "Hello";
const character = text[1]; // 'e'
const lastCharacter = text.at(-1); // 'o'
```

### Java

Use `.charAt(index)`. Square brackets do not work on Java strings.

```java
String text = "Hello";
char character = text.charAt(1); // 'e'
```

### C++

For `std::string`, use square brackets or `.at()`. `.at()` checks the index and throws an exception if it is out of range; square brackets do not perform that check.

```cpp
#include <string>

std::string text = "Hello";
char character = text[1];       // 'e'
char checkedCharacter = text.at(1); // 'e'
```

### C

A C string is a character array ending with a special null character (`'\0'`). Access its characters with square brackets.

```c
char text[] = "Hello";
char character = text[1]; // 'e'
```

### Quick comparison

| Language   | How to get the character at index `i` | Negative index support                     |
| ---------- | ------------------------------------- | ------------------------------------------ |
| Python     | `text[i]`                             | Yes, such as `text[-1]`                    |
| JavaScript | `text[i]` or `text.at(i)`             | `.at()` supports it, such as `text.at(-1)` |
| Java       | `text.charAt(i)`                      | No                                         |
| C++        | `text[i]` or `text.at(i)`             | No                                         |
| C          | `text[i]`                             | No                                         |

These examples use basic English letters. Some languages represent non-English characters using multiple bytes or code units, so one index does not always correspond to one visible character.
