## Inheritance

Inheritance (warisan) adalah salah satu konsep paling penting dalam pemrograman berorientasi objek. Konsep ini memungkinkan sebuah class (kelas) untuk mewarisi properti dan metode dari class lain. Class yang mewarisi disebut subclass atau derived class, sedangkan class yang memberi warisan disebut superclass atau base class.

## Tujuan
- Code reusability. \
Contoh: kelompok hewan sebagai kelas yang terpisah - `Harimau`, `Singa`, dan `Macan Kumbang`. Untuk kelas-kelas ini, dapat membuat fungsi anggota seperti `predator()` karena mereka semua adalah pemangsa, `taring()` karena mereka semua memiliki gigi taring untuk berburu, dan `cakar()` karena ketiga hewan tersebut memiliki cakar yang besar dan tajam.  Sekarang, karena ketiga fungsi tersebut sama untuk kelas-kelas ini, membuat fungsi terpisah untuk semuanya akan menyebabkan redundansi data dan dapat meningkatkan kemungkinan kesalahan.
- Sifat transitif\
Contoh: Ada kelas turunan `mamalia` yang mewarisi sifat-sifatnya dari kelas dasar `hewan`. Sekarang, karena sifat pewarisan yang transitif, semua kelas turunan dari `mamalia` akan mewarisi sifat-sifat dari kelas `hewan` juga

## Syntax
```c++
class ParentClass {
    // properties and methods
};

class ChildClass : access_modifier Superclass {
    // additional properties and methods
};
```

## Program
```c++
#include <iostream>
#include <string>
using namespace std;

// Kelas dasar Karyawan
class Karyawan {
public:
    string nama = "Ariela";
    void bekerja() {
        cout << "Sedang bekerja \n";
    }
};

// Kelas turunan Programmer yang mewarisi dari Karyawan
class Programmer : public Karyawan {
public:
    string bahasaPemrograman = "C++";
};

int main() {
    Programmer programmer;
    programmer.bekerja();
    cout << programmer.nama << " menggunakan bahasa pemrograman " << programmer.bahasaPemrograman << endl;
    return 0;
}

```

## Protection Level
**Protected**: Anggota kelas yang dideklarasikan sebagai protected hanya dapat diakses oleh kelas itu sendiri dan kelas-kelas turunannya (derived classes).
```c++
#include <iostream>
#include <string>
using namespace std;

// Kelas dasar Karyawan
class Karyawan {
protected:
    string nama = "Yusuf";

public:
    void bekerja() {
        cout << "Sedang bekerja \n";
    }

    string getNama() {
        return nama;
    }
};

// Kelas turunan Programmer yang mewarisi dari Karyawan
class Programmer : public Karyawan {
public:
    string bahasaPemrograman = "C++";

    void tampilkanInfo() {
        cout << getNama() << " menggunakan bahasa pemrograman " << bahasaPemrograman << endl;
    }
};

int main() {
    Programmer programmer;
    Karyawan karyawan;
    cout<< "Nama diambil melalui obj karyawan "<< karyawan.getNama()<< endl;
    cout<< "Nama diambil melalui obj programmer "<< programmer.getNama()<< endl;
    programmer.tampilkanInfo();
    
    return 0;
}


```
