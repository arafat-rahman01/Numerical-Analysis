#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return x*x-4;
}

int main(){
    double x0,x1,tol,n;
    cin>>x0>>x1>>tol>>n;
    for(int i=0;i<=n;i++){
        double f0=f(x0),f1=f(x1);
        if(f1==f0) return -1;
        double x2=x1-f1*(x1-x0)/(f1-f0);
        cout<<"Iter= "<< i<<": x2 = "<<x2<<", f(x)"<<f(x2)<<endl;
        if(fabs(x2-x1)<tol){
            cout<<"Root : "<<x2<<endl;
            return 0;
        }
        x0=x1;
        x1=x2;
    }
}