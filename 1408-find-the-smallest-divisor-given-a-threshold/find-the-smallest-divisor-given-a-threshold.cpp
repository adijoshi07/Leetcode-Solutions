class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = * max_element(nums.begin(), nums.end());
        while(l<r){
            int div = l + (r-l)/2;
            long long sum = 0;
            for(int x : nums){
                //sum += ceil((double)x/div);
                sum += (x + div -1)/div;
            }
            if(sum <= threshold){
                r = div;
            }
            else{
                l = div + 1;
            }
        }
        return l;
    }
};