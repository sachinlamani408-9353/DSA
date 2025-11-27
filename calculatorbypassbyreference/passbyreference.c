#include <stdio.h>

void addvalue(double *x, double *y, double *result) {
    *result = *x + *y;
}

void subvalue(double *x, double *y, double *result) {
    *result = *x - *y;
}

void mulvalue(double *x, double *y, double *result) {
    *result = *x * *y;
}

void divvalue(double *x, double *y, double *result) {
    if (*y != 0)
        *result = *x / *y;
    else {
        printf("Error! Division by zero.\n");
        *result = 0;
    }
}

int main() {
    double a, b, result;
    int choice;

    printf("\nPass by Reference Calculator\n");
      printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
printf("enter the choice:");
    scanf(" %d", &choice);

   

    switch (choice) {
        case 1: addvalue(&a, &b, &result); break;
        case 2: subvalue(&a, &b, &result); break;
        case 3: mulvalue(&a, &b, &result); break;
        case 4: divvalue(&a, &b, &result); break;
        default:
            printf("Invalid operator!\n");
            return 0;
    }

    printf("Result = %.2lf\n", result);

    return 0;
}
