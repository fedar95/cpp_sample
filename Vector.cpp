#include <iostream>
#include "Vector.h"


template<class T>
Vector<T>::Vector(int l) {
    capacity = std::max(MAX_VECTOR_CAPACITY, l);
    size = 0;
    ptr = new T[capacity];
}

template<class T>
Vector<T>::Vector() {
    Vector(0);
}

template<class T>
Vector<T>::~Vector() {
    delete[] ptr;
}

template<class T>
void Vector<T>::Add(T item) {
    if (size == capacity) // double the capacity if there is no free memory.
    {
        T *a = new T[capacity * 2];
        capacity *= 2;
        for (int i = 0; i < capacity; i++)
            a[i] = ptr[i];
        delete[] ptr;
        ptr = a;
    }
    ptr[size++] = item;
}

template<class T>
int Vector<T>::GetSize() {
    return size;
}

template<class U>
std::ostream& operator<<(std::ostream &fout, const Vector<U> &item) {
    for (int i = 0; i < item.size; i++)
        fout << item.ptr[i] << " ";
}