class Solution {
public:
    double myPow(double x, int n) {
        long long s=n;
        if(n<0)
        s=-s;
        double ans=power(x,s);
        if(n<0)
        ans=1/ans;
        return ans;
    }
    double power(double x, long long n){
        if(x==0)
        return 0;
        if(n==0)
        return 1;

        double ans=myPow(x,n/2);
        if(n%2==0){
           return ans*ans;
        }
        else{
            return x*ans*ans;
        }
    }
};
