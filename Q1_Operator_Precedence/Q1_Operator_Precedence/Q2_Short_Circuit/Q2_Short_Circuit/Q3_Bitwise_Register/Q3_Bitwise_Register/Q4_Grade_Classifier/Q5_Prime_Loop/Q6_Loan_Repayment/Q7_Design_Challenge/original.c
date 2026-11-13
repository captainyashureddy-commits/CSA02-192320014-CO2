
#include <stdio.h>

int isPrimeOriginal(int n, int *count)
{
    *count = 0;

    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++)
    {
        (*count)++;

        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int tickets[] = {97, 100, 7919, 1000003};
    int count;
    int n = 4;

    printf("ORIGINAL PRIME NUMBER VERIFICATION\n");

    for (int i = 0; i < n; i++)
    {
        int result = isPrimeOriginal(tickets[i], &count);

        printf("\nTicket Number: %d\n", tickets[i]);
        printf("Status: %s\n", result ? "Valid" : "Invalid");
        printf("Divisibility Checks: %d\n", count);
    }

    return 0;
}
