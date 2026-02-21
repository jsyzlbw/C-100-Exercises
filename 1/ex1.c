#include <stdio.h>

int main()
{
    int num = 0;      // the number of all three-digit numbers

    // Try all the possible arrangements
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            for (int k = 1; k < 5; k++)
            {
                if (i != j && j != k && k != i)
                {
                    num++;
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }

    printf("There are %d different three-digit numbers (no repeating digits)\n", num);

    return 0;
}