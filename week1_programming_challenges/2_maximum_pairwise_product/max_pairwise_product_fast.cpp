#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct_fast(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();

         int max_index1=-1;
         
    for ( int i = 0;  i < n; ++ i) {
        if (numbers[i]> numbers[max_index1]|| max_index1==-1)
        max_index1=i;
    }

    int max_index2=-1 ;

    for (int j = 0; j < n; ++j) {

        if ((numbers[j] > numbers[max_index2] ||max_index2==-1 ) && (j != max_index1) )
            max_index2=j;

     }

 max_product = ((long long)(numbers[max_index1] * numbers[max_index2]));
    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct_fast(numbers) << "\n";
    return 0;
}
