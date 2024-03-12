#include <iostream>
#include "IArr.h"


int smart_array::get_element(unsigned int arr)
{
    if (arr < actual_size)
    {
        return array1[arr];
    }
    else
    {
        std::cout << "Индекс вне диапазона массива";
        return false;
    }
}


int* smart_array::add_element(unsigned int new_element)
{
    if (index < actual_size)
    {
        array1[index] = new_element;
        ++index;
    }
    else std::cout << "out if rage array!";

    return array1;
}

void smart_array::print_arr()
{
    for (int i = 0; i < index; ++i)
    {
        std::cout << array1[i] << ' ';
    }
}

const smart_array&  smart_array:: operator=(smart_array& arr)
{
    delete[] this->array1;
    this->array1 = new int[arr.actual_size]; 
    this->actual_size = arr.actual_size;
    this->index = arr.index;
    for (int i = 0; i < this->actual_size; ++i)
    {
        this->array1[i] = arr.array1[i];
    }    
    return *this;
}