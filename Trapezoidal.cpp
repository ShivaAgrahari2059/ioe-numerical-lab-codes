#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
float f(float x)
{
    return sin(x)+4;
}
int main()
{
    float a,b,n,x;
    cout<<"enter no. of steps: ";
    cin>>n;
    cout<<"Enter interval(a,b) : ";
    cin>>a>>b;
    float sum=0;
    float h=(b-a)/n;
    for(int i=0;i<=n;i++)
    {
        x=x+i*h;
        if(i==0 || i==n)
        {
            sum+=f(x);
        }
        else{
            sum+=2*f(x);
        }
    }
    sum*=h/2;
    cout<<"Area="<<sum<<endl;
    return 0;
}
