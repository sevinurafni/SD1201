1. Tuliskan sebuah program yang mengeluarkan "Hello, World!" sebanyak n kali (di mana n adalah sebuah bilangan bulat non-negatif yang akan dimasukkan oleh pengguna) dengan: \
a. Foor loop \
b. While loop \
c. Do while loop 

2. Tuliskan keluaran (apa yang tercetak di layar) dari program-program di bawah ini pada kotak kosong di samping kanan program. Jika tidak ada keluaran, tuliskan: Tidak ada keluaran. Program-program di bawah ini sudah dipastikan lolos kompilasi.
```c++
#include <iostream>
using namespace std;
int main () {
int X;
X = 100;
if (X % 10 == 0) {
       cout << "XXX" << endl;
       if (X / 5 == 0) {
        cout << "aaa" << endl;
       }
       if (X % 11 == 1) {
             cout << "bbb" << endl;
        } 
} else {
	   cout << "YYY" << endl;
       if (X / 2 == 0) {
             cout << "ccc" << endl;
       }
       if (X % 3 == 1) {
       		 cout << "ddd" << endl;
        } 
}
	 return 0;   
}
```
```c++
#include <iostream>
using namespace std;
int main() {
    const int genap = 2;
    int i;
    int found;
    int TabInt[10];
    for(i = 0; i < 10; i++)
    {
       TabInt[i] = i * genap;
    }
i = 10; found = 0;
while ((i > 0) && (!(found))) {
       if (TabInt[i] % 6 == 0)
           found = 1;
else
i = i - 1;
}
if (found)
       cout << i << endl;
    else
cout << "Tidak ditemukan" << endl;
return 0; }
```

```c++
#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][2];
  return 0;
}


```
3. Buatlah fungsi IsVokal yang
- mempunyai parameter input sebuah character huruf
kecil ‘a’ s.d. ‘z’
- menghasilkan true jika character tersebut adalah vokal (‘a’, ‘i’, ‘u’, ‘e’, ‘o’)

4. Lengkapi bagian dari program berikut: \
a. Membuat larik tipe `string` bernama `cars`\
\
`...``...` [4] = {"Volvo", "BMW", "Ford", "Mazda"};\
\
b. Buat variabel *pointer* dengan nama `ptr`, yang harus menunjuk ke variabel `string` bernama `food`: 
```c++
string food = "Pizza";\
`...` `...` = &`...`;

```