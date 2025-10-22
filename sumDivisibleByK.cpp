class Solution {
public:
    int sumDivisibleByK(vector<int>& v, int k) {
        int n=v.size();
        vector<int>freq(101,0);

        for(int i=0;i<n;i++){
            freq[v[i]]++;
        }

        int sum=0;

        for(int i=0;i<101;i++){
            if(freq[i]%k){
                continue;
            }else{
                sum+=(freq[i]*i);
            }
        }

        return sum;
    }
};
