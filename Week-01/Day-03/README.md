# Day 3

## Problem

**Find Numbers with Even Number of Digits**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Counting, Basic Mathematics, Simulation

---

## Approach

- Traverse each number in the array.
- Count the number of digits by repeatedly dividing the number by `10`.
- Check whether the digit count is even.
- If it is even, increment the answer.
- Return the total count after processing all numbers.

---

## Algorithm

1. Initialize `count = 0`.
2. Iterate through each element in the array.
3. For each number:
   - Count its digits by repeatedly dividing by `10`.
   - Check if the digit count is even.

4. If the digit count is even, increment `count`.
5. Return `count`.

---

## Complexity Analysis

- **Time Complexity:** `O(n × d)`
  - `n` = number of elements in the array
  - `d` = number of digits in each number

- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Array Traversal
- Counting Digits
- Integer Division
- Conditional Logic
- Time Complexity Analysis

---

## Learning Notes

Today I learned how to determine the number of digits in an integer using repeated division by `10`. This problem helped reinforce array traversal, counting techniques, and using simple mathematical operations to solve a practical problem efficiently.

---

## Status

✅ Solved
