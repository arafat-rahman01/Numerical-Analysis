#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return x*x-4;
}

int main(){
    double a,b,tol;
    cin>>a>>b>>tol;
    if(f(a)*f(b)>=0){
        cout<<"No valid root"<<endl;
        return 0;
    }

    double c;
    int i=0;
    while (true)
    {
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        i++;
        if(fabs(f(c))<tol) break;
        if(f(a)*f(c)<0) b=c;
        else a=c;
    }
    cout<<"Root = "<<c<<" found in "<<i<<" iteration\n"<<endl;
    
}