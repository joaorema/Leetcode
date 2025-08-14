#include <iostream>
#include <vector>
#include <array>


std::array<int,5> sum_array(const std::array<int,5>& array)
{
    std::array<int, 5> result = {0,0,0,0,0};

    result[0] = array[0];

    for(int i = 1; i < 5; ++i)
        result[i] = result[i -1] + array[i];
    
    return result;
}

std::array<int, 5> subtract_array(const std::array<int, 5>& array)
{
    std::array<int, 5> result = {0, 0, 0, 0, 0};

    result[0] = array[0];
    for(int i = 1; i < 5; ++i)
        result[i] = result[i -1] - array[i];
    return result;
}

std::array<int,5> multiple_array(const std::array<int, 5>& array)
{
    std::array<int, 5> result = {0,0,0,0,0};

    result[0] = array[0];
    for(int i = 1; i < 5; ++i)
        result[i] = result[i -1 ] * array[i];
    return result;
}
std::array<int, 5>divide_array(const std::array<int, 5>& array)
{
    std::array<int, 5> result = {0,0,0,0,0};

    result[0] = array[0];
    for(int i = 1; i < 5; ++i)
        result[i] = result[i - 1] / array[i];
    return result;
}


int main()
{
    const std::array<int, 5> arr = {2, 4, 1, 3, 7};
    std::array<int, 5> array1 = sum_array(arr); 
    std::array<int, 5> array2 = subtract_array(arr);
    std::array<int, 5> array3 = multiple_array(arr);
    std::array<int, 5> array4 = divide_array(arr);

    for(int i = 0; i < 5; ++i)
        std::cout << array1[i] << " ";
    std::cout << std::endl;
    for(int i = 0; i < 5; ++i)
        std::cout << array2[i] << " ";
    std::cout << std::endl;
    for(int i = 0; i < 5; ++i)
        std::cout << array3[i] << " ";
    std::cout << std::endl;
    for(int i = 0; i < 5; ++i)
        std::cout << array4[i] << " ";
    std::cout << std::endl;
}

