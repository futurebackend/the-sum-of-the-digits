#include <iostream>
using namespace std;

int main(){
int x,sum=0;
cout<<"enter natural number: ";
    cin>>x;
    while(x>0){
    sum=sum+x%10;
    x=x/10;
    }
    cout<<"the sum of the digits is: "<<sum << endl;
    return 0;
}
