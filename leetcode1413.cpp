class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int temp = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            temp += nums[i];//t=-3, t=3, t=0
            //cout << "i:"<< i <<"  temp: " << temp ;
            if(temp < 1){// t=-3 , t=0
                ans += (1 - temp); // ans=4 , ans =5
                temp = 1 ; // t=-3+4=1,  t=
            }
            //cout << " after temp:" << temp << " ans:" << ans << endl;
        }
        
        if(ans ==0)
            return 1;
        
        return ans;
    }
};
