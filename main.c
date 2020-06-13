#include <stdio.h>
#include <math.h>

int main() {
    char option;
    double val1,val2;
    printf("Enter the option of what you want to do with your numbers \n     - * for multiply \n     - + for addition \n     - - for subtract \n     - / for division \n     - ^ for power\n");
    scanf("\n%c" ,&option);
    printf("You chose %c\n", option);

    if (option == '*'){
        printf("Enter the multiplicand and then the multiplier!");
        scanf("%lf %lf", &val1, &val2);
        printf("%lf * %lf = %lf",val1,val2,(val1 * val2));
    }
    else if(option == '+'){
        printf("Enter a addend and then another addend!");
        scanf("%lf %lf", &val1, &val2);
        printf("%lf + %lf = %lf",val1,val2,(val1 + val2));
    }
    else if (option == '-'){
        printf("Enter the minuend and then the subtrahend!");
        scanf("%lf %lf", &val1, &val2);
        printf("%lf - %lf = %lf",val1,val2,(val1 - val2));
    }
    else if(option == '/'){
        printf("Enter the dividend and then the divisor!");
        scanf("%lf %lf", &val1, &val2);
        printf("%lf / %lf = %lf",val1,val2,(val1 / val2));
    }
    else if(option == '^'){
        printf("Enter the base number and then the exponent!");
        scanf("%lf %lf", &val1, &val2);
        printf("%lf^%lf = %lf",val1,val2,(pow(val1,val2)));
    }
}
