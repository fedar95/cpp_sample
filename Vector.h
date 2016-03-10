#include <ostream>


/* This is a template for Vector class. */
template<typename T>
class Vector {
    template <class U>
    friend std::ostream &operator<<(std::ostream &fout, const Vector<U> &item); // output operator
public:
    Vector();

    Vector(int l);

    ~Vector();

    void Add(T item);

    int GetSize();

private:
    int capacity;
    int size;
    const int MAX_VECTOR_CAPACITY = 128;
    T *ptr;
};
