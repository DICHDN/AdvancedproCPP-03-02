/*
Задача 2. Копирование умных массивов
Описание
В этом задании вам нужно поработать с классом умных массивов, который вы реализовали в предыдущем задании. Сначала попробуйте создать два экземпляра вашего класса с различными элементами и присвоить один другому.

smart_array arr(5);
arr.add_element(1);
arr.add_element(4);
arr.add_element(155);

smart_array new_array(2);
new_array.add_element(44);
new_array.add_element(34);

arr = new_array
Попытайтесь самостоятельно разобраться, что произошло, и правильно реализовать копирование умных массивов.
*/



#pragma once
class smart_array
{
protected:
	int* array1;
	int actual_size = 0;
	int index = 0;
public:
	smart_array(unsigned int a)
	{
		int* arr = new int[a];
		this->array1 = arr;
		this->actual_size = a;
	}
	smart_array(const smart_array& a)
	{
		this->array1 = a.array1;
		this->actual_size = a.actual_size;
		this->index = a.index;
		for (int i = 0; i < this->actual_size; ++i)
		{
			this->array1[i] = a.array1[i];
		}
	}
	int get_element(unsigned int arr);
	int* add_element(unsigned int new_element);
	void print_arr();




	~smart_array()
	{
		delete[] array1;
	}
	const smart_array& operator=(smart_array& other);
};