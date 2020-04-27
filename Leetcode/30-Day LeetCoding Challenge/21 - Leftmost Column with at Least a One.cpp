/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int bs(int row,int col,BinaryMatrix &a){
        int l = 0,r = col;
        while(l<r){
            int mid = (l + r) >> 1;
            if (a.get(row,mid) >=1)
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int n = binaryMatrix.dimensions()[0];
        int m = binaryMatrix.dimensions()[1];    
        int ans = m;
        for(int i = 0 ; i < n ; i++)
            ans = min(ans,bs(i,m,binaryMatrix));
        if (ans == m)
            ans = -1;
        return ans;
    }
};