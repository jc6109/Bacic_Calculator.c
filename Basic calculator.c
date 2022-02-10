#include <stdio.h>
 
int main()
{
    int a,b;
    float result;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
            result=a+b;
            break;
             
        case '-':
            result=a-b;
            break;
         
        case '*':
            result=a*b;
            break;
             
        case '/':
            result=(float)a/(float)b;
            break;
             
        case '%':
            result=a%b;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",a,ch,b,result);
    return 0;
}