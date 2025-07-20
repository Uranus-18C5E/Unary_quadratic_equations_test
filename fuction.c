#include<stdio.h>
#include<math.h>
int main()
{  
    printf("请先将式子化简为 \"ax^2 + bx + c = 0\" 的形式\n按顺序输入二次项系数,一次项系数, 和常数\n");
    double a=0;
    double b=0;
    double c=0;
    scanf("%lf %lf %lf",&a,&b,&c);
    double d=b*b-(4*a*c);
    printf("b^2=%lf",b*b);
    printf("\n 4*a*c=%lf",4*a*c);
    printf("\nb^2 - 4*ac=%lf",d,"\n");
    //printf("%lf %lf %lf","b^2=",b*b,"\n 4*a*c=",4*a*c,'\n',"b^2 - 4*ac=",&d,"\n");
    if(d>=0)

    {
        double b1=0-b;
        double x1=(b1+sqrt(d))/(2*a);
        double x2=(b1-sqrt(d))/(2*a);
        if(x1!=x2)
        {
            printf("\nx1=%lf",x1);
            printf("\nx2=%lf",x2);
            //printf("%lf %lf","\nx1=",x1,"\nx2=",x2);
        }
        else if(x1=x2)
        {
            printf("\nx=%lf",x1);
            //printf("%lf","\n x=",x1);
        }
        
    }
    else if(d<0)
    {
        
       printf("\nx无实数解");
    }
    return 0;
}
