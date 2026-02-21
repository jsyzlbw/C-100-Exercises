#include <stdio.h>

double bonus_cal(double profit)
{
    double bonus = 0;

    if (profit <= 100000)
    {
        bonus = profit * 10 / 100;
    }
    else
    {
        bonus = 100000 * 10 / 100;

        if (profit <= 200000)
        {
            bonus += (profit - 100000) * 7.5 / 100;
        }
        else
        {
            bonus += (200000 - 100000) * 7.5 / 100;

            if (profit <= 400000)
            {
                bonus += (profit - 200000) * 5 / 100;
            }
            else
            {
                bonus += (400000 - 200000) * 5 / 100;

                if (profit <= 600000)
                {
                    bonus += (profit - 400000) * 3 / 100;
                }
                else
                {
                    bonus += (600000 - 400000) * 3 / 100;

                    if (profit <= 1000000)
                    {
                        bonus += (profit - 600000) * 1.5 / 100;
                    }
                    else
                    {
                        bonus += (1000000 - 600000) * 1.5 / 100;
                        bonus += (profit - 1000000) * 1 / 100;
                    }
                }
            }

        }
    }

    return bonus;
}


int main()
{
    double i;  // The net profit

    // Get the net profit i
    printf("Enter the net profit: ");
    scanf("%lf", &i);

    printf("The bonus: %.2lf \n", bonus_cal(i));

    return 0;
}