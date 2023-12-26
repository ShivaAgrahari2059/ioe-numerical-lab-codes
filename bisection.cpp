//simple implementation of bisection method using cpp

#include<iostream>
#include<math.h> 

using namespace std;
float f(float x)   //functions can be added here
{
    return(log(x)-cos(x));
    //return(exp(x)-3*x);
    //return(x*sin(x)-1);
    //return(x*log(x)-1.2);
}
int main()
{
    float a,b,c,e;
    cout<<"Enter the range to get solution:"<<endl;
    cin>>a>>b;
    cout<<"Enter error tolrance: ";
    cin>>e;
    cout<<f(a)<<"\n"<<f(b)<<endl;
    for(int i=0;i<100;i++)
    {
        float check=f(a)*f(b);
        if(check<0)
        {
            c=(a+b)/2;
            if(f(a)*f(c)<0)
                b=c;
            else
                a=c;
            cout<<"Mid point= "<<c<<endl<<"functional value= "<<f(c)<<endl;
        }
        else
        {
            cout<<"Solution doesn't exist in given range"<<endl;
            return 0;
        }
        if(e>abs(f(c)))
        {
            cout<<"\nFinal solution= "<<c<<endl<<"No. of iterations= "<<i<<endl;
            return 0;
        }
    }
    if(abs(f(c))>e)
    {
        cout<<"solution doesn't exist in given range or requires more ititrations"<<endl;
    }
    return 0;
}
