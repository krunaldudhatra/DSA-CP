class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     int n = strs.size();
        sort( strs.begin(),strs.end() );
        string ans = "";
        string first = strs[0];
        string last = strs[ n-1 ];
        int size_of_first , size_of_last;
        size_of_first = first.size();
        size_of_last = last.size();
        int m = min( size_of_first ,size_of_last );
        for( int i = 0 ; i < m ; i++ ){
            if( first[i] == last[i] ) ans = ans + first[i];
            else break;
        }
        return ans;
    }
};