#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Masukkan angka untuk ditemukan tabel perkaliannya :";
    cin >> num;

    for (int i = 1; i <= 1000000; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}
