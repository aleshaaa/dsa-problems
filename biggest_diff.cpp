//Find biggest difference

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr {1, 14, 2, 16, 10, 20};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max) max = arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min) min = arr[i];
    }
    std::cout << max - min;
    return 0;
}