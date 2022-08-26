#include <stdio.h>
#include <string.h>
void checkPal(char string[][100]);
void swap(char *a, char *b);
int main()
{
    int n = 5;
    char string[10][100] = {
        "Gaurav", "Saurav", "palap", "Pankaj", "Chutiya"};
    // printf("Enter String: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%s", string[i]);
    // }
    checkPal(string);
    return 0;
}
void checkPal(char string[][100])
{
    int n = 5;
    int count[n];
    int string2[5][100];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
        for (int j = 0; string[i][j] != 0; j++)
        {
            count[i]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            string2[i][j] = string[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < count[i] / 2; j++)
        {
            swap(&string[i][j], &string[i][(count[i] - 1) - j]);
        }
    }
    int cmp = 0;
    for (int i = 0; i < n; i++)
    {
        int p = 0;
        for (int j = 0; j < count[i]; j++)
        {
            if (string[i][j] == string2[i][j])
                p++;
        }
        if(count[i]==p)
        printf("%s is a Palindrom",string);
    }
}
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}