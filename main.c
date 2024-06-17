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

    printf("\nWhat do you want to calculate today ? :");
    printf("\nNormal\nPercentages\nConverter");
    printf("\n->");
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

    else if ((strcmp (type, "Converter") == 0) || (strcmp (type, "converter") == 0)) {

        char usr_input[50];

        printf("\nWelcome to the converter part of the calculator");
        printf("\nPlease choose which unit you want to convert :\n");
        printf("\nCurrency\nMass\nTemperature");
        printf("\n-> ");
        scanf("%s", &usr_input);

    

        if ((strcmp (usr_input, "Currency") == 0) || (strcmp (usr_input, "currency") == 0)) {
            
            int currType;
            double curr;
            double conversion;
           
            printf("\nWelcome to the currency side of the converter");
            printf("\nPlease enter the number of the units you want to convert :");
            printf("\n1. eur to usd\n2. eur to cad\n3. eur to jpy");
            printf("\n4. usd to eur\n5. usd to cad\n6. usd to jpy");
            printf("\n7. cad to eur\n8. cad to usd\n9. cad to jpy");
            printf("\n10. jpy to eur\n11. jpy to cad\n12. jpy to usd");
            printf("\n\n-> ");
            scanf("%d", &currType);

            if (currType == 1) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 1.0822;
                printf("\nResult : %.2lf US$", conversion);
            }

            else if (currType == 2) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 1.48;
                printf("\nResult : %.2lf CA$", conversion);
            }

            else if (currType == 3) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 168.45;
                printf("\nResult : %.2lf JPY", conversion);
            }

            else if (currType == 4) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 0.9241;
                printf("\nResult : %.2lf €", conversion);
            }

            else if (currType == 5) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 1.3576;
                printf("\nResult : %.2lf CA$", conversion);
            }

            else if (currType == 6) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 151.5979;
                printf("\nResult : %.2lf JPY", conversion);
            }

            else if (currType == 7) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr *  0.690071;
                printf("\nResult : %.2lf €", conversion);
            }

            else if (currType == 8) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 0.7367;
                printf("\nResult : %.2lf US$", conversion);
            }

            else if (currType == 9) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 158.2245;
                printf("\nResult : %.2lf JPY", conversion);
            }

            else if (currType == 10) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 0.005899;
                printf("\nResult : %.2lf €", conversion);
            }

            else if (currType == 11) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 0.00873;
                printf("\nResult : %.2lf CA$", conversion);
            }

            else if (currType == 12) {
                printf("Please enter your amount : \n");
                scanf("%lf", &curr);
                conversion = curr * 0.0064;
                printf("\nResult : %.2lf US$", conversion);
            }

            else {
                printf("Try again, you might have made a spelling mistake !");
            }

            printf("\n\n--- Please note that all currency conversions were calculated at their respective 2024 average conversion rate. ---\n\n");

        }


        if ((strcmp (usr_input, "Mass") == 0) || (strcmp (usr_input, "mass") == 0)) {
            
            int massType;
            double mass;
            double conversion;
           
            printf("\nWelcome to the mass side of the converter");
            printf("\nPlease enter the number of the units you want to convert :");
            printf("\n1. Kg to gr\n2. Kg to Oz\n3. Kg to Lbs");
            printf("\n4. gr to Kg\n5. gr to Oz\n6. gr to Lbs");
            printf("\n7. Oz to Kg\n8. Oz to gr\n9. Oz to Lbs");
            printf("\n10. Lbs to Kg\n11. Lbs to gr\n12. Lbs to Oz");
            printf("\n\n-> ");
            scanf("%d", &massType);

            if (massType == 1) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass * 1000;
                printf("\nResult : %.2lf gr", conversion);
            }

            else if (massType == 2) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass * 35.274;
                printf("\nResult : %.2lf Oz", conversion);
            }

            else if (massType == 3) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass * 2.205;
                printf("\nResult : %.2lf Lbs", conversion);
            }

            else if (massType == 4) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass / 1000;
                printf("\nResult : %.2lf Kg", conversion);
            }

            else if (massType == 5) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass / 28.35;
                printf("\nResult : %.2lf Oz", conversion);
            }

            else if (massType == 6) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass / 453.6;
                printf("\nResult : %.2lf Lbs", conversion);
            }

            else if (massType == 7) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass /35.274;
                printf("\nResult : %.2lf Kg", conversion);
            }

            else if (massType == 8) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass * 28.35;
                printf("\nResult : %.2lf gr", conversion);
            }

            else if (massType == 9) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass / 16;
                printf("\nResult : %.2lf Lbs", conversion);
            }

            else if (massType == 10) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass / 2.205;
                printf("\nResult : %.2lf Kg", conversion);
            }

            else if (massType == 11) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass * 453.6;
                printf("\nResult : %.2lf gr", conversion);
            }

            else if (massType == 12) {
                printf("Please enter your amount : \n");
                scanf("%lf", &mass);
                conversion = mass * 16;
                printf("\nResult : %.2lf Oz", conversion);
            }

            else {
                printf("Try again, you might have made a spelling mistake !");
            }

        }

        if ((strcmp (usr_input, "Temperature") == 0) || (strcmp (usr_input, "temperature") == 0)) {
            
            int tempType;
            double temp;
            double conversion;
           
            printf("\nWelcome to the temperature side of the converter");
            printf("\nPlease enter the number of the units you want to convert :");
            printf("\n1. Celsius to Farenheight\n2. Celsius to Kelvin\n3. Farenheight to Celsius");
            printf("\n4. Farenheight to Kelvin\n5. Kelvin to Celsius\n6. Kelvin to Farenheight");
            printf("\n\n-> ");
            scanf("%d", &tempType);

              if (tempType == 1) {
                printf("Please enter your amount : \n");
                scanf("%lf", &temp);
                conversion = (temp * 9/5) + 32;
                printf("\nResult : %.2lf °F", conversion);
                }

                else if (tempType == 2) {
                printf("Please enter your amount : \n");
                scanf("%lf", &temp);
                conversion = temp + 273.15;
                printf("\nResult : %.2lf K", conversion);
                }

                else if (tempType == 3) {
                printf("Please enter your amount : \n");
                scanf("%lf", &temp);
                conversion = (temp - 32) * 5/9;
                printf("\nResult : %.2lf °C", conversion);
                }

                else if (tempType == 4) {
                printf("Please enter your amount : \n");
                scanf("%lf", &temp);
                conversion = (temp - 32) * 5/9 + 273.15;
                printf("\nResult : %.2lf K", conversion);
                }

                else if (tempType == 5) {
                printf("Please enter your amount : \n");
                scanf("%lf", &temp);
                conversion = temp - 273.15;
                printf("\nResult : %.2lf K", conversion);
                }

                else if (tempType == 6) {
                printf("Please enter your amount : \n");
                scanf("%lf", &temp);
                conversion = (temp - 273.15) * 9/5 + 32;
                printf("\nResult : %.2lf °F", conversion);
                }

                else {
                printf("Try again, you might have made a spelling mistake !");
                }

            }
        
    }
    

    else{
        printf("\nIt looks like you've made a mistake, check your spelling, and try again !");
    }

    return 0;
}