#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i=1;

while(i<=n){


int j=1;

while(j<=n-i+1){

cout<<j<<" ";

j=j+1;

}



int star=1;
while(star<=i-1){

    cout<<"*"<<" ";
    star=star+1;

}


int m=1;

while(m<=i-1){

cout<<"*"<<" ";
m=m+1;

}

int z=1;
int d=n-i+1;
while(z<=n-i+1){

cout<<d<<" ";

z=z+1;
d=d-1;


}




































cout<<endl;
i=i+1;


}

}