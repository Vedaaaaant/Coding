class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int dir=1,i;
        int k=1;
        int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = n-1;
        int temp[25][25];
        vector<vector<int>> fin;
        
        while(left<=right && top<=bottom)
        {

        if(dir == 1)
        {
            for(i=left;i<=right;i++){
                temp[top][i]=k;
                k++;
            }   
            dir=2;
            top++;
        }
        else if(dir == 2)
        {
            for(i=top;i<=bottom;i++)
                {
                    temp[i][right]=k;
                    k++;
                }
                dir = 3;
                right--;
        }
        else if(dir == 3)
        {
            for(i=right;i>=left;i--)
            {
            temp[bottom][i]=k;
                k++;
            }
            dir = 4;
            bottom--;
        }
        else if(dir == 4)
        {
            for(i=bottom;i>=top;i--)
            {
                temp[i][left]=k;
                k++;
            }
            dir =1;
            left++;
        }
    }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.clear();
            for(int j=0;j<n;j++){
                ans.push_back(temp[i][j]);
            }
            fin.push_back(ans);
        }
        return fin;
    }    
};