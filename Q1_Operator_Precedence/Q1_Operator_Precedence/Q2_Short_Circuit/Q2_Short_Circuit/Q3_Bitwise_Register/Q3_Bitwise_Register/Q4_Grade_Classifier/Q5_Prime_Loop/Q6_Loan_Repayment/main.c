
#include <stdio.h>

int main()
{
    long long balance = 1000000;
    long long monthly_payment = 200000;
    long long interest;
    long long payment;
    long long total_interest = 0;
    long long new_balance;
    int month = 0;

    printf("SELF-HELP GROUP MICRO-LOAN REPAYMENT\n");
    printf("Initial Loan: Rs. 10000.00\n");
    printf("Monthly Interest Rate: 2%%\n");
    printf("Monthly Payment: Rs. 2000.00\n\n");

    printf("Month\tOpening\t\tInterest\tPayment\t\tClosing\n");

    while (balance > 0 && month < 360)
    {
        month++;

        interest = (balance * 2 + 50) / 100;

        if (monthly_payment <= interest)
        {
            printf("Repayment amount is insufficient.\n");
            return 0;
        }

        new_balance = balance + interest;
        payment = monthly_payment;

        if (payment > new_balance)
            payment = new_balance;

        new_balance = new_balance - payment;

        total_interest += interest;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",
               month,
               balance / 100.0,
               interest / 100.0,
               payment / 100.0,
               new_balance / 100.0);

        balance = new_balance;
    }

    printf("\nTotal Months: %d\n", month);
    printf("Total Interest: Rs. %.2f\n", total_interest / 100.0);

    return 0;
}
