#include<iostream>
using namespace std;




//first buy and then sell stocks 
//find max profit possible difference 
int arr[] = {7,1,5,3,6,4};
int n = sizeof(arr)/sizeof(int);
int mini =arr[0];
int profit=0;
int i;
for(i=1;i<n;i++){
int dif = arr[i]-mini;
profit = max(profit,dif);
mini = min(mini,arr[i]);
}
//sell at ith day 
//buy fro 1st to i-1th day  

return 0;

}

