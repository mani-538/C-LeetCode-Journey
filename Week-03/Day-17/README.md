# Day 17

## Problem

**Reverse String**

- **Difficulty:** 🟢 Easy
- **Topics:** Strings, Two Pointers, In-Place Algorithm

---

## Approach

- Use two pointers:
  - One starting from the beginning of the string (`left`).
  - One starting from the end of the string (`right`).

- Swap the characters at both pointers.
- Move the `left` pointer forward and the `right` pointer backward.
- Continue until both pointers meet or cross.
- The string is reversed in place without using extra memory.

---

## Algorithm

1. Initialize:
   - `left = 0`
   - `right = sSize - 1`

2. While `left < right`:
   - Swap `s[left]` and `s[right]`.
   - Increment `left`.
   - Decrement `right`.

3. The string is now reversed in place.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Two-Pointer Technique
- String Traversal
- In-Place Algorithm
- Character Swapping
- Pointer Manipulation

---

## Learning Notes

Today I learned how the Two-Pointer technique can efficiently reverse a string without allocating additional memory. By swapping characters from both ends of the string and moving the pointers toward the center, I was able to reverse the string in place. This problem reinforced the importance of pointer manipulation and introduced another practical application of in-place algorithms.

---

## Status

✅ Solved
