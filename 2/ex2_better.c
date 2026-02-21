#include <stdio.h>

double bonus_cal(double profit) 
{
    double bonus = 0;
    
    // profit thresholds（from big to small）
    double thresholds[] = {1000000, 600000, 400000, 200000, 100000, 0};
    // the rate of different portions
    double rates[] = {0.01, 0.015, 0.03, 0.05, 0.075, 0.1};
    
    // Calculate each portion
    for (int i = 0; i < 6; i++) {
        if (profit > thresholds[i]) 
        {
            bonus += (profit - thresholds[i]) * rates[i];
            profit = thresholds[i];
        }
    }
    
    return bonus;
}

int main() 
{
    double i;
    printf("Enter the net profit: ");
    
    if (scanf("%lf", &i) == 1) 
    {
        printf("The total bonus is: %.2lf\n", bonus_cal(i));
    } 
    else 
    {
        printf("Invalid input.\n");
    }
    
    return 0;
}