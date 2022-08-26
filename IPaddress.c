#include <stdio.h>
#include <string.h>
int main()
{
    char string[10][34];
    int s = 0,
        e = 0;
    int count = 0;
    int ans, ans2 = 0;
    int pass = 0;
    int n = 3;
    int list = 0;
    // printf("Enter Valid IP Address: \n");
    for (int i = 0; i < n; i++)
    {
        printf("IP[%d]: ", i + 1);
        scanf("%s", string[i]);
    }
    for (int a = 0; a < n; a++)
    {
        count = 0, pass = 0, ans = 0, ans2 = 0, s = 0, e = 0;
        strcat(string[a], ".");
        for (int i = 0; string[a][i]; i++)
        {
            if (string[a][i] == '.')
            {
                e = i;
                if (e - s <= 3)
                {
                    for (int j = s; j < e; j++)
                    {
                        ans = string[a][j] - 48;
                        if (e - j == 3 && e - s == 3)
                            ans2 += ans * 100;
                        else if (e - j == 2)
                            ans2 += ans * 10;
                        else
                            ans2 += ans;
                    }
                }
                else
                    ans2 = 256;
                if (ans2 <= 255)
                    pass++;
                s = e + 1;
                ans2 = 0;
            }
        }
        if (pass == 4)
        {
            list++;
        }
        else
            printf("%s\n", string[a]);
        int len = strlen(string[a]) - 1;
        string[a][len] = 0;
    }
    if (list == n)
        printf("\nIP Address's from list are all Valid");
    else
        printf("\n%d out of %d are Invalid", n - list, n);
    return 0;
}


// Brain Eater 