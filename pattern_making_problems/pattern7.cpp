#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int row=1;
int count=1;

while(row<=n){
int col=1;
while(col<=row){

cout<<count<<" ";
//count=count+1 chahe col=col+1 se pehle likh do chahe baad mei likh do
//koi frk nhi pdne wala 
col=col+1;
count=count+1;

}
cout<<endl;
row=row+1;



}

}