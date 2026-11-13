### Q4 – University Grade and Scholarship Classifier: Analysis

**1. Why can't switch directly check ranges?**

The switch statement checks exact constant values. It cannot directly check conditions such as marks between 90 and 100. Therefore, we use `marks / 10` to group marks into categories.

**2. How does marks / 10 work?**

Integer division converts marks into grade categories.

- 90–100: S Grade
- 80–89: A Grade
- 70–79: B Grade
- 60–69: C Grade
- 50–59: D Grade
- 0–49: F Grade

**3. What happens if break is missing?**

If break is missing, execution continues into the next case statements. This is called fall-through. It may produce incorrect grade results.

**4. Compare switch and else-if statements.**

Switch is useful when checking fixed values or grouped integer categories. Else-if is more flexible because it can directly check ranges and multiple conditions.

**5. How can a lookup table be used?**

A lookup table can store grade boundaries and corresponding grade letters. The program compares marks with the stored boundaries and identifies the correct grade.

**6. How can scholarship eligibility be checked?**

Nested if statements can check both the student's grade and family income. First, the program checks the grade. Then it checks whether the family income satisfies the scholarship eligibility condition.

**7. Boundary Testing**

The following values should be tested to verify the correctness of the program:

-1, 0, 49, 50, 59, 60, 69, 70, 79, 80, 89, 90, 99, 100, 101.

Boundary testing helps identify errors at the minimum and maximum limits of each grade category.

**Conclusion:**

The grade classifier demonstrates how switch statements, integer division, conditional statements and boundary testing can be used to develop a reliable grading system. It also shows how scholarship eligibility can be extended using nested conditions.
