#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_index1 = -1;
    int max_index2 = -1;
    int n = numbers.size();
    for(int i=0;i<n;i++)
    {
        if((max_index1==-1)||(numbers[i]>numbers[max_index1]))
        {
            max_index1= i;
        }
    }

    for(int j=0;j<n;j++)
    {
        if((j!=max_index1)&&((max_index2==-1)||(numbers[j]>numbers[max_index2])))
        {
            max_index2= j;
        }
    }
    return((long long)(numbers[max_index1])*numbers[max_index2]);

    
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
