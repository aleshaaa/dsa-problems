//Function - move all zeros to end of array 
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr {1, 2, 0, 4, 3, 0, 5, 0};
    std::vector<int> tmp;
    int counter = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0) counter++;
        else
        {
            tmp.push_back(arr[i]);
        }
    }
    for (int j = 0; j < counter; j++)
    {
        tmp.push_back(0);
    }
    arr = tmp;
    for (int x = 0; x < arr.size(); x++)
    {
        std::cout << arr[x] << " ";
    }
    return 0;
}