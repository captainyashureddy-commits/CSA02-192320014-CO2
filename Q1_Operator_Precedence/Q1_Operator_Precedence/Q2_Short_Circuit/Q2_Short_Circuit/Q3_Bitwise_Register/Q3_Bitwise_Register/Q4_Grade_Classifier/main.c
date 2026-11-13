#include <stdio.h>

char find_grade(int marks)
{
    if (marks < 0 || marks > 100)
        return '?';

    switch (marks / 10)
    {
        case 10:
        case 9:
            return 'S';

        case 8:
            return 'A';

        case 7:
            return 'B';

        case 6:
            return 'C';

        case 5:
            return 'D';

        default:
            return 'F';
    }
}

int main()
{
    int marks[] = {100, 95, 83, 50, 49, -5};
    int size = sizeof(marks) / sizeof(marks[0]);

    printf("Grade Classification\n");

    for (int i = 0; i < size; i++)
    {
        printf("Marks: %d | Grade: %c\n",
               marks[i], find_grade(marks[i]));
    }

    return 0;
}
