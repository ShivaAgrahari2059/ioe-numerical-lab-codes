// solution of 1st degree ODE using Euler's And RK4 method
//solu of 2nd order using RK4
// curve fitting (LSM)

#include<iostream>
#include<math.h>
using namespace std;

float f1(float x,float y)
{
    float val=x+y;
    return val;
}
int main()
{
    float x0,y0,x;
    float h;
    cout<<"Enter initial values(x0,y0)  : ";
    cin>>x0>>y0;
    cout<<"Enter x for y(x) : ";
    cin>>x;
    cout<<"Enter of steps size: ";
    cin>>h;
    int n=int((x-x0)/h);
    float x1[n+1],y1[n+1];
    x1[0]=x0;
    y1[0]=y0;
    for(int i=0; i<n+1;i++)
    {
        x1[i+1]=x1[i]+h;
        y1[i+1]=y1[i]+f1(x1[i],y1[i])*h;
        cout<<"("<<x1[i]<<","<<y1[i]<<")"<<endl;
    }
    return 0;
}
