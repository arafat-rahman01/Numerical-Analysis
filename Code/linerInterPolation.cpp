#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,x0,x1,fx0,fx1;
    cin>>x>>x0>>x1>>fx0>>fx1;
    double fx=fx0+((fx1-fx0)/(x1-x0))*(x-x0);
    cout<<fx<<endl;
}
