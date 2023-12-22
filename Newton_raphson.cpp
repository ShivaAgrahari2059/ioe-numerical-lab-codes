#include<iostream>
#include<math.h>
using namespace std;

float_t f(float_t x)
{
    float_t v=log(x)-cos(x);
    return v;
}
float_t f1(float_t y)
{
    float_t v1=1/y+sin(y);
    return v1;
}
int main()
{
    float_t a,b,e;
    cout<<"f(x)=log(x)-cos(x)"<<endl;
    cout<<"Enter initial point: ";
    cin>>a;
    cout<<"Enter error tolerance: ";
    cin>>e;
    for(int i=0;i<100;i++)
    {
        if(fabs(f1(a))>0.001)
        {
            b=a-(f(a)/f1(a));
            if(fabs(f(b))<e)
            {
                cout<<"Root= "<<b<<endl;
                cout<<"No. of iterations= "<<i+1<<endl;
                return 0;
            }
            a=b;
        }
        else
        {
            cout<<"cannot proceed due to oscillation";
            return 0;
        }
    }
    return 0;
}
