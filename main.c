#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){

    char type[50];
    char operator;
    double num1;
    double num2;
    double result;

    printf("What do you want to calculate today ? :");
    printf("\nNormal\nPercentages\n");
    scanf("%s", &type);

    if ((strcmp(type, "Normal") == 0) || (strcmp(type, "normal")) == 0){
        
        printf("\nEnter an operator (+ - * / ^ %%): ");
        scanf(" %c", &operator);

        printf("Enter number 1: ");
        scanf("%lf", &num1);

        printf("Enter number 2: ");
        scanf("%lf", &num2);

        switch (operator){
            case '+' :
                result = num1 + num2;
                printf("\nresult : %.2lf", result);
            break;

            case '-' :
                result = num1 - num2;
                printf("\nresult : %.2lf", result);
            break;

            case '*' :
                result = num1 * num2;
                printf("\nresult : %.2lf", result);
            break;

            case '/' :
                result = num1 / num2;
                printf("\nresult : %.2lf", result);
            break;

            case '^' :
                result = pow(num1,num2);
                printf("\nresult : %.2lf", result);
            break;

            case '%' :
                result = fmod(num1,num2);
                printf("\nresult : %.2lf", result);
            break;

            default:
                printf("%c is not valid", operator);
            break;
        }
    }

    else if ((strcmp (type, "Percentages") == 0) || (strcmp (type, "percentages") == 0)) {
        
        printf("\nEnter the number you want to calculate the percentage of: ");
        scanf("%lf", &num1);

        printf("Enter the percentage: ");
        scanf("%lf", &num2);
        
        result = num1 * (num2/100);
        printf("\nresult : %.2lf", result);
 
    }

    else{
        printf("\nIt looks like you've made a mistake, check your spelling, and try again !\nThank you for useing this calculator :)");
    }

    return 0;
}