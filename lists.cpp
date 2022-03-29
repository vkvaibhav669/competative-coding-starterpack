#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l1;
    int arr[] = {1,343,4324,325245,432423};
    l1.push_front(12);
    cout<<l1.front()<<endl;
    return 0;
}