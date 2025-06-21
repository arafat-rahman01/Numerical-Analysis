#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return exp(-x)-x;
}

double fp(double x){
    return -exp(-x)-1;
}

int main(){
    double x0,tol,m;
    cin>>x0>>tol>>m;
    for(int i=0;i<m;i++){
        double fx=f(x0);
        double fpx=fp(x0);

        double x1=x0-fx/fpx;
        cout<<"Iter "<<i+1<<": x = "<<x1<<",f(x)= "<<f(x1)<<endl;

        if(fabs(x1-x0)<tol){
            cout<<"Converged to "<<x1<<" after "<<i+1<<" iteration\n";
            break;
        }
        x0=x1;
    }

}