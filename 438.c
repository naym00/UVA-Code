#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, e, f, x, y, ef2, cd2, ab2, db, fd, ec, ca, t;
    while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f)!=EOF)
    {
        if(b==d)
        {
            t=e;
            e=c;
            c=t;

            t=f;
            f=d;
            d=t;
        }

        ef2=e*e+f*f;
        cd2=c*c+d*d;
        ab2=a*a+b*b;
        db=d-b;
        fd=f-d;
        ec=e-c;
        ca=c-a;

        x = ((ef2-cd2)*db-(cd2-ab2)*fd)/(2*(ec*db-ca*fd));
        y = (cd2-ab2-(2*x*ca))/(2*db);
        printf("%0.2lf\n", 2*acos(-1)*sqrt((x-a)*(x-a)+(y-b)*(y-b)));
    }
    return 0;
}
