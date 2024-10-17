#include <iostream>
using namespace std;

int main() {
    int v,t;
    cin>>v>>t;
    if (v>0){
    cout<<(v*t-109)<<endl;
    }
    else{
        cout<<(v*t+109)<<endl;
    }
    

    return 0;
}
