#include<stdio.h>

double add(double n1,double n2);
double subtract(double n1,double n2);
double multiply(double n1,double n2);
double divide(double n1,double n2);

int main()
    {
        int ch=0;
        double n1=0,n2=0;
        while(ch<5)
        {
            printf("enter a operation which you want to perform:\n");
            printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.quite\n");
            scanf("%d",&ch);
            
            if(ch==5)
                return 0;

            printf("enter two numbers :\n");
            scanf("%lf \n %lf",&n1,&n2);

            double(*fun[4])(double,double)={&add,&subtract,&multiply,&divide};
            (*fun[ch-1])(n1,n2);   
        }
        return 0;
    }

double add(double n1,double n2)
{
    double result;
    result=n1+n2;
    printf("addition of the given two number %lf and %lf is : %lf\n",n1,n2,result);
    return result;
}

double subtract(double n1,double n2)
{
    double result;
    result=n1-n2;
    printf("subtraction of the given two number %lf and %lf is : %lf\n",n1,n2,result);
    return result;
}

double multiply(double n1,double n2)
{
    double result;
    result=n1*n2;
    printf("multiplication of the given two number %lf and %lf is : %lf\n",n1,n2,result);
    return result;
}

double divide(double n1,double n2)
{
    double result;
    result=n1/n2;
    printf("division of the given two number %lf and %lf is : %lf\n",n1,n2,result);
    return result;
}