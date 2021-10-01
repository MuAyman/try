#include <stdio.h>
#include <math.h>


int main()
{
    int q;
    printf("Enter the problem number: ");
    scanf("%d", &q);

    if (q == 1)
    {
        int n = 20;
        int i;

        printf("\n1. single pression or 2. double pression? Enter 1 or 2\n");
        scanf("%d", &q);

        if (q == 1)
        {
            float x;
            printf("Enter the x value:");
            scanf("%f", &x);

            for (i = 1; i <= n; i++) {
                x = sqrt(x);
            }
            printf("x=%.6e\n", x);
            for (i = 1; i <= n; i++) {
                x = x * x;
            }
            printf("x=%.6e\n", x);
        }
        else if (q == 2)
        {
            int x;
            printf("Enter the x value:");
            scanf("%d", &x);

            for (i = 1; i <= n; i++) {
                x = sqrt(x);
            }
            printf("x=%.6e\n", x);
            for (i = 1; i <= n; i++) {
                x = x * x;
            }
            printf("x=%.6e\n", x);
        }
    }
    else if (q == 2)
    {
        double x = 1, w = 1;

        for (double n = 2; n <= 10000; n++)
        {
            x = x / n;          //  the n! in the denominator
            w = w * 100;        // the 100^n in the numerator
        }
        x = w * x;
        printf("x=%.6e\n", x);
    }
    else if (q == 3)
    {
        int n;
        printf("\n1. double pression or 2. improved double pression? Enter 1 or 2\n");
        scanf("%d", &q);

        if (q == 1)
        {
            double p; /* store the current value of p(n) */
            double t; /* store the current value of 2^n */
            double temp;
            p = 2 * sqrt(2); /* initiate values of p and t */
            t = 4;
            for (n = 2; n < 35; n++) {
                temp = p / t;
                temp = 1.0 - temp * temp;
                temp = 2 * (1.0 - sqrt(temp));
                p = t * sqrt(temp);
                t *= 2;
                printf("p(%2i) = %.15f\n", n + 1, p);
            }
        }
        else if (q == 2)
        {
            int n;
            double p; /* store the current value of p(n) */
            double g; /* store the current value of g(n) */
            double t; /* store the current value of 2^n */
            g = 2; /* initiate values of g and t */
            t = 4;
            for (n = 2; n < 40; n++) {
                g = g / (2 + sqrt(4 - g));
                p = t * sqrt(g);
                t *= 2;
                printf("p(%2i) = %.15f\n", n + 1, p);
            }
        }
       
    }
    
    // Thank you!
}