#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int i=1;
int count=1;

while(i<=n){

int j=1;
while(j<=n){

cout<<count<<" ";
count=count+1;
//yaar prr jb row 1 khatam ho gyi aur row 
// 2 start hori h toh count dubara 1 se ni start hona chahiye tha
//esa nhi hua kyuki dhyan se dekho int count =1 while loop se bahr likha h
//jbki int j andr likha h kyuki usse dubara reset krna h aur int i
//bhi loop se bahr h kyoki usse bhi dubara se shuru nhi krna
j=j+1;

}
cout<<endl;
i=i+1;

}


}