#include<iostream>
using namespace std;
int main(){



int n;
cin>>n;

// 1 ya usse chote number prime nhi hote
if(n<=1){
    cout<<"not prime"<<endl;
return 0;
}
int i=2;
while(i<n){
//agr n bich mein hi kisi se divide ho gya 
if(n%i==0){
    cout<<"not prime"<<endl;
    return 0;
    // return 0 yhi prr program ko khatam krr dega ,aage kuch check nhi hoga

    }
    i=i+1;
    //agr loop pura bina tute khatam hua iska matlab i badhte badhte n tak pahuch gya 
    //aur bich mei koi factor nhi mila ,mtlb number prime h
    

}

cout<<"prime"<<endl;


return 0;

    
}