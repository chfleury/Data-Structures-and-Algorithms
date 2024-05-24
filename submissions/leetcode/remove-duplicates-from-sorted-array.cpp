class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        if (nums.size() == 0)
        {
            return 0;
        }

        int i = 1;
        int j = 2;
        int k = 1;
        int max = nums[0];

        while (i < nums.size())
        {
            if (nums[i] > max)
            {
                max = nums[i];
                k++;
            }
            else
            {
                while (j < nums.size())
                {
                    if (nums[j] > max)
                    {
                        max = nums[j];

                        int t = nums[j];
                        nums[j] = nums[i];
                        nums[i] = t;
                        k++;
                        break;
                    }
                    j++;
                }
            }

            i++;
        }

        return k;
    }
};