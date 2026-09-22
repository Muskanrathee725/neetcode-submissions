class Solution {
public:
    bool isPalindrome(string s) {
        int start =0;
        int end = s.size()-1;
   
        while(start<end){
              while (!isalnum(s[start])) start++;
               while ( !isalnum(s[end])) end--;
            
            if(start>=end) return true;
             if (tolower(s[start])!=tolower(s[end])){
             return false;
            }
             else{
              start++;
              end--;
            }
          
           }
            return true; 
        }
    };
 

