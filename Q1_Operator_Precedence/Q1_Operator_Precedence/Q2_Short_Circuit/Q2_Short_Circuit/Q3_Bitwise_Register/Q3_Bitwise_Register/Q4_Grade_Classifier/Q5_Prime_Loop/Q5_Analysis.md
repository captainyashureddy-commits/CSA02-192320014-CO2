# Q5 – Prime Number and Loop Analysis

## 1. Introduction

Prime numbers are natural numbers greater than 1 that have only two factors: 1 and the number itself. This program verifies lucky-draw ticket numbers by checking whether they are prime.

## 2. Working Principle

The program checks divisibility starting from 2 and continues up to the square root of the given number.

If a number is exactly divisible by any value in this range, it is not prime. Otherwise, it is classified as prime.

## 3. Comparison of Looping Statements

**For Loop:** Combines initialization, condition and increment in one statement. It is suitable when the iteration process is clearly defined.

**While Loop:** Checks the condition before executing the loop body. It is useful when the number of iterations is not known beforehand.

**Do-While Loop:** Executes the loop body before checking the condition. Therefore, it guarantees at least one execution when the input is greater than 1.

## 4. Algorithm Optimization

Instead of checking divisibility up to n-1, the program checks only up to the square root of n.

This reduces the number of iterations and improves execution efficiency.

## 5. Time and Space Complexity

- Time Complexity: O(√n)
- Space Complexity: O(1)

The optimized approach requires fewer divisibility checks than the basic approach.

## 6. Test Case Analysis

| Ticket Number | Expected Result |
|---|---|
| 97 | Valid – Prime |
| 100 | Invalid – Not Prime |
| 7919 | Valid – Prime |
| 1000003 | Valid – Prime |

## 7. Performance Comparison

All three loops produce the same prime-number results and the same number of divisibility checks.

The FOR loop is compact, the WHILE loop provides flexible control, and the DO-WHILE loop executes at least once before checking its condition.

## 8. Conclusion

The program demonstrates prime number verification using three different looping statements. It also explains algorithm optimization through square-root-based divisor checking and compares the efficiency of different loop structures.
