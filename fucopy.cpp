#include<iostream>
#include<math.h>
int main()
{  
    std::cout<<"���Ƚ�ʽ�ӻ���Ϊ \"ax^2 + bx + c = 0\" ����ʽ"<<std::endl<<"��˳�����������ϵ��,һ����ϵ��, �ͳ���\n";
    double a=0;
    double b=0;
    double c=0;
    std::cin>>a>>b>>c;
    double d=b*b-(4*a*c);
    std::cout<<"b^2="<<b*b<<"\n 4*a*c="<<4*a*c<<'\n'<<"b^2 - 4*ac="<<d<<"\n";
    if(d>=0)

    {
        double b1=0-b;
        double x1=(b1+sqrt(d))/(2*a);
        double x2=(b1-sqrt(d))/(2*a);
        if(x1!=x2)
        {
            std::cout<<"\nx1="<<x1<<std::endl<<"x2="<<x2;
        }
        else if(x1=x2)
        {
            std::cout<<"\n x="<<x1;
        }
        
    }
    else if(d<0)
    {
        
       std::cout<<"x��ʵ����"<<std::endl;
    }
    return 0;
}