#include <stdio.h>
#include <string.h>
void facto(int n);
int username(char name[]);
int digits(int factorial);

void main()
{
    int n;
    char name[100];
    int pass = username(name);
    if (pass)
    {
        printf("******Pass-Accepted******\n");
        printf("\nEnter N: ");
        scanf("%d", &n);
        facto(n);
    }
    else
        printf("Error: No username Matches");
}
void facto(int n)
{
    // 1*2*3*4*--n
    int factorial = 1;
    for (int i = 0; i < n; i++)
    {
        factorial *= i + 1;
    }
    printf("**********************");
    for (int n = 0; n < digits(factorial); n++)
    {
        printf("*");
    }
    printf("\n* factorail of %d is %d *\n", n, factorial);
    printf("**********************");
    for (int n = 0; n < digits(factorial); n++)
    {
        printf("*");
    }
}
int username(char name[])
{
    printf("Username: ");
    scanf("%s", name);
    char list[10][100] = {
        "gaurav",
        "sarthak",
        "rucha",
        "gargi",
        "anushka",
        "samdhan",
        "rahul",
        "prateek",
        "viraj",
        "aai"};
    int n = 10;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(strlwr(name), list[i]) == 0)
            return 1;
    }
    return 0;
}
int digits(int factorial)
{
    int count = 0;
    while (factorial)
    {
        factorial = factorial / 10;
        count++;
    }
    return count;
}