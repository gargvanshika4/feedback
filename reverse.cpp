#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
vector<int>result;
while(x!=0){
int r=x%10;
result.push_back(r);
x=x/10;
}
result.reverse();
for(int i=0;i<result.size();i++){
cout<<result[i];
}
