#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. data: ";
    cin>>n;
    float x[n],y[n],xp;
    cout<<"Enter (xn,yn)";
    for(int i=0;i<n+1;i++){
        cin>>x[i]>>y[i];
    }
    cout<<"Enter x: ";
    cin>>xp;
    float sum=0;
    for(int i=0;i<n+1;i++){
        float nu=1,de=1;
        for(int j=0;j<n+1;j++){
            if(i!=j){
                nu=nu*(xp-x[j]);
                de=de*(x[i]-x[j]);
                //cout<<nu<<"\t"<<de<<endl;
            }
        }
        sum=sum+(nu/de)*y[i];
        cout<<sum<<endl;
    }
    cout<<"Approx Solution : "<<sum<<endl;
    return 0;
}
