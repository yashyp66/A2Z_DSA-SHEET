#include<bits/stdc++.h>
using namespace std;
//used coz simple pow does not works for large numbers like 7 digits 
int ipow(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}
bool armstrong(int n){
    int ld;
    int y=n,x= n;
    int c=0,sum=0;
    while(y>0){
        ld= y%10; 
        y=y/10;
        c++;
    }
    while (n>0){
        ld=n%10;
        sum += ipow(ld,c);
        n=n/10;
    }
   return sum == x;
}
