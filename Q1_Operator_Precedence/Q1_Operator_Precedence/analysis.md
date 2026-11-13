
# Q1 - Operator Precedence and Discount Bug

## 1. Operator Precedence
Multiplication and division have higher precedence than addition and subtraction.
Parentheses are used to make the calculation order clear.

## 2. Associativity
Multiplication and division follow left-to-right associativity when they have equal precedence.

## 3. Integer Division
When both operands are integers, 15/100 produces zero.
Using floating-point constants such as 15.0/100.0 avoids this problem.

## 4. Undefined Behaviour
The expression count = count++ + 1 modifies count more than once without proper sequencing.
This causes undefined behaviour in C.

## 5. Corrected Calculation
The senior citizen discount is calculated first.
GST is then calculated on the discounted amount.
An additional Rs.50 discount is applied when the corrected bill exceeds Rs.1000.

## 6. Design Decision
Intermediate variables make the calculation easier to understand, test and maintain.

## 7. Conclusion
The corrected program avoids integer division errors and provides a clear billing calculation.
