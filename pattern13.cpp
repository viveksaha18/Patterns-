#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers of rows : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}