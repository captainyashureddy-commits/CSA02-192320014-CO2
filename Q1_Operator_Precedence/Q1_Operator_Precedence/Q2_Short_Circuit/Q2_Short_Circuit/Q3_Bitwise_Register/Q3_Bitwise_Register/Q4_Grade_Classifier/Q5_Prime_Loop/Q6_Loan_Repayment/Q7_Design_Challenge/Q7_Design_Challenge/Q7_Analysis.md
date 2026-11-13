# Q7 – Prime Number Verification: Design Challenge Analysis

## 1. Problem Identification

The original prime-number verification program checks every number from 2 to n-1 to determine whether a ticket number is prime.

This method requires many unnecessary divisibility checks for large prime numbers, resulting in poor performance.

## 2. Existing System

The original program uses a for loop to check all possible divisors from 2 to n-1.

Its time complexity is O(n), which makes it inefficient for large ticket numbers.

## 3. Proposed Improvement

The redesigned program checks divisibility only up to the square root of the given number.

This reduces unnecessary iterations while maintaining the same accuracy.

## 4. Objectives

- Reduce the number of divisibility checks.
- Improve prime-number verification efficiency.
- Maintain accurate results.
- Compare original and optimized algorithms.

## 5. Technologies Used

- Programming Language: C
- Compiler: GCC
- Platform: OnlineGDB
- Concepts: Functions, loops, conditional statements and pointers.

## 6. Implementation

Two programs were developed:

**Original Program:** Checks divisors from 2 to n-1.

**Optimized Program:** Checks divisors only up to the square root of n.

Both programs use the same ticket numbers for fair comparison.

## 7. Performance Comparison

| Ticket | Original Checks | Optimized Checks |
|---:|---:|---:|
| 97 | 95 | 8 |
| 100 | 1 | 1 |
| 7919 | 7917 | 87 |
| 1000003 | 1000001 | 999 |

The optimized algorithm significantly reduces the number of divisibility checks.

## 8. Time Complexity

- Original Algorithm: O(n)
- Optimized Algorithm: O(√n)
- Space Complexity: O(1) for both algorithms.

## 9. Advantages

- Faster prime-number verification.
- Fewer unnecessary calculations.
- Better performance for large numbers.
- Same accuracy as the original approach.

## 10. Limitations

- The optimized method still requires more checks for very large prime numbers.
- The algorithm is designed for individual number verification rather than extremely large-scale prime generation.

## 11. Future Scope

The program can be further improved using advanced prime-testing algorithms, efficient data structures and batch processing techniques.

## 12. Conclusion

The design challenge demonstrates how algorithm optimization improves program efficiency. By replacing the original O(n) approach with an O(√n) approach, the redesigned program reduces the number of divisibility checks while maintaining accurate results.
