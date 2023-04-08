#include <iostream>

using namespace std;

int main()
{
    int tmp = 23;
    int* p = &tmp;
    delete p;
    cerr<<tmp;

    //khi giải phóng con trỏ thì giá trị biến a lưu trong địa chỉ mà con trỏ trỏ tới cũng bị xóa, nhưng vẫn có lúc em cerr ra được 23

    return 0;
}
