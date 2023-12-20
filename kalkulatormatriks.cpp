#include <iostream>
#include <cmath>

using namespace std;

// Fungsi untuk memasukkan matriks 2x2
void inputMatriks(float matriks[2][2], const char* order) {
    cout << "Masukkan nilai matriks " << order << ":" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Masukkan nilai a" << i + 1 << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    }
}

// Fungsi untuk menampilkan matriks 2x2
void printMatriks(float matriks[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}
// Fungsi untuk memasukkan matriks 3x3
void inputMatriks(float matriks[4][4], const char* order) {
    cout << "Masukkan nilai matriks " << order << ":" << endl;
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            cout << "Masukkan nilai a" << i << j << ": ";
            cin >> matriks[i][j];
        }
    }
}

// Fungsi untuk menampilkan matriks 3x3
void printMatriks(float matriks[4][4]) {
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}
// Fungsi untuk penjumlahan matriks
void penjumlahanMatriks() {
    cout << "Penjumlahan Matriks:" << endl;
    float matriksA[2][2], matriksB[2][2], hasil[2][2];
    inputMatriks(matriksA, "A");
    inputMatriks(matriksB, "B");

    // Proses penjumlahan
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }

    cout << "Hasil penjumlahan matriks A + B:" << endl;
    printMatriks(hasil);
}
    // pengurangan matriks
void penguranganMatriks() {
    cout << "Pengurangan Matriks:" << endl;
    float matriksx[2][2], matriksz[2][2], hasil[2][2];
    inputMatriks(matriksx, "x");
    inputMatriks(matriksz, "z");

    // Proses penguranagn
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksx[i][j] - matriksz[i][j];
        }
    }

    cout << "Hasil penjumlahan matriks x - z:" << endl;
    printMatriks(hasil);
}
// Fungsi untuk transpose matriks 2x2
void transposeMatriks2x2() {
    cout << "Transpose Matriks:" << endl;
    float matriksA[2][2], hasil[2][2];
    inputMatriks(matriksA, "A");

    // Proses transpose 2x2
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[j][i] = matriksA[i][j];
        }
    }

    cout << "Hasil transpose matriks A:" << endl;
    printMatriks(hasil);
}
// Fungsi untuk transpose matriks 3x3
void transposeMatriks3x3() {
    cout << "Transpose Matriks:" << endl;
    float matriksA[4][4], hasil[4][4];
    inputMatriks(matriksA, "A");

    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            hasil[j][i] = matriksA[i][j];
        }
    }

    cout << "Hasil transpose matriks A:" << endl;
    printMatriks(hasil);
}
// Fungsi untuk invers matriks
void inversMatriks() {
    cout << "Matriks Invers:" << endl;
    float matriksA[2][2], det, invers[2][2];
    inputMatriks(matriksA, "A");

    // Menghitung determinan
    det = matriksA[0][0] * matriksA[1][1] - matriksA[0][1] * matriksA[1][0];

    if (det == 0) {
        cout << "Matriks tidak memiliki invers karena determinan nol." << endl;
    } else {
        // Menghitung invers
        invers[0][0] = matriksA[1][1] / det;
        invers[0][1] = -matriksA[0][1] / det;
        invers[1][0] = -matriksA[1][0] / det;
        invers[1][1] = matriksA[0][0] / det;

        cout << "Hasil matriks invers A:" << endl;
        printMatriks(invers);
    }
}

// Fungsi untuk determinan matriks
void determinanMatriks2x2() {
    cout << "Determinan Matriks:" << endl;
    float matriksA[2][2], det;
    inputMatriks(matriksA, "A");

    // Menghitung determinan
    det = matriksA[0][0] * matriksA[1][1] - matriksA[0][1] * matriksA[1][0];

    cout << "Hasil determinan matriks A: " << det << endl;
}
// Fungsi untuk determinan matriks 3x3
void determinanMatriks3x3() {
    cout << "Determinan Matriks:" << endl;
    float matriksA[4][4], det;
    inputMatriks(matriksA, "A");

    // Menghitung determinan 3x3
    det = matriksA[1][1] * (matriksA[2][2] * matriksA[3][3] - matriksA[2][3] * matriksA[3][2]) -
          matriksA[1][2] * (matriksA[2][1] * matriksA[3][3] - matriksA[2][3] * matriksA[3][1]) +
          matriksA[1][3] * (matriksA[2][1] * matriksA[3][2] - matriksA[2][2] * matriksA[3][1]);

    cout << "Hasil determinan matriks A: " << det << endl;
}
// Fungsi untuk SPL
void spl() {
    cout << "Sistem Persamaan Linier (SPL):" << endl;
    float matriksA[2][2], x1, x2, b1, b2;

    inputMatriks(matriksA, "A");

    cout << "Masukkan nilai x1: ";
    cin >> x1;
    cout << "Masukkan nilai x2: ";
    cin >> x2;

    cout << "Masukkan nilai b1: ";
    cin >> b1;
    cout << "Masukkan nilai b2: ";
    cin >> b2;

    // Menghitung solusi SPL
    float det = matriksA[0][0] * matriksA[1][1] - matriksA[0][1] * matriksA[1][0];

    if (det == 0) {
        cout << "Sistem tidak memiliki solusi unik." << endl;
    } else {
        float detX1 = b1 * matriksA[1][1] - b2 * matriksA[0][1];
        float detX2 = matriksA[0][0] * b2 - matriksA[1][0] * b1;

        x1 = detX1 / det;
        x2 = detX2 / det;

        cout << "Hasil solusi SPL (x1, x2):" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}

int main() {
    // Menu Utama
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Penjumlahan Matriks" << endl;
        cout << "2. Penguranagn Matriks" << endl;
        cout << "3. Transpose Matriks 2x2" << endl;
        cout << "4. Transpose Matriks 3x3" << endl;
        cout << "5. Matriks Invers" << endl;
        cout << "6. Determinan Matriks 2x2" << endl;
        cout << "7. Determinan Matriks 3x3" << endl;
        cout << "8. Sistem Persamaan Linier (SPL)" << endl;
        cout << "0. Keluar" << endl;

        int pilihan;
        cout << "Masukkan pilihan (0-8): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                penjumlahanMatriks();
                break;
            case 2:
                penguranganMatriks();
                break;
            case 3:
                transposeMatriks2x2();
                break;
            case 4:
                transposeMatriks3x3();
                break;
            case 5:
                inversMatriks();
                break;
            case 6:
                determinanMatriks2x2();
                break;
            case 7:
                determinanMatriks3x3();
                break;
            case 8:
                spl();
                break;
                case 0:
                cout << "Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    }

    return 0;
}