class Solution {
public:
    int maxProduct(int n) {
        int product = 0;
        int ans = 0;
        vector<int> v;
        while(n!=0){
            product = n%10;
            n=n/10;
            v.push_back(product);
        }
        for(int i = 0; i<v.size();i++){
            for(int j=i+1 ;j<v.size();j++){
                if(v[i]*v[j]>ans){
                    ans= v[i]*v[j];
                }
            }
        }
        return ans;
        
    } 

};