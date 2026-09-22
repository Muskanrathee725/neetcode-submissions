class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //k most frequent elements
        map<int,int>mp;

        int n = nums.size();
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }

        //map mai bas frequncy daali hai 
        //if we can sort the map on the basis of the secind elment

        //isko aapka heap mai daalso 
        //minheap hmesha top pe minimum elements ko rkhta hai 
        //toh jo n-k times pop krte jaao minheap se toh remaining aap ke paas k top elments
        //minheap mai store kis basis pe krte hain
          
          priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>hp;

          for(auto pair : mp){
            int first = pair.first;
            int second = pair.second;

            //ab aapne pair le liya ab aap isko ulte order mai mp mai daalso
            hp.push({second,first});
          }
          int n1 = hp.size();
          for(int i = 0;i<n1-k;i++){
            //ab aapne priority queue mai n elemnets daale hain top k cahiye toh n-k elements ko nikaal do
            //ab baaki ke elements nikaal do 
            hp.pop();
          }
          //ab aap remaining elements mai jaao
          //unme se aap k elemnst ko answer mai daaldo
          vector<int>ans;
          while(!hp.empty()){
            ans.push_back(hp.top().second);
            hp.pop();
          }
        return ans;
        
    }
};
