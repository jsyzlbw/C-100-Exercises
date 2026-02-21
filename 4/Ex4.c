#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year){
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return 1;
    }
    return 0;
}

int main(void){
    int year, month, day;
    int dayInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;

    printf("Enter the year, month, and day(split by spaces):");
    if (scanf("%d %d %d", &year, &month, &day) != 3){
        printf("Invalid Input.");
        return EXIT_FAILURE;
    };

    if (year < 0){
        printf("Year Invalid.");
        return EXIT_FAILURE;
    }

    if (month < 1 || month > 12){
        printf("Month Invalid.");
        return EXIT_FAILURE;
    }

    if (isLeapYear(year)){
        dayInMonth[1] = 29;
    }

    if (day < 1 || day > dayInMonth[month - 1]){
        printf("Day Invalid.");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < month - 1; i++){
        totalDays += dayInMonth[i];
    }
    totalDays += day;

    const char *word = "th";
    if (totalDays % 100 < 11 || totalDays % 100 > 13) {
        switch (totalDays % 10) {
            case 1: word = "st"; break;
            case 2: word = "nd"; break;
            case 3: word = "rd"; break;
        }
    }
    printf("%d.%d.%d is the %d%s day of the year.\n", year, month, day, totalDays, word);
    return EXIT_SUCCESS;
}