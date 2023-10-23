//Solution
//Maximum Average Subarray I
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    double avg = 0;
    double window = 0;
    for(int left=0; left<k; left++)
    {
      window += nums[left];
    }
    avg =  window/k;
    for(int right=k; right<nums.size(); right++)
    {
      window += nums[right] - nums[right - k];
      avg = max(avg, window/k);
    }
      return avg;
    }

};
