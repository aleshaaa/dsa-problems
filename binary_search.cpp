//Given a sorted array of size N and an integer K, find the position(0-based indexing) 
//at which K is present in the array using binary search.

class Solution {
  public:
    int BinarySearch(int arr[], int n, int k) {
        int mid = 2;
        int low = 0;
        int high = n - 1;
        int out = -1;
        while ( low <= high )
        {
            mid = std::floor(low + ((high - low) / 2));
            if(arr[mid] == k)
            {
                out = mid;
                break;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return out;
    }
};