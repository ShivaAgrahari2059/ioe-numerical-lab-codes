#include<iostream>
#include<math.h>
using namespace std;

float f(float x)
{
    //return(log(x)-cos(x));
    return(exp(x)-3*x);
    //return(x*sin(x)-1);
    //return(x*log(x)-1.2);
}

int main()
{
    float a,b,c,d,e,f1;
    cout<<"Enter initial points: ";
    cin>>a>>b;
    cout<<"Enter tolerance value: ";
    cin>>e;
    if(fabs(f(a))>fabs(f(b))){
        f1=b;
        d=a;
    }
    else {
        f1=a;
        d=b;
    }

    if(f(d)*f(f1)<0)
    {
        for(int i=0;i<100;i++)
        {
            if(fabs(f(d)-f(f1))>0.001)
            {
                c=(d*f(f1)-f1*f(d))/(f(f1)-f(d));
                d=c;

            }
            else
            {
                cout<<"cannot proceed"<<endl;
                return 0;
            }
            if(fabs(f(c))<e)
            {
                cout<<"Root ="<<c;
                cout<<"\nNo. of iterations= "<<i;
                return 0;
         }
        }
    }
    else
    {
        cout<<"Can't proceed"<<endl;
    }


    return 0;
}
