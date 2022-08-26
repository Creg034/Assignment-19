#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter String: \n");
    fgets(string, 100, stdin);
    char w1[100]; // Occ 2
    char w2[100]; // Occ 7  Total Gap : 5 Words
    int p1 = 0;   // It is a pass for w1
    int p2 = 0;   // It is a pass for w2
    printf("Enter Word1: ");
    scanf("%s", w1);
    printf("Enter Word2: ");
    scanf("%s", w2);
    int s = 0, e = 0;
    int count = 0;
    int w1c = 0, w2c = 0;
    for (int i = 0; string[i] != 0; i++)
    {
        if ((string[i] == 32 && string[i + 1] > 32 && string[i + 1] < 127) || i == strlen(string) - 1)
        {
            count++;
            e = i;
            if (i == strlen(string) - 1)
            {
                e += 1;
            }
            for (int j = s, l = 0; j < e; j++, l++)
            {
                if (string[j] == w1[l])
                {
                    w1c++;
                }
                else
                {
                    w1c = 0;
                    break;
                }
            }
            for (int j = s, l = 0; j < e; j++, l++)
            {
                if (string[j] == w2[l])
                {
                    w2c++;
                }
                else
                {
                    w2c = 0;
                    break;
                }
            }
            int word = e - s;
            if (w1c == word)
            {
                p1 = count;
            }
            if (w2c == word)
            {
                p2 = count;
            }
            s = e + 1;
        }
    }
    if (p1 == 0)
        p1 = count;
    if (p2 == 0)
        p2 = count;
    printf("OUTPUT:\n%d\t%d\n", p1, p2);
    int tempco = 0;
    for (int t = p1; t < p2; t++)
    {
        tempco++;
    }
    if (tempco - 1 < 0)
    {
        printf("Both Are Same Word");
    }
    else
        printf("%d", tempco - 1);
    return 0;
}

// Finished