# Day 12

## Problem

**Merge Sorted Array**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Two Pointers, In-Place Modification, Sorted Arrays

---

## Approach

- Since both arrays are already sorted, start comparing elements from the **end** of each array.
- Use three pointers:
  - One pointing to the last valid element in the first array.
  - One pointing to the last element in the second array.
  - One pointing to the last position of the merged array.

- Place the larger element at the end of the first array and move the corresponding pointers.
- Continue until all elements from the second array have been merged.

---

## Algorithm

1. Initialize:
   - `i = m - 1` (last valid element in `nums1`)
   - `j = n - 1` (last element in `nums2`)
   - `k = m + n - 1` (last position in `nums1`)

2. Compare `nums1[i]` and `nums2[j]`.
3. Place the larger value at `nums1[k]`.
4. Decrement the corresponding pointer and `k`.
5. Repeat until all elements of `nums2` are merged.
6. The merged sorted array is stored in `nums1`.

---

## Complexity Analysis

- **Time Complexity:** `O(m + n)`
- **Space Complexity:** `O(1)`

> Where:
>
> - `m` = number of valid elements in `nums1`
> - `n` = number of elements in `nums2`

---

## Concepts Learned

- Two-Pointer Technique
- Reverse Array Traversal
- In-Place Array Modification
- Merging Sorted Arrays
- Efficient Space Utilization

---

## Learning Notes

Today I learned how to merge two sorted arrays efficiently without using additional memory. By starting from the end of both arrays, I avoided overwriting valid elements in the first array. This problem strengthened my understanding of the Two-Pointer technique and demonstrated how pointer direction can simplify in-place array operations.

---

## Status

✅ Solved
