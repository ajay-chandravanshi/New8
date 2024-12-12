#include <iostream>
using namespace std;
int main() {
    int term1=0;
    int term2=1;
    int next;
    int i=0;
    int n=5;
    while(i<=n)
    {
        if(i==0)
        {
             cout<<i;
            i++;
            continue;
        }
       
       if(i==1)
        {
         cout<<i;
            i++;
            continue;
        }

        next=term1+term2;
        term1=term2;
        term2=next;
        cout<<next;
        i++;
    }
   }
