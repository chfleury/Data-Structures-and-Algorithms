// my second solution after reading the hints, starting the second point at the end
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        int j = nums.size() - 1;
        int k = 0;

        while (i <= j)
        {
            if (nums[i] == val)
            {
                while (j > i)
                {

                    if (nums[j] != val)
                    {
                        int t = nums[i];
                        nums[i] = nums[j];
                        nums[j] = t;

                        k++;
                        j--;

                        break;
                    }

                    j--;
                }
            }
            else
            {
                k++;
            }

            i++;
        }

        return k;
    }
};