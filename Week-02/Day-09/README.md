# Day 9

## Problem

**Remove Duplicates from Sorted Array**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Two Variables (Foundation of Two Pointers), In-Place Array Modification, Sorted Arrays

---

## Approach

- Since the array is already sorted, duplicate elements appear next to each other.
- Use one variable to keep track of the position of the last unique element.
- Traverse the array from the second element onward.
- Whenever a new unique element is found, place it at the next available position.
- After processing all elements, return the number of unique elements.

---

## Algorithm

1. If the array is empty, return `0`.
2. Initialize `index = 1`.
3. Traverse the array starting from the second element.
4. Compare the current element with the previous element.
5. If they are different:
   - Assign `nums[index] = nums[i]`.
   - Increment `index`.

6. Return `index` as the number of unique elements.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Sorted Array Traversal
- In-Place Array Modification
- Two Variables
- Removing Duplicates Efficiently
- Foundation of the Two-Pointer Technique

---

## Learning Notes

Today I learned how the sorted property of an array makes it easy to remove duplicate elements without using extra memory. By maintaining the position of the last unique element, I can overwrite duplicate values while preserving the required order. This problem further strengthened my understanding of in-place array modification and introduced another practical application of the Two-Pointer technique.

---

## Status

✅ Solved
