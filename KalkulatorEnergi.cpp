// Library = tools buat eksekusi code dibawah
#include <iostream> // Menyediakan standar input dan output stream
#include <cmath>   // Library untuk perpangkatan dengan pow() 
#include <iomanip> // Library untuk pembulattan dengan fixed setprecision()

// Deklarasi = menamai dan memberi value tipe data dan variabel 

using namespace std; // Untuk tidak menulis std:: di setiap code

const double g = 9.8; // Percepatan gravitasi (m/s^2) , const karena nilai gravitasinya tidak akan berubah

// Saya deklerasikan double sesuai tipe Energi dalam kurung memanggil satuan yang diperlukan dan return untuk 
// memunculkan hasil perhitungan rumus

// Fungsi untuk menghitung energi potensial
double hitungEnergiPotensial(double massa, double tinggi) {
    return massa * g * tinggi;
}

// Fungsi untuk menghitung energi kinetik
double hitungEnergiKinetik(double massa, double kecepatan) {
    return 0.5 * massa * pow(kecepatan, 2);
}

// Fungsi untuk menghitung energi mekanik
double hitungEnergiMekanik(double energiPotensial, double energiKinetik) {
    return energiPotensial + energiKinetik;
}

// class = eksekusi program 

int main() {
    int pilihan; // Integer buat memilih case mana yang akan dieksekusi dalam switch
    double massa, tinggi, kecepatan; // Deklerasi double value satuan yang akan dimasukkan lewat cin
    
    // Tampilkan menu
    cout << "Pilih jenis energi yang ingin dihitung:" << endl; 
    cout << "1. Energi Potensial" << endl;
    cout << "2. Energi Kinetik" << endl;
    cout << "3. Energi Mekanik" << endl;
    cout << "Pilih Menu Untuk Menghitung Energi: ";
    cin >> pilihan; // Masukkan angka 1-3 untuk memilih tipe energi yang ingin dihitung


// Conditional statement yang digunakan = switch
    switch (pilihan) {
        case 1: // Energi Potensial
            cout << "Masukkan massa benda (kg): ";
            cin >> massa;
            cout << "Masukkan tinggi benda dari permukaan tanah (m): ";
            cin >> tinggi;
                    
            // Hitung dan tampilkan energi potensial
            cout << "Energi Potensial sebelum dibulatkan " << endl;
            cout << "Energi Potensial: " << hitungEnergiPotensial(massa, tinggi) << " Joule" << endl;
            cout << "Energi Potensial sesudah dibulatkan" << endl;
            cout << "Energi Potensial: " << fixed << setprecision(2) << hitungEnergiPotensial(massa, tinggi) << " Joule" << endl;
            break;

        case 2: // Energi Kinetik
            cout << "Masukkan massa benda (kg): ";
            cin >> massa;
            cout << "Masukkan kecepatan benda (m/s): ";
            cin >> kecepatan;

            // Hitung dan tampilkan energi kinetik
            cout << "Energi Kinetik sebelum dibulatkan " << endl;
            cout << "Energi Kinetik: " << hitungEnergiKinetik(massa, kecepatan) << " Joule" << endl;
            cout << "Energi Kinetik sesudah dibulatkan" << endl;
            cout << "Energi Kinetik: " << fixed << setprecision(2) << hitungEnergiKinetik(massa, kecepatan) << " Joule" << endl;
            break;

        case 3: // Energi Mekanik
            cout << "Masukkan massa benda (kg): ";
            cin >> massa;
            cout << "Masukkan tinggi benda dari permukaan tanah (m): ";
            cin >> tinggi;
            cout << "Masukkan kecepatan benda (m/s): ";
            cin >> kecepatan;

            // Hitung energi potensial dan energi kinetik
            double energiPotensial, energiKinetik; // Deklerasi double value Ep dan Ek
            energiPotensial = hitungEnergiPotensial(massa, tinggi);
            energiKinetik = hitungEnergiKinetik(massa, kecepatan);

            // Hitung dan tampilkan energi mekanik
            cout << "Energi Mekanik sebelum dibulatkan " << endl;
            cout << "Energi Mekanik: " << hitungEnergiMekanik(energiPotensial, energiKinetik) << " Joule" << endl;
            cout << "Energi Mekanik sesudah dibulatkan " << endl;
            cout << "Energi Mekanik: " << fixed << setprecision(2) << hitungEnergiMekanik(energiPotensial, energiKinetik) << " Joule" << endl;
            break;

        // Output error jika tidak memilih angka 1-3 , contohnya 4
        default:
            cout << "Pilihan tidak valid. Silakan pilih 1, 2, atau 3." << endl;
            break;
    }

    return 0;
}
