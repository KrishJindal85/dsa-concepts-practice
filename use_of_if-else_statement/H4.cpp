#include<iostream>
using namespace std;
int main(){

int a;
//int a ki jgah agr char a b likha hota toh bhi koi farak nhi pdta
cin>>a;
if(a >= 'A' && a<='Z'){
    cout<<" This is upper case " << endl;
}
else if (a >='a' && a<'z'){
    cout<<" This is a lower case"<< endl;

}
else if(a>='0' && a<='9')
{
    cout<< "This is a digit"<<endl;

}
return 0;






    
}