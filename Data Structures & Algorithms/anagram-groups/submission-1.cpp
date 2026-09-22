class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //group all the anagrams
        unordered_map<string,vector<string>>mp;
        for(auto str : strs){
           string org = str;
           sort(str.begin(),str.end());
           mp[str].push_back(org);
           //issmein hmne key ko daal diya 
        }

        vector<vector<string>>str;

        for(auto pair : mp){
            //issmein aap har ek key ke liye values nikaalo

            //ab uske pairs mai jaao
            //abhi aap is pair mai se key vlaue nikaalp
            string key = pair.first;
            vector<string>strs = pair.second;
            str.push_back(strs);
        
        }

        return str;


    }
};
