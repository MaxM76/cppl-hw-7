#include <iostream>
#include <vector>
#include <algorithm>


void delete_duplicates(std::vector<int> &vect) {
    sort(vect.begin(), vect.end());
    auto it = std::unique(vect.begin(), vect.end());
    vect.erase(it, vect.end());
}

int main()
{
    std::vector<int> v = { 1, 1, 2, 5, 6, 1, 2, 4 };
    delete_duplicates(v);
    std::for_each(v.cbegin(), v.cend(), [](int i) {std::cout << i << " "; });
    std::cout << "\n";
}