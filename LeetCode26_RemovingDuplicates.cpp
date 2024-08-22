#include <iostream>
#include <vector>

using namespace std;


int removeDuplicates(vector<int> &nums)
{
    int i, j = 0, k = 0;
    int Size = nums.size();

    if (Size <= 1)
    {
        return 1;
    }
    else if (Size == 2)
    {
        if (nums[1] != nums[0])
        {
            k++;
        }
    }

    for (i = 1; i < Size; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            if (j == 0)
            {
                j++;
                k++;
            }
        }
        if (nums[i] != nums[i - 1])
        {
            if (j == 0)
                j++;

            nums[j] = nums[i];
            j++;
            k++;
        }
        else
        {
            k++;
        }
    }
    return k;
}

int main()
{

    return 0;
}