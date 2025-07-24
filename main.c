#include <stdio.h>
#include <stdlib.h>

void menu();
int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
float division(int x, int y);

int main()
{
    char choice = ' ';
    int a, b;
    float sum;

    while (choice != 'E') {
        menu();
        scanf(" %c", &choice);

        switch(choice){

            case 'A':
                printf("\nAddition\n\n");
                printf("Place in your values for a and b: ");
                scanf("%d %d", &a, &b);
                addition(a, b);
                break;

            case 'B':
                printf("\nSubtraction\n\n");
                printf("Place in your values for a and b: ");
                scanf("%d %d", &a, &b);
                subtraction(a, b);
                break;

            case 'C':
                printf("\nMultiplication\n\n");
                printf("Place in your values for a and b: ");
                scanf("%d %d", &a, &b);
                multiplication(a, b);
                break;

            case 'D':
                printf("\nDivision\n\n");
                printf("Place in your values for a and b: ");
                scanf("%d %d", &a, &b);
                division(a, b);
                break;

            case 'E':
                printf("\nExiting the program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid option. Please try again.\n");
        }
    }

    return 0;
}

void menu(){
    printf("\nMENU\n\n");
    printf("A. Addition\n");
    printf("B. Subtraction\n");
    printf("C. Multiplication\n");
    printf("D. Division\n");
    printf("E. Exit\n\n");
    printf("Choose an option: ");
}

int addition(int x, int y){
    int sum = x + y;
    printf("\nYour addition answer is : %d\n", sum);
    return sum;
}

int subtraction(int x, int y){
    int sum = x - y;
    printf("\nYour subtraction answer is : %d\n", sum);
    return sum;
}

int multiplication(int x, int y){
    int sum = x * y;
    printf("\nYour multiplication answer is : %d\n", sum);
    return sum;
}

float division(int x, int y){
    float sum;
    if (y == 0){
        printf("\nYou cannot divide by 0!\n");
    } else {
        sum = (float)x / y;
        printf("\nYour division answer is : %.2f\n", sum);
    }
    return sum;
}
