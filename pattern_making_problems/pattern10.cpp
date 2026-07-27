#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int row=1;

while(row<=n){
int col=1;


while(col<=n){
char ch='A'+row-1;
//A ko double inverted commas mei nhi likhna blki single inverted
//commas mei likhna h kyuki zra dimag lga ke yaad kr data type ko kese 
//represent krte the
cout<<ch<<" ";
col=col+1;


}
cout<<endl;

row=row+1;




}







}