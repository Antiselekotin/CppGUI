#pragma once
template <typename T> class Listus
{	
	template <typename T> class Item
	{
	public:
		T data;
		Item<T>* next;
		Item(T& TData, Item* ptr = nullptr) {
			this->data = TData;
			this->next = ptr;
		}
	};
	Item<T>* start;
public:
	int length;
	Listus()
	{
		start = nullptr;
		length = 0;
	};
	void push_back(T newData)
	{
		Item<T>* current = start;
		if (start == nullptr) {
			start = new Item<T>(newData);
		}
		else {
			while(current != nullptr)
			{
				current = current->next;
			}
			current->next = new Item<T>(newData);
			length++;
		}
	}
	T& operator[](const int i) {
		Item<T>* current = start;
		int count = 0;
		while (current != nullptr) 
		{
			if (count == i) {
				return current->data;
			}
			else {
				count++;
				current = current->next;
			}
		}
	}
};

