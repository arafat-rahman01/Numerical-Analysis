#include<bits/stdc++.h>
using namespace std;
int main(){
    double x0,tol;
    cin>>x0>>tol;
    int i=0;
    double x1;

    while(true){
        x1=(1+cos(x0))/3.0;
        i++;
        if(fabs(x1-x0)<tol) break;
        x0=x1;
    }
    cout<<"Root= "<<x1<<" Found in= "<<i<<" itreation"<<endl;
}