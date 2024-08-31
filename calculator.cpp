/*
Simple Calculator
*/

#include <iostream>
#include <string>
using namespace std;

float nilai1, nilai2, hasil;
string operasi;

void tampilkanMenu()
{
    cout << "=============================\n";
    cout << "      KALKULATOR SEDERHANA\n";
    cout << "=============================\n";
    cout << "Pilih operasi:\n";
    cout << "1. Penjumlahan (+)\n";
    cout << "2. Pengurangan (-)\n";
    cout << "3. Perkalian (*)\n";
    cout << "4. Pembagian (/)\n";
    cout << "5. Keluar\n";
    cout << "=============================\n";
}

int main()
{
    int pilihan;
    while (true)
    {
        tampilkanMenu();
        
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihan;

        if (pilihan == 5)
        {
            cout << "Terima kasih telah menggunakan kalkulator ini. Sampai jumpa!\n";
            break;
        }

        cout << "Masukkan nilai 1: ";
        cin >> nilai1;

        cout << "Masukkan nilai 2: ";
        cin >> nilai2;

        switch (pilihan)
        {
            case 1:
                hasil = nilai1 + nilai2;
                operasi = "+";
                break;
            case 2:
                hasil = nilai1 - nilai2;
                operasi = "-";
                break;
            case 3:
                hasil = nilai1 * nilai2;
                operasi = "*";
                break;
            case 4:
                if (nilai2 != 0)
                {
                    hasil = nilai1 / nilai2;
                    operasi = "/";
                }
                else
                {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
                    continue;
                }
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                continue;
        }

        cout << "HASIL: " << nilai1 << " " << operasi << " " << nilai2 << " = " << hasil << "\n\n";
    }
    return 0;
}