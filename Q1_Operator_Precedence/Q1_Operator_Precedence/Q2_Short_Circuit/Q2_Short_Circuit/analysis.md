
# Q2 - Short-Circuit Evaluation

## 1. Introduction
Short-circuit evaluation is a feature of C logical operators.
The second condition may be skipped depending on the first condition.

## 2. Experiment 1
Expression:

(senior && eligible) || verify_disability_card(disability)

When both senior and eligibility conditions are true, the disability verification function is skipped.

Verification calls: 834

## 3. Experiment 2
Expression:

verify_disability_card(disability) || (senior && eligible)

The verification function is evaluated first for every passenger.

Verification calls: 1000

## 4. Results
Both experiments produce 334 concessions.
However, Experiment 1 performs fewer verification calls.

## 5. Performance Analysis
Both programs process 1000 passengers.
Their overall time complexity is O(n).

Experiment 1 reduces unnecessary function calls using short-circuit evaluation.

## 6. Alternative Approach
Nested if statements can implement the same conditions.
However, function calls must be positioned carefully to avoid unnecessary verification.

## 7. Conclusion
Short-circuit evaluation improves efficiency when an expensive function call can safely be skipped.
