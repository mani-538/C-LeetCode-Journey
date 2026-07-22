# Day 16

## Problem

**Valid Anagram**

- **Difficulty:** 🟢 Easy
- **Topics:** Strings, Character Counting, Frequency Array

---

## Approach

- First, check whether both strings have the same length. If not, they cannot be anagrams.
- Create a frequency array of size `26` to store the count of each lowercase English letter.
- Traverse the first string and increment the corresponding character count.
- Traverse the second string and decrement the corresponding character count.
- Finally, verify that every value in the frequency array is `0`.
- If all counts are zero, the strings are anagrams; otherwise, they are not.

---

## Algorithm

1. Compare the lengths of both strings.
2. If the lengths are different, return `false`.
3. Initialize a frequency array of size `26` with all values set to `0`.
4. Traverse the first string and increment the count for each character.
5. Traverse the second string and decrement the count for each character.
6. Traverse the frequency array.
7. If any count is not `0`, return `false`.
8. Otherwise, return `true`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

> **Note:** The space complexity is considered `O(1)` because the frequency array always has a fixed size of `26`, regardless of the input length.

---

## Concepts Learned

- String Traversal
- Character Counting
- Frequency Array
- ASCII Character Mapping
- Comparing Character Frequencies

---

## Learning Notes

Today I learned how to use a frequency array to compare the occurrence of characters in two strings. Instead of sorting the strings, I counted the frequency of each lowercase letter and verified that both strings had identical character counts. This problem strengthened my understanding of character mapping, ASCII indexing, and efficient string processing techniques.

---

## Status

✅ Solved
