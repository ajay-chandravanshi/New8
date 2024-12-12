#include <iostream>
using namespace std;
int main() {
   int term=1;
   int sum=0;
   for(int r=1;r<=4;++r)
   {
    term=term*10+1;
    cout<<term<< "\t";
    sum=sum+term;
   }
 cout<<sum;
}