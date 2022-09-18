#include <algorithm>

// template function to return smallest value of three arguments
template <class T>
T min3(T a1, T a2, T a3){
    return std::min(a1, std::min(a2, a3));
}