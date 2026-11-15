class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int count = 0;
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<t.length(); j++){
                if(s[i]==t[j]){
                    s[i] = '_';
                    t[j] = '-';
                    count++;
                    break;
                }
            }
        }
        if(s.length()==count && t.length()==count){
            return true;
        }
        return false;
    }
};
