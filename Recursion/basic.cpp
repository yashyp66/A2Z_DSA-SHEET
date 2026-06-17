#include<bits/stdc++.h>
using namespace std;
int c=0;
void print(){
    cout<<c<< " ";
    if(c == 4){
        return;
              }
    else{
        c++;
        }
    print();
}
int main(){
    print();
    return 0;
}
