# Rotate Array Left

This problem moves the first `k` values of an array to the end, keeping their order.

Example:

```text
Array: 10 20 30 40 50
k: 2
Result: 30 40 50 10 20
```

The program reads the number of elements, the array values, and `k`. It then prints the rotated array.

## How the C Version Passes the Array

The C function is declared like this:

```c
void rotateLeftByK(int arr[], int n, int k)
```

Inside a function parameter, `int arr[]` is treated as `int *arr`. When the function is called with `rotateLeftByK(arr, n, k)`, `arr` points to the first element of the original array. It is not a full copy, so reversing and changing elements inside the function changes the array in `main` too.

C does not pass the array length along with the pointer, so `n` must be passed separately. Writing `&arr` would mean the address of the entire array, which is a different pointer type. Writing `*arr` would mean the value of the first element, not the array pointer.

## How Array Arguments Work in Each Language

| Language   | What the function receives                                                 | Do element changes affect the caller's array/list?   |
| ---------- | -------------------------------------------------------------------------- | ---------------------------------------------------- |
| C          | A pointer to the first element; pass the length separately                 | Yes                                                  |
| C++        | A copy by default; use `std::vector<int>&` to refer to the original vector | With a reference, yes; with a copy, no               |
| Java       | A copy of the array reference                                              | Yes, because both references point to the same array |
| Python     | A reference to the same list object                                        | Yes, because lists are mutable                       |
| JavaScript | A copy of the array reference                                              | Yes, because both references point to the same array |

In Java, Python, and JavaScript, changing an element can be seen by the caller. Replacing the function's local parameter with a different array or list does not replace the caller's variable.

## Two C++ Approaches

The first C++ version takes the vector by reference and reverses it in place. Its changes are visible in `main`.

The second C++ version builds and returns a new vector. `main` stores that returned vector with `v = rotateLeftByK(v, k)`.

The Java, Python, and JavaScript files in this folder are currently empty; the table above describes how those languages pass arrays or lists to functions.
