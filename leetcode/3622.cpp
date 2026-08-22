class Solution {
public:
    bool checkDivisibility(int n) {
        int original =n;
        int sum=0;
        int product=1;
        while(n>0){
            int ld=n%10;
             n=n/10;
            sum+=ld;
            product*=ld;
           
        }
        int x=sum+product;
        if(original%x==0){
            return true;
        }
        else{
            return false;
        }
    }
};
