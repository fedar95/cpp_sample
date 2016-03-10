#include <iostream>
#include <fstream>
#include "Vector.cpp"


int main() {
    std::ofstream fout;
    fout.open("D://result.txt");
    const int INT_VECTOR_SIZE = 15;

    // test the template with numeric vector
    Vector<int> a(10);
    std::cout << "Integer vector\n\nDefault size: " << a.GetSize() << std::endl;
    fout << "Integer vector\n\nDefault size: " << a.GetSize() << std::endl;
    fout.flush();
    for (int i = 0; i < INT_VECTOR_SIZE; i++)
        a.Add(2 * i);
    std::cout << "Size after changing: " << a.GetSize() << std::endl;
    fout << "Size after changing: " << a.GetSize() << std::endl;
    std::cout << "Printing:\n";
    fout << "Printing:\n";
    std::cout << a;
    fout << a;

    // test the template with string vector
    Vector<char *> b(3);
    std::cout << "\n\nChar* vector\n\nDefault size: " << a.GetSize() << std::endl;
    fout << "\n\nChar* vector\n\nDefault size: " << a.GetSize() << std::endl;
    b.Add("Welcome ");
    b.Add("to ");
    b.Add("C++!");
    b.Add("Happy ");
    b.Add("New Year");
    std::cout << "Size after changing: " << a.GetSize() << std::endl;
    fout << "Size after changing: " << a.GetSize() << std::endl;
    std::cout << "Printing:\n";
    fout << "Printing:\n";
    std::cout << b;
    fout << b;
    fout.close();

    return 0;
}