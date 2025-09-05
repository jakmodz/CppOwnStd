#pragma once
#include "Object.h"
#include <cstddef>
#include "IndexOutOfRangeException.h"
template<typename... Types>
class Tuple;

template<typename First, typename... Rest>
class Tuple<First, Rest...> : public Object {
public:
    Tuple(First first, Rest... rest)
        : first_(first), rest_(rest...) {}

    template<std::size_t Index>
    auto get() const;

private:
    First first_;
    Tuple<Rest...> rest_;
};

template<typename First, typename... Rest>
template<std::size_t Index>
auto Tuple<First, Rest...>::get() const 
{
    if constexpr (Index -1 == 0)
    {
        return first_;
    }
    else 
    {
        return rest_.template get<Index -1>();
    }
}


template<>
class Tuple<> : public Object 
{
public:
    template<std::size_t Index>
    auto get() const
    {
        throw IndexOutOfRangeException();
    }
};
