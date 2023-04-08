#include <iostream>

using namespace std;

int strlength(char a[]){
    int size = 0;
    while(a[size] != '\0') size++;
    return size;
}

void reverse(char a[]){
    int size = strlength(a);
    char* rv_a = new char[size];
    for(int i = 0; i < size; i++){
        rv_a[i] = a[size - i - 1];
    }
    for(int i = 0; i < size; i++){
        a[i] = rv_a[i];
    }
    delete[] rv_a;
}

void delete_char(char a[], char c){
    int idx = 0;
    int size = strlength(a);
    for(int i = 0; i < size; i++){
        if(a[i] != c){
            a[idx] = a[i];
            idx++;
        }
    }
    a[idx] = '\0';
}

void pad_right(char a[], int n){
    int size = strlength(a);
    if(n < size) return;

    for(int i = size; i < n; i++){
        a[i] = ' ';
    }
    a[n] = '\0';

}

void pad_left(char a[],  int n){
    int size = strlength(a);
    if(n < size) return;

    int dis = n - size;
    char* b = new char[size + 1];
    for(int i = 0; i < size; i++) b[i] = a[i];
    for(int i = 0; i < dis; i++) a[i] = ' ';

    for(int i = 0; i < n; i++){
        if(i < dis) a[i] = ' ';
        else a[i] = b[i - dis];
    }
    a[n] = '\0';
}

void truncate(char a[], int n){
    int size = strlength(a);
    if(size < n) return;

    a[n] = '\0';
}

bool is_palindrome(char a[]){
    int size = strlength(a);
    for(int i = 0; i <= size / 2; i++){
        if(a[i] != a[size - i - 1]) return false;
    }
    return true;
}

void trim_left(char a[]){
    int size = strlength(a);
    size--;
    while(a[size] == ' '){
        a[size] = '\0';
        size--;
    }
}

void trim_right(char a[]){
    int size = strlength(a);
    int dis = 0;
    for(int i = 0; i < size; i++){
        if(a[i] != ' ') break;
        else dis++;
    }
    for(int i = 0; i < size - dis; i++){
        a[i] = a[i + dis];
    }
    a[size - dis] = '\0';
}

int main()
{
    char s[] = "Buithecong";
    cout << " s: " << s << endl;
    reverse(s);
    cout << "Reversal s: " << s << endl;
    reverse(s);
    delete_char(s, 'c');
    cout << "s without 'c': " << s << endl;
    if(is_palindrome(s)) cout << "s is a palindrome string" << endl;
    else cout << "s isn't a palindrome string" << endl << endl;

    char s2[] = "cong";
    pad_right(s2, 10);
    cout << "s2 (pad_right): " << s2 << ".end" << endl;
    trim_left(s2);
    cout << "s2 (trim_left): " << s2 << ".end" << endl;
    truncate(s2, 2);
    cout << "s2 (truncate): " << s2 << ".end" << endl << endl;

    char s3[] = "thecong";
    pad_left(s3, 10);
    cout << "s3 (pad_left): " << s3 << ".end" << endl;
    truncate(s3, 4);
    cout << "s3 (truncate): " << s3 << ".end" << endl;
    trim_right(s3);
    cout << "s3 (trim_right): " << s3 << ".end" << endl;
    return 0;
}
