## Structure

Structure dalam bahasa pemrograman C++ adalah cara untuk mengelompokkan beberapa variabel yang berbeda, tetapi terkait menjadi satu unit. Ini memungkinkan Anda untuk membuat tipe data yang terdiri dari beberapa anggota dengan tipe data yang berbeda.

## Keuntungan Penggunaan Struktur

- Organisasi Data: Struktur memungkinkan Anda untuk mengelompokkan data yang terkait bersama.
- Keterbacaan: Penggunaan struktur dapat membuat kode lebih mudah dibaca karena menggambarkan hubungan antara data.
- Kemudahan Penggunaan: Struktur memungkinkan Anda untuk membuat tipe data yang sesuai dengan kebutuhan aplikasi Anda.

### Mendefinisikan Struktur

Anda dapat mendefinisikan sebuah struktur dengan menggunakan kata kunci struct diikuti dengan nama struktur dan di dalamnya mendefinisikan anggota-anggota struktur tersebut.

```C++
// Definisi Struktur
struct Mahasiswa {
    int nomorInduk;
    char nama[50];
    int umur;
    float IPK;
};
```

### Mengakses Anggota Struktur
Setelah mendefinisikan struktur, kita dapat membuat variabel dari tipe struktur tersebut dan mengakses anggota-anggotanya menggunakan operator titik (.).

```C++
Mahasiswa mhs1; // Mendeklarasikan variabel mhs1 bertipe Mahasiswa

// Mengakses dan menginisialisasi anggota-anggota struktur
mhs1.nomorInduk = 12345;
strcpy(mhs1.nama, "Sevi Nurafni");
mhs1.umur = 20;
mhs1.IPK = 3.75;
```

### Menampilkan Informasi Anggota Structure
```C++
// Menampilkan informasi mahasiswa
    cout << "Nomor Induk: " << mhs1.nomorInduk << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << endl;
    cout << "IPK: " << mhs1.IPK << endl;
```
output:
```yml
Nomor Induk: 12345
Nama: Sevi Nurafni
Umur: 20
IPK: 3.75
```

## Tugas
Manajemen Perpustakaan

Anda diminta untuk membuat sebuah program manajemen perpustakaan sederhana menggunakan struktur dalam bahasa C++. Program ini harus dapat melakukan fungsi-fungsi berikut:

- Menambahkan buku baru ke dalam perpustakaan.
- Menampilkan daftar semua buku yang tersedia di perpustakaan.
- Mencari buku berdasarkan judul.
- Menghapus buku dari perpustakaan.

Contoh output program:
```markdown

Selamat Datang di Manajemen Perpustakaan!

Menu:
1. Tambah Buku Baru
2. Tampilkan Daftar Buku
3. Cari Buku
4. Hapus Buku
5. Keluar

Pilih operasi yang ingin dilakukan: 1

Masukkan informasi buku baru:
Judul: Harry Potter and the Philosopher's Stone
Pengarang: J.K. Rowling
Tahun Terbit: 1997
Nomor ISBN: 978-0747532743

Buku berhasil ditambahkan ke dalam perpustakaan.

Menu:
1. Tambah Buku Baru
2. Tampilkan Daftar Buku
3. Cari Buku
4. Hapus Buku
5. Keluar

Pilih operasi yang ingin dilakukan: 2

Daftar Buku dalam Perpustakaan:
1. Judul: Harry Potter and the Philosopher's Stone
   Pengarang: J.K. Rowling
   Tahun Terbit: 1997
   Nomor ISBN: 978-0747532743

Menu:
1. Tambah Buku Baru
2. Tampilkan Daftar Buku
3. Cari Buku
4. Hapus Buku
5. Keluar

Pilih operasi yang ingin dilakukan: 3

Masukkan judul buku yang ingin dicari: The Great Gatsby

Buku tidak ditemukan dalam perpustakaan.

Menu:
1. Tambah Buku Baru
2. Tampilkan Daftar Buku
3. Cari Buku
4. Hapus Buku
5. Keluar

Pilih operasi yang ingin dilakukan: 4

Masukkan judul buku yang ingin dihapus: Harry Potter and the Philosopher's Stone

Buku berhasil dihapus dari perpustakaan.

Menu:
1. Tambah Buku Baru
2. Tampilkan Daftar Buku
3. Cari Buku
4. Hapus Buku
5. Keluar

Pilih operasi yang ingin dilakukan: 5

Terima kasih telah menggunakan program Manajemen Perpustakaan.
```