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
    float a,b,c,e;
    cout<<"Enter initial points: ";
    cin>>a>>b;
    cout<<"Enter tolerance value: ";
    cin>>e;
    for(int i=0;i<100;i++)
    {
        if(fabs(f(b)-f(a))>0.0001){
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        }
        else{
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
    return 0;
}
