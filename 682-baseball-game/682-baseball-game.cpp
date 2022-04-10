class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        stack<int> s;
        int x ;
        int y ;
        int sum = 0 ;
        for(auto i : ops)
        {
            if(i == "C")
            {
                s.pop();
            }
            else if(i == "D")
            {
                s.push(s.top()*2);
            }
            else if(i == "+")
            {
                x = s.top();
                s.pop();
                y = s.top();
                s.push(x);
                s.push(x+y); 
            }
            else
            {
                 s.push(stoi(i)); 
            }
        }
        while(s.size() != 0)
        {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};