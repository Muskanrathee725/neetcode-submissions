class Solution {
public:
    int b;
    bool hasDuplicate(vector<int>& nums) {
    //  std::vector<int>brr(nums.size(),false);
     
    //  for(int i= 0;i<nums.size();i++){
    //     b = nums[i];
    //     if(brr[b]==false){
    //         brr[b]=true;
    //     }
    //     else{
    //       return true;
    //     }
       
    // }
    // return false;
   std::sort(nums.begin(),nums.end());
   for(int i =0;i<nums.size();i++){
    if(nums[i]==nums[i+1])
    return true;
   }
   return false;
  }
};
