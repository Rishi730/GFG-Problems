class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;

        //reverse(nums.begin(),nums.begin()+k-1);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());

    }
};
