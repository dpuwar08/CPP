# 📊 Linear Memory Structures: Static Arrays & Dynamic Vectors

This directory bridges the gap between fixed stack-allocated memory arrays and dynamic heap containers using native C++ arrays alongside the STL (Standard Template Library) `std::vector` class.

---

## 🧭 Core Concepts Mastered

* **Contiguous Memory Allotment:** Managing sequential, fixed-size data blocks allocated directly on the stack frame.
* **STL Vector Lifecycles:** Utilizing dynamic heap arrays that handle automatic resizing triggers, storage reallocation thresholds, and sequential elements tracking using elements like `.push_back()`.
* **Structural Vector Capacity:** Understanding the critical architectural difference between a Vector's active element `.size()` vs. its underlying pre-allocated background memory `.capacity()`.
* **Linear Space Traversal:** Iterating through memory buffers utilizing classic bracket notation tracking, pointer arithmetic, and modern range-based `for(auto item : target)` loops.

---

## 📁 File Directory

### 📦 Fixed-Size Sequential Memory (Native Arrays)
* **`array1.cpp` through `array10.cpp`** — A comprehensive, 10-part application breakdown mastering fundamental linear data operations:
  * Linear search item isolation algorithms.
  * Extrapolating absolute Maximum and Minimum value entries across standard arrays.
  * Out-of-bounds safety limits validation loops.
  * In-place indexing elements swapping routines.
  * Reversing array elements sequence orders directly inside the stack frame.

### 🚀 Dynamic Heap Memory Arrays (STL Vectors)
* [`vector1.cpp`](./vector1.cpp) — Tracking baseline operations, initializing dynamic vector containers, and injecting sequences.
* [`vector2.cpp`](./vector2.cpp) — Practical stress test tracking how underlying capacity doubles dynamically once memory limits are breached.
* [`vector3.cpp`](./vector3.cpp) — Advanced element popping, clearance functions (`.clear()`), and modern iterator tracking patterns.

---
**Developer Progress Log:** [Divyarajsinh Puwar](https://github.com/dpuwar08)
