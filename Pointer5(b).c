#include<stdio.h>

struct Date
{
    int day , month , year ;
};

int main()
{
    struct Date date1 , date2 ;

    printf("Enter the first date please (DD/MM/YYYY)\n");
    scanf("%d%d%d" , &date1.day , &date1.month , &date1.year);

    printf("Enter the second date please (DD/MM/YYYY)\n");
    scanf("%d%d%d" , &date2.day , &date2.month , &date2.year);

    printf("\nFirst date is %d.%d.%d\n" , date1.day , date1.month , date1.year);
    printf("Second date is %d.%d.%d\n" , date2.day , date2.month , date2.year);

    struct Date *ptr1 , *ptr2 ;
    ptr1  = &date1;
    ptr2 = &date2 ;

    printf("\nFirst date (using pointer) is  %d.%d.%d\n" , ptr1->day , ptr1->month , ptr1->year);
    printf("Second date (using pointer) is %d.%d.%d\n" , ptr2->day , ptr2->month , ptr2->year);

    if(ptr1->day == ptr2->day && ptr1->month == ptr2->month && ptr1->year == ptr2->year)
    {
        printf("\nDates are equal\n");
    }
    else
    {
        printf("\nDates are not equal\n");
    }
    return 0 ;
}