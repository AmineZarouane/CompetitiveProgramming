class Solution {
public:
    int maxDiff(int num) {
        string a,b;
        int x = num;
        while(x){
            a += '0' + x % 10;
            b += '0' + x % 10;
            x /= 10;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        char c;
        for(int i = 0 ; a[i] ; i++)
            if (a[i] != '9'){
                c = a[i];
                break;
            }
        for(int i = 0 ; a[i] ; i++)
            if (a[i] == c)
                a[i] = '9';
        
        c = 'z';
        bool z = false;
        if (b[0] == '1'){
            for(int i = 1 ; b[i] ; i++)
                if (b[i] > '1'){
                    c = b[i];
                    z = true;
                    break;
                }
        }
        else
            c = b[0];
        for(int i = 0 ; b[i] ; i++)
            if (b[i] == c)
                b[i] = '1' - z;
        int ans = 0;
        for(int i = 0 ; a[i] ; i++)
            ans = ans * 10 + (a[i] - b[i]);
        return ans;
    }
};