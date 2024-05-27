#include <algorithm>
#include <iostream>
#include <vector>

int f()
{
    static int i=0;
    return ++i;
}

int main()
{
    std::vector<int> v(5);
    std::ostream_iterator<int>output(std::cout, "t");
    std::generate(v.begin(), v.end(), f);
    copy(v.begin(),v.end(),output)
}