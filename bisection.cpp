 #include<iostream>
#include<math.h>

using namespace std;
float_t f(float_t x)
{
    float_t value=log(x)-cos(x);
    return value;
}
int main()
{
    float_t a,b,c,e;
    cout<<"Function is: f(x)= exp(x)-3x"<<endl<<"Enter the range to get solution:"<<endl;
    cin>>a>>b;
    cout<<"Enter error tolrance: ";
    cin>>e;
    cout<<f(a)<<"\n"<<f(b)<<endl;
    for(int i=0;i<100;i++)
    {
        float_t check=f(a)*f(b);
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
