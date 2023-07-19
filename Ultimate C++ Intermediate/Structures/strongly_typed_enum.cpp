// strongly types enum class
#include <iostream>
using namespace std;

struct strongly_typed_enum
{
    enum class MyClass { 
        failed=0, 
        success, 
        unknown 
    };

    MyClass s;
};

int main()
{
    strongly_typed_enum web;
    web.s = strongly_typed_enum::MyClass::success;
    cout << static_cast<int>(web.s) << endl;
    return 0;
}
