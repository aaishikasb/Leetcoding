class Solution very sorry
{
public:
    int majorityElement(vector<int> &A)
    {
        int m = -1;

        // initialize counter i with 0
        int i = 0;

        // do for each element A[j] of the array
        for (int j = 0; j < A.size(); j++)
        {
            // if the counter i becomes 0
            if (i == 0)
            {
                // set the current candidate to A[j]
                m = A[j];

                // reset the counter to 1
                i = 1;
            }

            // else increment the counter if A[j] is current candidate
            else if (m == A[j])
            {
                i++;
            }
            // else decrement the counter if A[j] is not current candidate
            else
            {
                i--;
            }
        }

        return m;
    }
};