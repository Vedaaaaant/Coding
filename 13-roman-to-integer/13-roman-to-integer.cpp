class Solution {
public:
    int romanToInt(string s) {
        map<char,int> roman ;
        int num = 0 , sum = 0;
        roman.insert({'I',1});
        roman.insert({'V',5});
        roman.insert({'X',10});
        roman.insert({'L',50});
        roman.insert({'C',100});
        roman.insert({'D',500});
        roman.insert({'M',1000});
        int len = s.size();
        for(int i = 0 ; i < len ; )
        {
            if(i == len-1  || roman[s[i]] >= roman[s[i+1]]){
                num = roman[s[i]];
                i++;
            }
            else{
                num = roman[s[i+1]] - roman[s[i]];
                i = i+2;
            }
            sum += num ;
        }
        return sum ;
    }
};