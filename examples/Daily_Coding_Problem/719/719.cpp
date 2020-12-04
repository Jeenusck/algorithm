// Problem
// Spreadsheets often use this alphabetical encoding for its columns: 
//"A", "B", "C", ..., "AA", "AB", ..., "ZZ", "AAA", "AAB", ....

//Given a column number, return its alphabetical column id.
// For example, given 1, return "A".Given 27, return "AA".
#include <iostream>
#include  <string>
std::string GetColumnId(int columnNumber)
{
    int length = ((columnNumber - 1) / 26) + 1;
    int factor = (columnNumber - 1) % 26;

    std::string id;
    id.insert(0, length - 1, 'A');
    id += 'A' + factor;

    return id;
}
int main()
{
    std::cout << "Hello World!\n";

    for (int i = 1; i < 60; i++)
    {
        std::cout << GetColumnId(i) << '\n';
    }
}
