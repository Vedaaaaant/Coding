class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int i;
        int k=1;
        int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = n-1;
        int temp[25][25];
        vector<vector<int>> fin;
        
        while(left<=right && top<=bottom)
        {
            for(i=left;i<=right;i++)
            {
                temp[top][i]=k;
                k++;
            }   
            top++;
            for(i=top;i<=bottom;i++)
            {
                temp[i][right]=k;
                k++;
            }
            right--;
            for(i=right;i>=left;i--)
            {
                temp[bottom][i]=k;
                k++;
            }
            bottom--;
            for(i=bottom;i>=top;i--)
            {
                temp[i][left]=k;
                k++;
            }
            left++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        { 
            ans.clear();
            for(int j=0;j<n;j++)
            {
                ans.push_back(temp[i][j]);
            }
            fin.push_back(ans);
        }
        return fin;
    }    
};