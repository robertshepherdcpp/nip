#include<concepts>

#include"reason.hpp"
#include"fixed_string.hpp"

template<typename T>
  requires std::integral<T> || reason<"This overload is for integral values">
auto function()
{
}

template<typename T>
  requires std::floating_point<T> || reason<"This overload is for floating point values">
auto function()
{
}

int main()
{
}