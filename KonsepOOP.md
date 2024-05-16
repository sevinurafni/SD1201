## Pengantar Pemrograman Berorientasi Objek (OOP)

Pemrograman Berorientasi Objek (OOP) adalah paradigma pemrograman yang menggunakan "objek" untuk memodelkan data dan perilaku yang terkait bersama. Dalam OOP, objek adalah representasi konkret dari suatu konsep di dunia nyata atau sistem yang sedang dibangun.

### Komponen-komponen Utama OOP:
1. Kelas (Class): Kelas adalah blueprint untuk objek. Ini mendefinisikan atribut dan metode yang akan dimiliki oleh objek. Objek dibuat dari kelas, dan setiap objek merupakan contoh (instance) dari kelas tersebut.
```c++
#include <iostream>
using namespace std;

// Deklarasi kelas
class Manusia {
public:
    string nama;
    int umur;
};
```

2. Objek (Object): Enkapsulasi data dan fungsi yang bekerja pada data tersebut. Sebuah objek terdiri dari:
- Nama (nama variabel),
- Atribut (data anggota) yang mendeskripsikan apa objek tersebut
- Perilaku (fungsi anggota) yang mendeskripsikan apa yang dilakukan oleh objek tersebut
```c++
#include <iostream>
using namespace std;

// Deklarasi kelas
class Manusia {
public:
    string nama; 
    int umur;
};

int main() {
    // Membuat objek dari kelas Manusia
    Manusia orang;

    // Mengakses atribut objek dan memberi nilainya
    orang.nama = "John";
    orang.umur = 30;

    // Menampilkan informasi objek
    cout << "Nama: " << orang.nama << endl;
    cout << "Umur: " << orang.umur << endl;

    return 0;
}
```

3. Atribut (Attribute): Atribut adalah data yang terkait dengan sebuah kelas atau objek. Misalnya, sebuah objek "Mobil" bisa memiliki atribut seperti "warna", "kecepatan", dan "bahan bakar".
```c++
#include <iostream>
using namespace std;

// Deklarasi kelas
class Manusia {
public:
    string nama; // Attribute 1
    int umur;    // Attribute 2
};

int main() {
    // Membuat objek dari kelas Manusia
    Manusia orang;

    // Mengakses atribut objek dan memberi nilainya
    orang.nama = "John";
    orang.umur = 30;

    // Menampilkan informasi objek
    cout << "Nama: " << orang.nama << endl;
    cout << "Umur: " << orang.umur << endl;

    return 0;
}
```

4. Metode (Method): Metode adalah fungsi atau perilaku yang terkait dengan sebuah kelas. Mereka digunakan untuk melakukan tindakan tertentu pada objek.
```c++
#include <iostream>
using namespace std;

// Deklarasi kelas
class Manusia {
public:
    string nama;
    int umur;

    // Metode untuk menampilkan informasi
    void tampilkan_info() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
    }
};

int main() {
    // Membuat objek dari kelas Manusia
    Manusia orang;

    // Memberi nilai atribut objek
    orang.nama = "John";
    orang.umur = 30;

    // Memanggil metode untuk menampilkan informasi
    orang.tampilkan_info();

    return 0;
}
```

### Protection Levels in a Class
1. `Public` \
Dapat diakses dari dalam atau luar objek, \
Pada dasarnya adalah antarmuka dari objek (harus sederhana)
Pengguna adalah bagian lain dari kode (kelas lain, fungsi, program utama), \
Ingin menyediakan fungsi yang menangani semua tindakan yang diperlukan pada objek 
2. `Private` \
Hanya dapat digunakan oleh objek itu sendiri, \
Praktik standar untuk melindungi data anggota kelas, \
Sama untuk fungsi-fungsi pembantu yang tidak perlu menjadi bagian dari antarmuka
```c++
#include <iostream>
#include <string>

class Mahasiswa {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Mahasiswa(std::string n, int u) {
        nama = n;
        umur = u;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    // Metode untuk menampilkan informasi Mahasiswa
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << std::endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mhs("Budi", 20);

    // Menggunakan metode public untuk mengakses data private
    std::cout << "Informasi awal Mahasiswa:" << std::endl;
    mhs.tampilkanInfo();

    // Mengubah nama dan umur menggunakan setter
    mhs.setNama("Siti");
    mhs.setUmur(21);

    // Menampilkan informasi yang sudah diubah
    std::cout << "Informasi setelah diubah:" << std::endl;
    mhs.tampilkanInfo();

    return 0;
}

```

### Prinsip-prinsip Utama OOP:
1. Enkapsulasi: Ini adalah konsep membatasi akses langsung ke beberapa komponen dalam objek dan menyembunyikan detail implementasi. Dengan enkapsulasi, objek hanya berkomunikasi melalui antarmuka yang didefinisikan dengan jelas.

2. Pewarisan (Inheritance): Pewarisan memungkinkan kelas baru untuk mewarisi perilaku (metode) dan karakteristik (atribut) dari kelas yang sudah ada. Hal ini memungkinkan penggunaan kembali kode dan pembuatan hierarki kelas.

3. Polimorfisme: Polimorfisme memungkinkan objek dari kelas yang berbeda untuk merespons dengan cara yang berbeda terhadap pemanggilan metode yang sama. Ada polimorfisme statis dan dinamis.

4. Abstraksi: Abstraksi adalah konsep memfokuskan pada fitur yang penting sambil menyembunyikan detail yang tidak penting. Ini membantu dalam menyederhanakan kompleksitas sistem.