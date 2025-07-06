#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return x*x-4;
}

int main(){
    double a,b,tol;
    cin>>a>>b>>tol;
    if(f(a)*f(b)>=0){
        cout<<"Not valid root"<<endl;
        return 0;
    }
    double c;
    int i=0;
    while((b-a)/2.0>tol){
        c=(a+b)/2.0;
        if(f(c)==0.0) break;
        if(f(a)*f(c)<0) b=c;
        else a=c;
        i++;
    }
    cout<<"Root = "<<c<<" found in "<<i<<" iteration\n";
}
