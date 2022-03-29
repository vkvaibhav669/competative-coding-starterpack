#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;
    cout<<"Input 5 char "<<endl;
    int num;
    for(int i=0;i<5;i++){
        cin>>num;
        s.push(num);
        cout<<"NExt"<<endl;
    }

    for(int i=0;i<5;i++){
        cout<<s.top()<<endl;
        s.pop();

    }

    return 0;
}