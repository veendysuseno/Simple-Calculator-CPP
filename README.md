# Simple Calculator

This C++ program is a simple console-based calculator that performs basic arithmetic operations. Users can choose from addition, subtraction, multiplication, and division, and the calculator handles invalid inputs and division by zero.

## Features

- **Arithmetic Operations**: Supports addition, subtraction, multiplication, and division.
- **Menu Interface**: Interactive menu to select operations.
- **Error Handling**: Handles division by zero and invalid menu choices.

## Components

- **Language**: C++
- **Libraries**: Standard C++ libraries (iostream, string)

## How It Works

1. **Menu Display**: Users are presented with a menu to choose an arithmetic operation or to exit the program.
2. **Input Values**: Users input two numerical values.
3. **Operation Execution**: Based on the selected operation, the program computes the result.
4. **Result Display**: The result is displayed in a formatted output.
5. **Error Handling**: The program checks for division by zero and invalid input choices.

## Code

```cpp
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

```

<hr/>

## Instructions

1. **Compile the Code:** Use a C++ compiler to compile the program.
2. **Run the Program:** Execute the compiled program in a terminal or command prompt.
3. **Follow the Menu:** Use the menu to select the desired arithmetic operation and input the values.
4. **View Results:** The result will be displayed in the terminal.

<hr/>
"# Simple-Calculator-CPP" 
