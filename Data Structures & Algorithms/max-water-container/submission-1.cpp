class Solution {
public:
   int maxWater =0;
    int maxArea(vector<int>& heights) {
        int n = heights.size();
       for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int wth=j-i;
            int ht = min(heights[i],heights[j]);
            int Area = wth * ht;
            maxWater = max(maxWater,Area);
        }
       }
    return maxWater;

    }
};








///// Trapping Rain Water/////
//  int n= heights.size();
//         vector<int>LeftMax(n,0);
//         vector<int>RightMax(n,0);
//         vector<int>water(n,0);
//         LeftMax[0]=heights[0];
//         for(int i=1;i<n;i++){
//             LeftMax[i]=max(LeftMax[i-1],heights[i]);
//         }
//         RightMax[n-1]=heights[n-1];
//         for(int i = n-2;i>=0;i--){
//             RightMax[i]=max(RightMax[i+1],heights[i]);
//         }
//         int TotWater;
//         for(int i=0;i<n;i++){
//             int minHeight=min(LeftMax[i],RightMax[i]);
//             if(minHeight-heights[i]>0){
//              water[i] = minHeight-heights[i];
//               TotWater=max(water[i-1],water[i]);
//                 //   TotWater += water;
//             }
//         //    else if(minHeight-heights[i]==0){
//         //         water = minHeight;
//         //    }
//         //    else{
//         //      water=0;
       
//         }
//         return MaxWater;