#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool myComparisn(pair<string,int> p1, pair<string,int>p2){
    //first = Name 
    //second = Salary
    if(p1.second == p2.second)return p1.first<p2.first;
    return p1.second > p2.second;

}

// void Sort(emp[]){
   
//    for(int i=0;i<n;i++){
//     if(myComparisn(emp[i],emp[i+1]))swap(emp[i],emp[i+1]);
//    }
// }



int main(){
int n,min_salary;
pair<string,int> emp[100005];
cin>>min_salary;
cin>>n;
string name;
int salary;
for(int i=0;i<n;i++){
    cin>>name>>salary;
    emp[i].first=name;
    emp[i].second=salary;
}
std::sort(emp,emp+n,myComparisn);
//print 
for(int i=0;i<n;i++){
    if(emp[i].second>=min_salary)cout<<emp[i].first<<" "<<emp[i].second<<endl;
}
return 0;
}