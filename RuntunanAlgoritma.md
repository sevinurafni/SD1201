## Konstruksi Dasar
Sebuah algoritma dapat dibangun dari tiga buah konstruksi atau stuktur dasar, yaitu runtunan (sequence), pemilihan (selection), dan pengulangan (repetition). 

## Runtunan Algoritma
Runtunan algoritma merupakan langkah-langkah terurut dan terinci yang dilakukan untuk menyelesaikan suatu masalah. Algoritma adalah urutan instruksi atau langkah-langkah yang diperlukan untuk menyelesaikan suatu tugas atau masalah tertentu.

Perhatikan runtunan empat buah pernyataan yang dilambangkan dengan $S1$, $S2$, $S3$, dan $S4$ berikut: <br>
$S1$ <br>
$S2$ <br>
$S3$ <br>
$S4$ <br>

Mula-mula pemroses melaksanakan pernyataan $S1$. Pernyataan $S2$ dilaksanakan setelah pernyataan $S1$ selesai. selanjutnya, pernyataan $S3$ dilaksanakan setelah $S2$ selesai. Demikian pula pernyataan terakhir $S4$ dilaksanakan setelah $S3$ selesai. Setelah pernyataan $S4$ selesai dilaksanakan, algoritma berhenti.

## Contoh
Tinjau algoritma mempertukarkan isi dua buah ember A dan B:

```
ALGORITMA mempertukarkan isi dua buah ember A, dan B:
1. Tuangkan air dari ember A ke dalam ember C.
2. Tuangkan air dari ember B ke dalam ember A.
Tuangkan air dari ember C ke dalam ember B.
```

Algoritma di atas adalah sebuah runtunan yang terdiri atas tiga buah pernyataan. Tiap pernyataan dieksekusi dalam urutan yang sama sebagaimana tertulis dalam teks algoritma tersebut. Hasil akhir algoritma ini adalah: ember A berisi air dari ember B, dan ember B berisi air dari ember A.

Tuliskan algoritma yang membaca dua buah nilai untuk peubah A dan B, lalu mempertukarkan nilai kedua peubah tersebut. Misalnya, sebelum pertukaran nilai $A = 8$ dan $B = 5$, maka setelah pertukaran, nilai $A = 5$ dan nilai $B = 8$.

```
PROGRAM Pertukaran
 //Mempertukarkan nilai A dan B. Nilai A dan B dibaca terlebih dahulu


 DEKLARASI
    A, B, C: Integer

ALGORITMA:
    ( asumsikan A dan B sudah terdefinisi dengan nilai, misalnya melalui pengisian langsung
    atau dibaca nilainya dari papan ketik )

    (pertukaran nilai A dan B)
    C = A (simpan nilai A di tempat penampungan sementara, C)
    A = B (sekarang A dapat diisi dengan nilai B)
    B = C (isi B dengan nilai A semula yang tadi disimpan di C)

    (Tulis nilai A dan B setelah pertukaran)

```


## Masalah
1. Buatlah algoritma yang membaca nilai uang (rupiah) dalam kelipatan 25, lalu menentukan berapa nilai tukaran pecahan. Pecahan yang tersedia adalah Rp1000, Rp500, Rp100, Rp50, dan Rp25. Sebagai contoh, uang senilai Rp2775 setara dengan 2 buah pecahan Rp1000 ditambah 7 buah pecahan Rp100 ditambah 1 buah pecahan Rp50 ditambah 1 buah pecahan Rp25. (Case = 13475)

2. Algoritma di bawah ini membagi sekantung permen secara adil kepada 3 orang anak dengan cara memberikan satu permen kepada tiap anak secara berulang-ulang:

```
repeat
    berikan satu permen kepada anak pertama
    berikan satu permen kepada anak keduan
    berikan satu permen kepada anak ketiga
untul kantung permen kosong
```

Pada keadaan bagaimana algoritma tersebut gagal?
