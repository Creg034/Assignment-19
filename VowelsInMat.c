#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int vowel(char str[5][100], int ans[5]);
int main()
{
    char str[5][100];
    printf("Enter Strings Below: \n");
    for (int i = 0; i < 5; i++)
    {

        printf("String[%d]: \n", i);
        fgets(str[i], 100, stdin);
    }
    system("cls");
    int ans[5];
    vowel(str, ans);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ans[i]);
    }
    _getch();
    return 0;
}
int vowel(char str[5][100], int ans[5])
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        count = 0;
        for (int j = 0; str[i][j]; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u')
            {
                count++;
            }
        }
        ans[i] = count;
    }
}