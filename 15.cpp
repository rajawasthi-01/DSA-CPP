// sum of number from 1 to n using for loop
#include <iostream>
using namespace std;

 int main(){
    int n=23;
    int sum=0;
     for(int i=1;i<=n;i++){
        sum+=i;
 }
    cout<<"Sum of number from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}