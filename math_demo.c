#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
Compute the normal probability density function of x. Store the value in object pointed to by result
*/
void normpdf(double x, double *pdf){
    double tmp = 1.0/sqrt(2*M_PI)*exp(-1*(x*x)/2);
    pdf = &tmp;
    printf("phi(x) = %.8lf\n", *pdf);
}



/*
Compute the sum of x and y. Store the value in object pointed to by result
*/
void add(double x, double y, double *result){
    double sum = x + y;
    result = &sum;
    printf("%6.2f + %6.2f = %6.2lf\n", x, y, *result);
}


void main(int argc, char *argv[]) {
    /*
    Create result variable to be passed to functions 
    */
    double r = 0;
    double *result;
    result = &r;

    /*
    Check for number of arguments and call functions accordingly
    */
    if (argc==1){
        printf("Usage: math_demo num1 [num2]\n");
        exit(0);
    }

    if (argc==2){
        normpdf(atof(argv[1]),result);
    }

    if (argc==3){
        add(atof(argv[1]), atof(argv[2]), result);    
    }

    if (argc >= 4){
        fprintf(stderr, "Incorrect number of command-line arguments\n");
        exit(1);
    }
}