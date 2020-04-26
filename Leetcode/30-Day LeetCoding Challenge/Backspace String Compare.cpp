class Solution {
public:
    
    void slide(string &str,int &l,int &skip){
        while(l >= 0){
            if (str[l] != '#'){
                if (skip == 0)
                    break;
                skip--;
            }
            else
                skip++;
            l--;
        }
    }
    
    bool backspaceCompare(string S, string T) {
        int l = (int)S.size() - 1;
        int r = (int)T.size() - 1;
        int skip1 = 0,skip2 = 0;
        while(l >= 0 && r >= 0){
            slide(S,l,skip1);
            slide(T,r,skip2);
            if (l<0 || r<0)
                break;
            if (S[l--]!=T[r--])
                return false;
        }
        return l<0 && r<0;
    }
};