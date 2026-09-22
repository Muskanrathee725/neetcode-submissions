class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>Repeat(256,0);
        int first=0, second=0;
        int len=0;
        while(second<s.size())
        {
        while(Repeat[s[second]]){
            Repeat[s[first]]=0;
            first++;
        }
        Repeat[s[second]]=1;
        len=max(len,second-first+1);
        second++;
    }  
       return len;
    }

};
