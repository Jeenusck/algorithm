// Day1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

template<typename BidirIt, typename t_cmp=std::greater<typename std::iterator_traits<BidirIt>::value_type>>
void sort1(BidirIt first, BidirIt last, t_cmp cmp=t_cmp())
{
    for (auto cur = first + 1; cur != last; cur++)
    {
        auto val{ std::move(*cur) };
        auto next{ cur };
        auto prev{ std::prev(cur) };

        while (cmp(val, *prev))
        {
            *next = std::move(*prev);
            next = prev;
            if (prev != first)
            {
                prev--;
            }
            else
            {
                break;
            }
        }
        *next = std::move(val);
    }
}

template<typename t>
void print(t const& val)
{
    for (auto v : val)
    {
        std::cout << v << "  ";
    }

    std::cout << '\n';
}

int main()
{
    std::vector<int> test1{ 31,41,59,26,41,58 };
    sort1(test1.begin(), test1.end());


    std::vector<int> test2{ 32,42,49,27,42,48 };
    sort1(test2.begin(), test2.end());


    std::vector<int> test3{ 39,49,69,36,47,68 };
    sort1(test3.begin(), test3.end());

    print(test1);

    print(test2);

    print(test3);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
