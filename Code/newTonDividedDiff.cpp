#include<bits/stdc++.h>
using namespace std;
int main(){
    double x=2;
    double x0,x1,x2;
    double fx0,fx1,fx2;
    cin>>x0 >>x1 >>x2;
    cin>>fx0>>fx1>>fx2;
    double b0=fx0;
    double b1=(fx1-fx0)/(x1-x0);
    double b2=((fx2-fx1)/(x2-x1)-b1)/(x2-x0);
    double fx=b0+b1*(x-x0)+b2*(x-x0)*(x-x1);
    cout<<fx<<endl;
}