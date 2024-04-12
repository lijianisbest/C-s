#include<iostream>
#include<string_view>

using std::cout;
using std::endl;

class class_c {
public:
    int max;
    int min;
    int middle;

    class_c(int my_max) {
        max = my_max > 0 ? my_max : 10;
    }
    class_c(int my_max, int my_min) : class_c(my_max) {
        min = my_min > 0 && my_min < max ? my_min : 1;
    }
    class_c(int my_max, int my_min, int my_middle) : class_c(my_max, my_min) {
        middle = my_middle < max && my_middle > min ? my_middle : 5;
    }
};
class X {
private:
    bool flag;
    mutable int account;
public:
    bool get_flag()const {
        account++;
        return flag;
    }
};
// declaring_a_union.cpp
union RecordType    // Declare a simple union type
{
    char   ch;
    int    i;
    long   l;
    float  f;
    double d;
    int* int_ptr;
};

