# Day 11

## Problem

**Remove Duplicates from Sorted Array II**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Two Variables (Write Pointer), In-Place Modification, Sorted Arrays

---

## Approach

- Since the array is sorted, duplicate elements appear consecutively.
- Allow each element to appear **at most twice**.
- Use a write pointer to track the position where the next valid element should be placed.
- Traverse the array starting from the third element.
- If the current element is different from the element located two positions before the write pointer, keep it by writing it to the current write position.
- Return the new length of the modified array.

---

## Algorithm

1. If the array has two or fewer elements, return its length.
2. Initialize `write = 2`.
3. Traverse the array starting from index `2`.
4. Compare the current element with `nums[write - 2]`.
5. If they are different:
   - Assign `nums[write] = nums[i]`.
   - Increment `write`.

6. Continue until all elements are processed.
7. Return `write` as the new length of the array.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Sorted Array Traversal
- Write Pointer Technique
- In-Place Array Modification
- Controlling Duplicate Occurrences
- Efficient Array Processing

---

## Learning Notes

Today I learned how to modify a sorted array in place while allowing each element to appear at most twice. Instead of removing all duplicates, this problem introduced the concept of controlling how many times a value can be retained. Using a write pointer made it possible to process the array efficiently without allocating additional memory.

---

## Status

✅ Solved
