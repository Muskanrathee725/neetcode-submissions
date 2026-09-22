class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int n2 = t.length();

        if(n!=n2){
            return false;
        }

        vector<int>mp(26,0);

        for(int i = 0;i<n;i++){
            //lowercase aur uppercase dono given honge kya
            mp[s[i]-'a']++;
        }
        for(int i = 0;i<n2;i++){
            mp[t[i]-'a']--;
        }

        for(int i = 0;i<26;i++){
            if(mp[i] != 0){
                return false;
            }
        }
        return true;
    }
};
