class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>mult(n,1);
       signed int multf=1;
        signed int multb=1;

    for(int i =0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            multb=multb*nums[j];
        }
        for(int k= i-1;k>=0;k--){
            multf=multf*nums[k];
        }
        mult[i]=multf*multb;
        multf = 1;
        multb = 1;
    }

    return mult;

    }
};
