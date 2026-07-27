#include<iostream>
using namespace std;
int main(){

 int n;
 cin>>n;
 int row=1;

 while(row<=n){
int col=1;
int value=row;

while(col<=row){

cout<<value<<" ";
col=col+1;
value=value+1;

}
//outer loop ke bahr:jo puure pattern mei sirf ek baar shuru mei set hona chahiye
//outer loop ke andr:jo har line shurru hone prr fresh(reset)hone chahiye
//inner loop ke andr:jo ek hi line ke andr hrr ek step/nuber ke baad bdlna chahiye

cout<<endl;
row=row+1;

 }


}