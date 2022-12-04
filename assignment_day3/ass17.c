#include<stdio.h>
int main()
{
    char operator;
    float firstNumber,secondNumber;
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f",&firstNumber, &secondNumber);
    switch(operator)
    {
        case '+':
            printf("%.2f + %.2f = %.2f",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}