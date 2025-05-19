class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        int sz=s.size();
        for(int i=0;i<sz;i++){
            if(s[i]==goal[0]){
                string s1;
                for(int j=i;j<sz;j++){
                    s1+=s[j];
                }
                for(int j=0;j<i;j++){
                    s1+=s[j];
                }
                if(s1==goal) return true;
            }
        }
        return false;
        
    }
};