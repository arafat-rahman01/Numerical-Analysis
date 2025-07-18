#include <bits/stdc++.h>
using namespace std;

double f(double x){
    return log(x);
}

int main() {
    double a,b,n;
    cin>>a>>b>>n;
    double h=(b-a)/n;
    double sum=f(a)+f(b);
    for(int i=1;i<n;i++){
        double xi=a+i*h;
        sum+=2*f(xi);
    }
    cout<<(h/2)*sum<<endl;
}
