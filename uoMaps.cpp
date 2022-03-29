#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> h;
    h["Mango"] = 100;
    h["Mango"]=90;
    if(h.count("Mango")!=0){
        cout<<h["Mango"]<<endl;
    }
    //another way to insert
    h.insert(make_pair("Kiwi",50));
    //search for a given fruit
    string f;
    cin>>f;
    if(h.count(f)){
        cout<<"Fruit counts "<<h[f]<<endl;
    }
    else{
        cout<<f<<" Fruit doesn't exists";
    }
    h.erase("Mango");
    for(auto p:h){
        cout<<p.first<<" and "<<p.second<<endl;
    }



}