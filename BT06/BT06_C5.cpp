#include <iostream>
#include <vector>

using namespace std;

int n, sum = 0;
vector<int> a;

void print()
{
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;
}

void Partition(int x)
{
    for(int k = x; k >= 1; k--){
        sum += k;
        a.push_back(k);
        if(sum == n) print();
        else if(sum < n) Partition(k);

        sum -= k;
        a.pop_back();
    }
}

int main()
{
    cin >> n;
    Partition(n);
    return 0;
}

