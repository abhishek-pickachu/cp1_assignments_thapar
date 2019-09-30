#include <stdio.h>
#include <math.h>
int main() {
int p, r, t, n;
int simple_interest, compund_interest;
printf("Enter principle, rate of interest and time, number of times the interest is compounded : ");
scanf("%d %d %d %d", &p, &r, &t, &n);
si = (p*r*t)/100;
printf ("The Simple Interest is : %d", simple_interest);
ci = pow((p*(1 + (r/n))),(n*t));
printf ("The Amount after compound interest is : %d", compund_interest);
return 0;
}
