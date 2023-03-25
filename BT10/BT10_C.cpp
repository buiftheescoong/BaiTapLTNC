#include<iostream>
#include<string.h>
using namespace std;
struct String{
    int length;
    char *str;
    String(const char* s){
        length = strlen(s);
        str = new char[length];
        strncpy(str, s, length);
    }
    ~String(){
        delete [] str;
    }
    void print(){
        cout << str << endl;
    }
    void append(const char * a ){
        int length_a = strlen(a);
        char * temp = new char [length_a + length];
        strcpy(temp, str);
        strcat(temp, a);

        cout << temp << endl;
        delete [] temp;

    }

};
int main(){
    String s("Hello");
    s.print();

    s.append("Cong");

    return 0;
}
