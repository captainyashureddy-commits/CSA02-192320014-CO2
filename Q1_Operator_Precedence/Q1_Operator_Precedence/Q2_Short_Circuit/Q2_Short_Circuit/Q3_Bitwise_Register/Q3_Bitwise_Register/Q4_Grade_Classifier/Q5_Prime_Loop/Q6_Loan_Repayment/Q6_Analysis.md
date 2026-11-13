# Q6 – Self-Help Group Micro-Loan Repayment Analysis

## 1. Introduction

A loan repayment schedule helps borrowers understand how much they need to repay every month, including the interest charged on the remaining loan balance.

This program calculates the monthly interest, repayment amount and outstanding balance for a micro-loan.

## 2. Working Principle

The program starts with a loan amount of ₹10,000 and applies a monthly interest rate of 2%.

A fixed monthly repayment of ₹2,000 is made. Each month, interest is calculated on the outstanding balance and added to the loan before deducting the repayment.

The process continues until the loan is completely repaid.

## 3. Role of Looping Statements

The while loop is used because the number of months required to repay the loan is not known in advance.

The loop continues as long as the outstanding loan balance is greater than zero.

## 4. Monthly Interest Calculation

Monthly Interest = Outstanding Balance × 2 / 100

The interest is calculated every month based on the remaining loan balance.

The program uses integer arithmetic in paise to avoid floating-point calculation errors.

## 5. Repayment Schedule

| Month | Opening Balance | Interest | Payment | Closing Balance |
|---|---:|---:|---:|---:|
| 1 | ₹10,000.00 | ₹200.00 | ₹2,000.00 | ₹8,200.00 |
| 2 | ₹8,200.00 | ₹164.00 | ₹2,000.00 | ₹6,364.00 |
| 3 | ₹6,364.00 | ₹127.28 | ₹2,000.00 | ₹4,491.28 |
| 4 | ₹4,491.28 | ₹89.83 | ₹2,000.00 | ₹2,581.11 |
| 5 | ₹2,581.11 | ₹51.62 | ₹2,000.00 | ₹632.73 |
| 6 | ₹632.73 | ₹12.65 | ₹645.38 | ₹0.00 |

## 6. Final Results

- Initial Loan Amount: ₹10,000.00
- Monthly Interest Rate: 2%
- Monthly Repayment: ₹2,000.00
- Total Repayment Period: 6 months
- Total Interest: ₹645.38
- Final Outstanding Balance: ₹0.00

## 7. Conclusion

The program demonstrates how looping statements and mathematical calculations can be used to generate a loan repayment schedule. It calculates monthly interest, adjusts the final payment and ensures that the loan balance does not become negative.
