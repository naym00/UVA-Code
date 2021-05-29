#include<stdio.h>
#include<math.h>
int main()
{
    double l, w, h, theta;
    while(scanf("%lf%lf%lf%lf", &l, &w, &h, &theta)!=EOF)
    {
        if(l*tan((acos(-1)*theta)/180)<=h)
        {
            theta=(acos(-1)*theta)/180;
            printf("%.3lf mL\n", (w*l*(2*h-l*tan(theta)))/2);
        }
        else
        {
            theta=(acos(-1)*(90-theta))/180;
            printf("%.3lf mL\n", (tan(theta)*h*h*w)/2);
        }
    }
    return 0;
}
