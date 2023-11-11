//Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. 
//Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	std::string element;
    	int len;
    	int x;
    	for (int i = 0; i < n; i++)
    	{
    	    element = std::to_string(a[i]);
    	    len = element.length();
    	    x = len - 1;
    	    for(int j = 0; j < len; j++)
    	    {
    	        if (element[j] != element[x])
        	    {
        	        return 0;
        	    }
        	    x--;
    	    }
    	}
    	return 1;
    }
};