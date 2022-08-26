#include <stdio.h>
#include <string.h>
int checkMail(char string[][100], int n);
int main()
{
    char string[100][100];
    int n = 0;
    printf("Emails Count: ");
    scanf("%d", &n);
    printf("Enter Emails Below: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Email %d: ", i + 1);
        scanf("%s", string[i]);
    }
    checkMail(string,n);

    return 0;
}
int checkMail(char string[][100], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; string[i][j]; j++)
        {
            if (string[i][j] == '@')
                count++;
        }
        if (count == 0)
        {
            printf("%s\n", string[i]);
        }
    }
}