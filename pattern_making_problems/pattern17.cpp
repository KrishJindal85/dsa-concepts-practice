#include<iostream>
using namespace std;
int main(){


int n;
cin>>n;
int i=1;

while(i<=n){
//1.space print krvane ke liye
int space=1;

while(space<n-i){

cout<<" ";

space=space+1;

}
//2.stars print krvane ke liye
int j=1;
while(j<=i){

cout<<"*";
j=j+1;


}
i=i+1;
cout<<endl;



}


}