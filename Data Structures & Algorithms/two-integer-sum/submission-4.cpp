class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>st;

        for(int i = 0;i<n;i++){
            int to_find = target - nums[i];
           // bool flag = false;
            if(st.find(to_find)!=st.end()){
                int idx2 = st[to_find];
                //bool flag = true;
                return {idx2,i};
                //break;
            }
            
            st[nums[i]] = i;
        }
       return {-1,-1};
        
    }
};
