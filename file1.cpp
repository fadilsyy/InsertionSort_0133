#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
while (true)
{
cout << "Masukkan Jumlah Data pada Array : "; // membuat inputan jumlah element array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{ // membuat kondisi n tidal lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // menampilkan pesan jika data lebih dari 20
}
}
cout << endl; // membuat jarak per baris program
cout << "======================" << endl; // membuat tampilan susunan data element array
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array
{
cout << "Data ke-" << (i + 1) << ": "; // memasukkan atau menginputkan nilai data n
cin >> arr[i]; // menyimpan nilai data n ke dalam array arr
}
}

void insertionSort()
{ // procedure insertionsort

int temp;
int j, i;

for (i = 1; i <= n - 1; i++)
{

temp = arr[i]; 

j = i - 1;

while (j >= 0 && arr[j] > temp)
{
arr[j + 1] = arr[j];
j--;
}

arr[j + 1] = temp;
}
}

void display()
{
cout << endl;
cout << "=================================" << endl;
cout << "Total Passs = " << n - 1 << endl;
cout << "=================================" << endl;
cout << "Element Array yang telah tersusun" << endl;
cout << "=================================" << endl;

for (int j = 0; j < n; j++)
{
cout << arr[j] << endl;
}
cout << endl;
}

int main()
{
input();
insertionSort();
display();
system("Pause");
return 0;
}