class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> indies; //Create an empty hash map
        for(int i=0;i<nums.size();++i)
            indies[nums[i]] = i;        //Use hash map to create the index   
        
        for(int i=0; i<nums.size();++i)
        {
            int left = target - nums[i];
            
            if(indies.count(left) && indies[left] !=i) // if find out "left" in map and not use the same value
                return {i, indies[left]};
        }
        
        return {};
    }
};
