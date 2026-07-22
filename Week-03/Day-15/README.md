# Day 15

## Problem

**Length of Last Word**

- **Difficulty:** 🟢 Easy
- **Topics:** Strings, Traversal, Simulation

---

## Approach

- Start traversing the string from the end.
- Ignore any trailing spaces.
- Once the last word begins, count its characters until a space or the beginning of the string is reached.
- Return the count as the length of the last word.

---

## Algorithm

1. Initialize `length = 0`.
2. Start from the last character of the string.
3. Skip all trailing spaces.
4. Count each character of the last word.
5. Stop when a space or the beginning of the string is encountered.
6. Return `length`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- String Traversal
- Reverse Traversal
- Character Manipulation
- Handling Whitespace
- Simulation

---

## Learning Notes

Today I learned how to traverse a string in reverse to efficiently find the length of the last word. By skipping trailing spaces before counting characters, I was able to solve the problem without using extra memory. This problem strengthened my understanding of string manipulation and careful handling of edge cases.

---

## Status

✅ Solved
