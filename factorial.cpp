#include<iostream>
using namespace std;
//using recursion method
int factorial(int f){
if(f==0){
    return 1;
}
if(f==1){
    return 1;
}
else {
    return f*factorial(f-1);
}
}
int main(){
    int fact ;
    cin>>fact;
    int ans = factorial(fact);
    cout<<"Factorial is "<<ans<<endl;
    return 0;
}