#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    char n[1000001];
    cin>>n;
    int flag=0;
    for(int i=0;n[i];i++){
        if(n[i]>='0'&&n[i]<='9'){
            flag=flag|(1<<n[i]-'0');
        }
    }
    if(flag==(1<<10)-1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
}
