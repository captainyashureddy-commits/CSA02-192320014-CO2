
#include <stdio.h>

int prime_for(int n, int *count)
{
    *count = 0;

    if (n < 2)
        return 0;

    for (int i = 2; i <= n / i; i++)
    {
        (*count)++;

        if (n % i == 0)
            return 0;
    }

    return 1;
}

int prime_while(int n, int *count)
{
    *count = 0;

    if (n < 2)
        return 0;

    int i = 2;

    while (i <= n / i)
    {
        (*count)++;

        if (n % i == 0)
            return 0;

        i++;
    }

    return 1;
}

int prime_do_while(int n, int *count)
{
    *count = 0;

    if (n < 2)
        return 0;

    int i = 2;

    do
    {
        if (i > n / i)
            break;

        (*count)++;

        if (n % i == 0)
            return 0;

        i++;
    }
    while (i <= n / i);

    return 1;
}

int main()
{
    int tickets[] = {97, 100, 7919, 1000003};
    int count;
    int n = 4;

    printf("LUCKY DRAW TICKET VERIFICATION\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nTicket Number: %d\n", tickets[i]);

        int result = prime_for(tickets[i], &count);

        printf("FOR Loop: %s\n", result ? "Valid" : "Invalid");
        printf("Divisibility Checks: %d\n", count);

        result = prime_while(tickets[i], &count);

        printf("WHILE Loop: %s\n", result ? "Valid" : "Invalid");
        printf("Divisibility Checks: %d\n", count);

        result = prime_do_while(tickets[i], &count);

        printf("DO-WHILE Loop: %s\n", result ? "Valid" : "Invalid");
        printf("Divisibility Checks: %d\n", count);
    }

    return 0;
}
