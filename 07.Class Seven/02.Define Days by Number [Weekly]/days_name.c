#include<stdio.h>
int main() {
    int days_number;
    printf("Enter a Number : ");
    scanf("%d", &days_number);
    
    switch(days_number) {
        case 1 :
        printf("Saturday");
        break;
        
        case 2 :
        printf("Sunday");
        break;
        
        case 3 :
        printf("Monday");
        break;
        
        case 4 :
        printf("Tuesday");
        break;
        
        case 5 :
        printf("Wednesday");
        break;
        
        case 6 :
        printf("Thursday");
        break;
        
        case 7 :
        printf("Friday");
        break;
        
        default :
        printf("Please ! Enter a Valid Day's Number");
    }
    return 0;
}