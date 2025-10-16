#include <stdio.h>

int main()
{
    int pass[10], fail[10];
    int pass_count = 0, fail_count = 0;
    int marks, i;
    float passAvg = 0, failAvg = 0;

    printf("Enter Students marks(0-10).\n");

    for (i = 0; i < 10; i++) 
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks);

        if (marks == -1)
        {
            break;
        }
        else if (marks >= 5 && marks <= 10) 
        {
            pass[pass_count++] = marks;
            passAvg += marks;
        } 
        else if (marks >= 0 && marks < 5) 
        {
            fail[fail_count++] = marks;
            failAvg += marks;
        } 
        else 
        {
            printf("Invalid input! Enter marks between 0 and 10 only.\n");
            i--; 
        }
    }

    printf("\nPass Students Marks\n");
    if (pass_count > 0) 
    {
        for (i = 0; i < pass_count; i++)
            printf("%d ", pass[i]);
        printf("\nAverage = %.2f\n", passAvg / pass_count);
    } 
    else 
    {
        printf("No pass student data entered.\n");
    }

    printf("Fail Students Marks\n");
    if (fail_count > 0) {
        for (i = 0; i < fail_count; i++)
            printf("%d ", fail[i]);
        printf("\nAverage = %.2f\n", failAvg / fail_count);
    } 
    else 
    {
        printf("No fail student data entered.\n");
    }

    return 0;
}