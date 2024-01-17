#include <iostream>
#include <string>

template < typename Type >

Type Min_Max(Type * arr, size_t arrSize, std::string parametr) {
    if (parametr == "min"){
        Type minEl = arr[0];
        for (size_t i = 1; i < arrSize; ++i) {
            if (arr[i] < minEl)
                minEl = arr[i];
        }
        return minEl;
    }
    if (parametr == "max"){
        Type maxEl = arr[0];
        for (size_t i = 1; i < arrSize; ++i) {
            if (arr[i] > maxEl)
                maxEl = arr[i];
        }
        return maxEl;
    }
    else
        throw "Invalid parametr!";   
}

int main() {
    const size_t n = 8 ;
    int arr1 [n] = { 10 , 5 , 7 , 3 , 4 , 100, 1, 12 } ;
    double arr2 [n] = { 7.62 , 5.56 , 38.05 , 56.03 , 9.09 , 12.097, 0.73, 5.5 } ;

    int arr1_min, arr1_max;
    try 
    {
        arr1_min = Min_Max(arr1, n, "min");
        arr1_max = Min_Max(arr1, n, "max");
        std::cout << "min of arr1 : " << arr1_min << std::endl;
        std::cout << "max of arr1 : " << arr1_max << std::endl;
    }
    catch (const char* error_message)
    {
        std::cout << error_message << std::endl;
    }

    double arr2_min, arr2_max;
    try 
    {
        arr2_min = Min_Max(arr2, n, "min");
        arr2_max = Min_Max(arr2, n, "max");
        std::cout << "min of arr2 : " << arr2_min << std::endl;
        std::cout << "max of arr2 : " << arr2_max << std::endl;
    }
    catch (const char* error_message)
    {
        std::cout << error_message << std::endl;
    }
}