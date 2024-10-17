#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c,d;//a=x1;b=y1;c=x2;d=y2
    cin>>a>>b>>c>>d;
    if (abs(a-c)==abs(b-d)){
        cout<<"Yes"<<endl;}
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
