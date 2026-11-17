#include<stdio.h>
#include<math.h>
void add();
void sub();
void mul();
void div();
void mod();
void square();
void findsqrt();
void cube();
void expo();
void fact();
void fibonacci();
void leapyear();
void quadratic();
void prime();
int main(){
    int choice =-1;
    while(choice!=0){
    printf("\n========== CALCULATOR ==========\n");

        printf("\n--- Arithmetic & Powers ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exponentiation\n");
        printf("7. Square\n");
        printf("8. Square Root\n");
        printf("9. Cube\n");
        printf("10. Cube Root\n");

        printf("\n--- Utility Functions ---\n");
        printf("11. Factorial\n");
        printf("12. Fibonacci Series\n");
        printf("13. Prime Checker\n");
        printf("14. Leap Year Checker\n");
        printf("15. Temperature Conversion\n");
        printf("16. Quadratic Equation Solver\n");
        printf("\n0. Exit\n");
        printf("enter your choice: \n");
        scanf("%d",&choice);
        switch(choice){
            case1:
            add();
            break;
            case2:
            sub();
            break;
            case3:
            mul();
            break;
            case4:
            div();
            break;
            case5:
            mod();
            break;
            case 6:
            expo();
            break;
            case 7:
            fact();
            break;
            case 8:
            fibonacci();
            break;
            case 9:
            prime();
            break;
            case 10:
            leapyear();
            break;
            case 11:
            quadratic();
            break;
        }
    }
}

void add(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.2lf", a+b);
}
void sub(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.2lf", a-b);
}
void mul(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.2lf", a*b);
}
void div(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.2lf", a/b);
}
void mod(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d", a%b);
}
void square(){
    int a;
    scanf("%d",&a);
    printf("%d", a*a);
}
void findsqrt(){
    double a;
    printf("%lf", sqrt(a));
}
void cube(){
    double a;
    printf("%lf", a*a*a);
}
void expo(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%lf", pow(a,b));
}
void fact(){
    int i,n;
    long long fact=1;
    for(i=0;i<=n;i++){
        fact=fact+i;
    }
    printf("%llu", fact);
}
void fibonacci(){
    int n;
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    int i;
    for(i=1;i<=n;i++){
        printf("%d", a);
        if(i<n){
            c=a=b;
            a=b;
            b=c;
        }
        printf("%d", c);
    }
}
void prime(){
    int i;
    int n;
    int prime=1;
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1)
    printf("prime");
    else
    printf("not prime");
}
void leapyear(){
    int year;
    scanf("%d",&year);
    if((year%400==0) || (year%4==0) && (year%100!=0))
    printf("leap year");
    else
    printf("not leap year");
}void quadratic()
{
    double a, b, c, d;
    double root1, root2;
    double real, imaginary;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
        d = b * b - 4 * a * c;

        if(d > 0)
        {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);

            printf("Two distinct real roots:\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
        }
        else if(d == 0)
        {
            root1 = -b / (2 * a);

            printf("Two equal roots = %.2lf\n", root1);
        }
        else
        {
            real = -b / (2 * a);
            imaginary = sqrt(-d) / fabs(2 * a);

            printf("Complex roots:\n");
            printf("Root 1 = %.2lf + %.2lfi\n", real, imaginary);
            printf("Root 2 = %.2lf - %.2lfi\n", real, imaginary);
        }
    }



