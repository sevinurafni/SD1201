1. Buatlah program untuk menghitung jumlah dari dua buah pecahan\
Spesifikasi program: \
– Program menerima masukan pecahan pertama berupa
pembilang dan penyebut \
– Kemudian program menerima pecahan kedua \
– Lalu program akan melakukan penjumlahan \
– Kemudian menampilkan hasilnya berupa pembilang dan penyebut hasil penjumlahan

2. Buatlah sebuah program yang menerima suhu air (dalam derajat celcius) dan menuliskan wujud air ke layar sebagai berikut:
- Jika suhu air <= 0 derajat, maka tuliskan “beku”
- Jika suhu air > 0 dan kurang dari 100 derajat, maka tuliskan “cair”
- Jika suhu air >= 100, maka tuliskan “uap”

3. Tuliskan keluaran program berikut ini:
```
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

```
#include <iostream>
using namespace std;
int main() {
int j, k;
for (j = 5; j >= 1; j--) {
       for (k = 1; k <= j; k++) {
             cout << k * j << ' ';
       }
       cout << endl;
	}
	for (j = 1; j <= 5; j++) {
	for (k = 1; k <= j; k++){ cout << k * j << ' ';
	       }
	       cout << endl;
	}
	return 0;
}
```

```
#include <iostream>
using namespace std;
int main () {
	int A;
	for (A=0; A<9; A++)
	  if (A % 3 == 0)
	       cout << 'A';
	  else
	       cout << 'B';
	return 0;
}
```

4. Tuliskan keluaran (apa yang tercetak di layar) dari program di bawah ini jika N = 8. Program sudah dipastikan lolos kompilasi.
```
#include <iostream>
using namespace std;
int main () {
    int j, N, R;
    cin >> N;
    j = 1;
    R = 1;
    while (j <= N) {
        R = R * j;
        j = j + 2;
    }
    cout << R;
    return 0;
}
```

5. Buatlah program C++ untuk menghitung konversi N buah suhu dari Celcius ke Fahrenheit. Nilai N dan suhu dimasukkan oleh user. \
	Contoh: N = 5 \
		         Input suhu dalam C: 30, 67, 120, 88, 15

6. Buatlah fungsi IsVokal yang
- mempunyai parameter input sebuah character huruf
kecil ‘a’ s.d. ‘z’
- menghasilkan true jika character tersebut adalah vokal (‘a’, ‘i’, ‘u’, ‘e’, ‘o’)
