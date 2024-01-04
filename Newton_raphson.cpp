//this is a simple implementation of the Newton-Raphson method using cpp

#include<iostream>
#include<math.h>
using namespace std;

//declaration of function
float f(float x)   //functions can be added here
{
    return(log(x)-cos(x));
    //return(exp(x)-3*x);
    //return(x*sin(x)-1);
    //return(x*log(x)-1.2);
}

//declaration of the first derivative of the function
float f1(float y)
{
    return (1/y+sin(y));
    //return(exp(x)-3);
    //return(x*cos(x)+sin(x);
    //return(1+log(x));
}

int main()
{
    float a,b,e;
    cout<<"Enter initial point: ";
    cin>>a;
    cout<<"Enter error tolerance: ";
    cin>>e;
    for(int i=0;i<100;i++) //process can end just in 5-6 steps/iterations but despite that just in case if we need more
    {
        if(fabs(f1(a))>0.001) //f1 should not be very small as it can cause divergence
        {
            b=a-(f(a)/f1(a));
            if(fabs(f(b))<e)  //ends the loop as soon as we reach required precision 
            {
                cout<<"Root= "<<b<<endl;
                cout<<"No. of iterations= "<<i+1<<endl;
                return 0;
            }
            a=b; //updating value of a
        }
        else //if the process takes more than 100 iterations it might be oscillating near the local maxima/minima
        {
            cout<<"cannot proceed due to oscillation";
            return 0;
        }
    }
    return 0;
}
