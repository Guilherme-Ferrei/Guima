#include<iostream>

using namespace std;

int main()
{
    while(1>0){
      for(int h=0;h<24;h=h+1)
        for(int m=0;m<60;m=m+1)
           for(int s=0;s<60;s=s+1)
                       cout << h << " : " << m << " : " << s << "\n";
    }
    return 0;          
}