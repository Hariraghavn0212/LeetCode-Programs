class Solution {
public:
    int fib(int n) {
        int prev = 0 , curr =1 , next;
        if(n== 0) return NULL;
        if(n==1 )return 1;
        for (int i = 1; i<n;i++){
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        return next; 
    }
};