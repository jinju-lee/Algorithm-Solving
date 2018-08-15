#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    string A,B,C,D;
    string num_1,num_2;
    long long sum;
    
    cin>>A>>B>>C>>D;
    num_1=A+B;
    num_2=C+D;
    sum=stoll(num_1)+stoll(num_2);
    cout<<sum<<"\n";   
}
