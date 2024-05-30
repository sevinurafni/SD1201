## Inheritance

Inheritance (warisan) adalah salah satu konsep paling penting dalam pemrograman berorientasi objek. Konsep ini memungkinkan sebuah class (kelas) untuk mewarisi properti dan metode dari class lain. Class yang mewarisi disebut subclass atau derived class, sedangkan class yang memberi warisan disebut superclass atau base class.

## Tujuan
- Mengurangi duplikasi kode.
- Membuat hierarki kelas yang terorganisir.
- Mendorong penggunaan konsep polimorfisme.

## Syntax
```c++
class Parentclass {
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
    string nama = "John";
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