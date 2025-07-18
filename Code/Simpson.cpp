#include <bits/stdc++.h>
using namespace std;

double f(double x){
    return log(x);
}

int main() {
    double a,b;
    cin>>a>>b;
    int n;cin>>n;

    if(n%2 != 0){
        cout<<"Error";
        return 1;
    }

    double h=(b-a)/n;
    double sum=f(a)+f(b);
    for(int i=1;i<n;i++){
        double xi=a+i*h;
        if(i%2 ==0){
            sum+=2*f(xi);
        }else{
            sum+=4*f(xi);
        }
        
    }
    cout<<(h/3)*sum<<endl;
}
