#include <stdio.h>

int main()
{
    char choice;
    int number1, number2, ans;
    
    printf("Choose one of the following:\n");
    printf("m for multiply\n");
    printf("a for add\n");
    printf("s for subtract\n");
    scanf("%c", &choice);
    
    printf("Input two numbers: ");
    scanf("%d %d", &number1, &number2);
    
    if(choice == 'm')
        ans = number1 * number2;
    if(choice == 'a')
        ans = number1 + number2;
    if(choice == 's')
        ans = number1 - number2;
    
    printf("The result is: %d", ans);
    
    return 0;
}
