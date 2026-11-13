
#include <stdio.h>

int verification_calls = 0;

int verify_disability_card(int disability)
{
    verification_calls++;
    return disability;
}

int main()
{
    int senior, eligible, disability;
    int result;
    int calls1, calls2;
    int concessions1 = 0;
    int concessions2 = 0;

    for (int i = 1; i <= 1000; i++)
    {
        senior = (i % 4 == 0);
        eligible = (i % 3 == 0);
        disability = (i % 10 == 0);

        result = (senior && eligible) ||
                 verify_disability_card(disability);

        if (result)
            concessions1++;
    }

    calls1 = verification_calls;

    verification_calls = 0;

    for (int i = 1; i <= 1000; i++)
    {
        senior = (i % 4 == 0);
        eligible = (i % 3 == 0);
        disability = (i % 10 == 0);

        result = verify_disability_card(disability) ||
                 (senior && eligible);

        if (result)
            concessions2++;
    }

    calls2 = verification_calls;

    printf("Experiment 1\n");
    printf("Verification calls: %d\n", calls1);
    printf("Concessions: %d\n", concessions1);

    printf("\nExperiment 2\n");
    printf("Verification calls: %d\n", calls2);
    printf("Concessions: %d\n", concessions2);

    return 0;
}
