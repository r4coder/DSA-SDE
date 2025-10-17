class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        int count=0;
    for(int i=0;i<n;i++)
      {
             if(nums[i]>0||nums[i]<0)
             {
                 temp.push_back(nums[i]);
                 count++;
             }
         
      }
      
      for(int i=0;i<n-count;i++)
      {
           temp.push_back(0);
      }
      
      for(int i=0;i<n;i++)
      {
          nums[i]=temp[i];
      }
        
    }
};
