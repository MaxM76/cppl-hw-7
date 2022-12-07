/*
������ 2. ������ ����������
��������
����� ����������� ��������� �������, ������� �������� ���������� ����������.

��������� ����� ���� �����:

std::set
std::vector
std::list
*/

#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
void print_container(T container) {
    for (auto it = container.begin(); it != container.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two. ������� ������ ����� �������? :)

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four
}