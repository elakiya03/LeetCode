# Program Notes

## Contents

- [File Naming Conventions](#1-file-naming-conventions)
- [What Is an Array?](#2-what-is-an-array)
- [Array Declarations in Different Languages](#3-array-declarations-in-different-languages)
- [Find Array Length](#4-find-array-length)
- [Passing an Array to a Function](#5-passing-an-array-to-a-function)
- [Loop Through an Array](#6-loop-through-an-array)
- [Print an Entire Array on One Line](#7-print-an-entire-array-on-one-line)
- [Find the Smallest and Largest Values and Their Indexes](#8-find-the-smallest-and-largest-values-and-their-indexes)
- [Get a Character from a String](#9-get-a-character-from-a-string)
- [Find String Length](#10-find-string-length)
- [Common Data Structures](#11-common-data-structures)
- [Function Return Types](#12-function-return-types)

## 1. File Naming Convention

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

## 8. Find the Smallest and Largest Values and Their Indexes

### Python

Use `min` and `max` to get the values. The `index` method finds the first position of each value.

```python
arr = [8, 3, 5, 3, 9]

smallest = min(arr)
largest = max(arr)
smallest_index = arr.index(smallest)
largest_index = arr.index(largest)
```

### JavaScript

`Math.min` and `Math.max` find the values. The spread operator (`...`) passes the array values to these functions. `indexOf` finds the first position.

```javascript
const arr = [8, 3, 5, 3, 9];

const smallest = Math.min(...arr);
const largest = Math.max(...arr);
const smallestIndex = arr.indexOf(smallest);
const largestIndex = arr.indexOf(largest);
```

### Java

Streams can find the values. A loop finds the indexes; strict comparisons keep the first index when values repeat.

```java
import java.util.Arrays;

int[] arr = {8, 3, 5, 3, 9};
int smallest = Arrays.stream(arr).min().getAsInt();
int largest = Arrays.stream(arr).max().getAsInt();
int smallestIndex = 0;
int largestIndex = 0;

for (int i = 1; i < arr.length; i++) {
	if (arr[i] < arr[smallestIndex]) {
		smallestIndex = i;
	}
	if (arr[i] > arr[largestIndex]) {
		largestIndex = i;
	}
}
```

### C++

`std::min_element` and `std::max_element` return iterators to the first matching values. `std::distance` converts each iterator to an index.

```cpp
#include <algorithm>
#include <iterator>
#include <vector>

std::vector<int> arr = {8, 3, 5, 3, 9};
auto smallestIt = std::min_element(arr.begin(), arr.end());
auto largestIt = std::max_element(arr.begin(), arr.end());

int smallest = *smallestIt;
int largest = *largestIt;
auto smallestIndex = std::distance(arr.begin(), smallestIt);
auto largestIndex = std::distance(arr.begin(), largestIt);
```

For a C-style array, use `std::min_element(arr, arr + size)` and `std::max_element(arr, arr + size)` instead.

### C

C has no built-in minimum or maximum function for arrays. Start both indexes at `0`, then check every remaining value.

```c
int arr[] = {8, 3, 5, 3, 9};
int size = sizeof(arr) / sizeof(arr[0]);
int smallestIndex = 0;
int largestIndex = 0;

for (int i = 1; i < size; i++) {
	if (arr[i] < arr[smallestIndex]) {
		smallestIndex = i;
	}
	if (arr[i] > arr[largestIndex]) {
		largestIndex = i;
	}
}

int smallest = arr[smallestIndex];
int largest = arr[largestIndex];
```

### Results for the example

| Result   | Value | Index |
| -------- | ----: | ----: |
| Smallest |   `3` |   `1` |
| Largest  |   `9` |   `4` |

## 9. Get a Character from a String

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

## 10. Find String Length

For the basic text `"Hello"`, each language reports a length of `5`. The syntax differs:

### Python

Use the built-in `len()` function:

```python
length = len(text)
```

### JavaScript

Use the `.length` property. It does not use parentheses:

```javascript
const length = text.length;
```

### Java

Use the `.length()` method. This is different from a Java array, which uses `.length` without parentheses:

```java
int length = text.length();
```

### C++

For a `std::string`, `.length()` and `.size()` return the same result:

```cpp
#include <string>

std::string text = "Hello";
auto length = text.length();
// text.size() works the same way.
```

### C

Use `strlen()` from `<string.h>`. It counts bytes until the string's null terminator (`'\0'`):

```c
#include <string.h>

char text[] = "Hello";
size_t length = strlen(text);
```

### Quick comparison

| Language          | Syntax                           | What the length counts                               |
| ----------------- | -------------------------------- | ---------------------------------------------------- |
| Python            | `len(text)`                      | Unicode code points                                  |
| JavaScript        | `text.length`                    | UTF-16 code units                                    |
| Java              | `text.length()`                  | UTF-16 code units                                    |
| C++ `std::string` | `text.length()` or `text.size()` | `char` units; UTF-8 text is usually counted as bytes |
| C                 | `strlen(text)`                   | Bytes before the null terminator                     |

## 11. Common Data Structures

### C++

- `std::array`: A fixed-size sequence whose size is known at compile time. Use it when the number of elements will not change.
- `std::vector`: A resizable sequence with fast access by index. Use it when the number of elements may change. Choose `std::vector` over `std::array` when you need to add or remove elements.
- `std::list`: A doubly linked list. Use it when you often insert or remove items through an iterator; it does not support fast access by index.
- `std::stack`: A last-in, first-out (LIFO) structure. Use it when the newest item should be handled first.
- `std::queue`: A first-in, first-out (FIFO) structure. Use it when the oldest item should be handled first.
- `std::map`: Stores key-value pairs ordered by key. Use it when you need keys kept sorted.
- `std::unordered_map`: Stores key-value pairs in a hash table. Use it for fast average key lookup when sorted order is not needed.
- `std::set`: Stores unique values ordered by value. Use it when values must be unique and sorted.
- `std::unordered_set`: Stores unique values in a hash table. Use it when you need uniqueness and fast average lookup, but not sorted order.
- `std::priority_queue`: A heap; by default, the largest value is available first. Use it when you repeatedly need the highest-priority value.

### Java

- Built-in array (such as `int[]`): A fixed-size sequence. Use it when the number of elements will not change.
- `List` interface: Describes an ordered collection that can contain duplicates. Use it as a variable or parameter type when you do not need to depend on one specific list implementation.
- `ArrayList`: A resizable array. Use it for most lists, especially when you access items by index.
- `Vector`: A resizable array with synchronized methods. It is a legacy class; use `ArrayList` for most new code unless an older API requires `Vector`.
- `LinkedList`: A linked list that implements queue and deque interfaces. Use it when you specifically need those operations; `ArrayDeque` is often a better choice for a typical stack or queue.
- `Queue` interface: Describes queue behavior. Use an implementation such as `ArrayDeque` for first-in, first-out (FIFO) behavior or `PriorityQueue` for priority-based behavior.
- `Deque` interface: Describes a queue that allows adding and removing items at both ends. `ArrayDeque` is a common implementation and can also be used as a stack.
- `Stack`: A legacy last-in, first-out (LIFO) class. Prefer `ArrayDeque` for new code.
- `Map` interface: Describes key-value storage. Use it as a variable or parameter type when you do not need to depend on a specific map implementation.
- `HashMap`: Stores key-value pairs for fast average lookup when key order does not matter.
- `TreeMap`: Stores key-value pairs sorted by key. Use it when you need ordered keys.
- `Hashtable`: A legacy synchronized key-value map. Prefer `HashMap` for ordinary new code.
- `Set` interface: Describes a collection that stores unique values. Use it as a variable or parameter type when you do not need to depend on a specific set implementation.
- `HashSet`: Stores unique values for fast average membership checks.
- `TreeSet`: Stores unique values in sorted order.
- `PriorityQueue`: A heap; by default, the smallest value is available first. Use it when you repeatedly need the next smallest value.

### Python

- `list`: A resizable sequence with access by index. It can also work as a stack using `append()` and `pop()`.
- `dict`: Stores key-value pairs and preserves insertion order. Use it for looking up a value by key.
- `set`: Stores unique values. Use it to remove duplicates or check whether a value is present.
- `heapq`: A module that provides a min-heap. Use it when you repeatedly need the smallest value.
- `collections.deque`: A double-ended queue. Use it for efficient additions and removals at either end, including ordinary queue behavior with `append()` and `popleft()`.
- Python has no built-in general-purpose linked-list class; use `list` or `deque` for most sequence needs.

### JavaScript

- `Array`: A resizable sequence with access by index. It can also work as a stack with `push()` and `pop()`.
- `Map`: Stores key-value pairs. Use it when keys can be any value or when you want map-specific operations.
- `Set`: Stores unique values. Use it to remove duplicates or check membership.
- JavaScript has no built-in linked-list or priority-queue class. Use an array for simple cases or a suitable library when those structures are needed.

### Choosing a Structure

- Know the size in advance and will it stay fixed? Use C++ `std::array` or a Java array.
- Need the sequence to grow or shrink? Use C++ `std::vector`, Java `ArrayList`, Python `list`, or JavaScript `Array`.
- Need an ordered sequence and index access? Use `std::vector`, Java `ArrayList`, Python `list`, or JavaScript `Array`.
- Need last-in, first-out behavior? Use a stack, such as C++ `std::stack`, Java `ArrayDeque`, Python `list`, or JavaScript `Array`.
- Need first-in, first-out behavior? Use C++ `std::queue`, Java `ArrayDeque`, or Python `collections.deque`. JavaScript arrays can do this with `push()` and `shift()`, but `shift()` can be slow for large arrays.
- Need key-value lookup? Use a map or dictionary. Choose an ordered map when keys must stay sorted; choose a hash-based map when order is not needed.
- Need unique values? Use a set. Choose an ordered set if the values must stay sorted.
- Need to repeatedly get the next highest- or lowest-priority item? Use a priority queue or heap.

## 12. Function Return Types

A function's return type describes the value it gives back when it finishes. In Java, functions inside a class are called methods.

### C

C requires a return type before the function name. It has no built-in string or resizable array type.

```c
#include <stdbool.h>
#include <stddef.h>

int get_number(void) {
	return 42;
}

const char *get_text(void) {
	return "Hello";
}

bool get_flag(void) {
	return true;
}

char get_letter(void) {
	return 'A';
}
```

To return an array, return a pointer to its first element. The example uses `static` so the array remains valid after the function returns. The caller also needs the array length separately.

```c
int *get_numbers(size_t *length) {
	static int numbers[] = {1, 2, 3};
	*length = sizeof(numbers) / sizeof(numbers[0]);
	return numbers;
}
```

For an array of strings, return a pointer to the first string pointer:

```c
const char **get_words(size_t *length) {
	static const char *words[] = {"apple", "banana"};
	*length = sizeof(words) / sizeof(words[0]);
	return words;
}

char *get_letters(size_t *length) {
	static char letters[] = {'X', 'Y', 'Z'};
	*length = sizeof(letters) / sizeof(letters[0]);
	return letters;
}
```

### C++

C++ uses `std::string` for text and `std::vector` for a resizable list. Returning these by value is the usual approach.

```cpp
#include <string>
#include <vector>

int getNumber() {
	return 42;
}

std::string getText() {
	return "Hello";
}

bool getFlag() {
	return true;
}

char getLetter() {
	return 'A';
}

std::vector<int> getNumbers() {
	return {1, 2, 3};
}

std::vector<std::string> getWords() {
	return {"apple", "banana"};
}

std::vector<char> getLetters() {
	return {'X', 'Y', 'Z'};
}
```

### Java

Java methods must be declared inside a class. The examples below show their return types and method bodies.

```java
class Example {
	int getNumber() {
		return 42;
	}

	String getText() {
		return "Hello";
	}

	boolean getFlag() {
		return true;
	}

	char getLetter() {
		return 'A';
	}

	int[] getNumbers() {
		return new int[]{1, 2, 3};
	}

	String[] getWords() {
		return new String[]{"apple", "banana"};
	}

	char[] getLetters() {
		return new char[]{'X', 'Y', 'Z'};
	}
}
```

### Python

Python does not enforce type hints at runtime. Hints document the expected return type and help editors and type checkers.

```python
def get_number() -> int:
	return 42

def get_text() -> str:
	return "Hello"

def get_flag() -> bool:
	return True

def get_letter() -> str:
	return "A"

def get_numbers() -> list[int]:
	return [1, 2, 3]

def get_words() -> list[str]:
	return ["apple", "banana"]

def get_letters() -> list[str]:
	return ["X", "Y", "Z"]
```

Python has no separate `char` type. A one-character value is a string (`str`).

### JavaScript

JavaScript does not declare a function's return type. The returned value determines its type when the function runs.

```javascript
function getNumber() {
  return 42;
}

function getText() {
  return "Hello";
}

function getFlag() {
  return true;
}

function getLetter() {
  return "A";
}

function getNumbers() {
  return [1, 2, 3];
}

function getWords() {
  return ["apple", "banana"];
}

function getLetters() {
  return ["X", "Y", "Z"];
}
```

JavaScript has no separate `char` type; a single character is a string. TypeScript adds optional type declarations, for example: `function getNumber(): number { return 42; }`.
