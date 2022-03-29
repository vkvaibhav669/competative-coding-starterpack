#include<iostream>
using namespace std;
int print(int f){
    if(f==0){
        return 0;
    }
    else{
        cout<<f<<endl;
        return print(f-1);

    }

}
int main(){
    int n;
    cin>>n;
    print(n);


    return 0;
}