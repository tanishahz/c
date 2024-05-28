/* Wite a function that compares two given dates. To store a date use a structure that contains 
three members namely day , month and year. If the dates are equal the function should return 0, otherwise it 
should return 1.*/
#include <stdio.h>
typedef struct {
    int day;
    int month;
    int year;
} Date;
int compareDates(Date date1, Date date2) {
        if (date1.year != date2.year) {
        return 1;
    }
    if (date1.month != date2.month) {
        return 1;
    }
        if (date1.day != date2.day) {
        return 1;
    }
    
    return 0;
}

int main() {
    Date date1 = {15, 5, 2024};
    Date date2 = {15, 5, 2024};

    if (compareDates(date1, date2) == 0) {
        printf("The dates are equal.\n");
    } else {
        printf("The dates are not equal.\n");
    }

    return 0;
}
