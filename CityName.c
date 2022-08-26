#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int sort(char arr[10][100]);
void swapstring(char arr[], char arr2[]);
int main()
{
    char string[10][100];
    printf("Enter String Names: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("City[%d]: ", i);
        scanf("%s", string[i]);
    }
    system("cls");
    sort(string);
    return 0;
}
int sort(char arr[10][100])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(arr[i], arr[j]) == 1)
            {
                swapstring(arr[i], arr[j]);
            }
        }
    }
    for (int o = 0; o < 10; o++)
    {

        printf("%s\n", arr[o]);
    }
}
void swapstring(char arr[], char arr2[])
{
    char temp[100];
    int a, b, c;
    a = strlen(arr);
    b = strlen(arr2);
    for (int i = 0; arr[i]; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; arr2[i]; i++)
    {
        arr[i] = arr2[i];
    }
    for (int i = 0; temp[i]; i++)
    {
        arr2[i] = temp[i];
    }
    // Ab
    for (int l = 0; l < 100; l++)
    {
        if (l >= a)
        {
            arr2[l] = 0;
        }
    }
    for (int l = 0; l < 100; l++)
    {
        if (l >= b)
        {
            arr[l] = 0;
        }
    }
}