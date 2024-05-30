#include "mesin.h" // Sertakan definisi kelas Mesin
#include "mobil.h" // Sertakan definisi kelas Mobil

int main() {
    Mesin mesinMobil;
    Mobil mobil;

    mobil.pasangMesin(mesinMobil); // Pasang mesin pada mobil

    mobil.percepat(50); // Percepat mobil
    mobil.info(); // Tampilkan informasi tentang mobil

    return 0;
}
