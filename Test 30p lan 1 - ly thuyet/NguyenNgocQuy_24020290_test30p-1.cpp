#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {


    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    int maNhanVien[n];
    string hoVaTen[n];
    int namBatDau[n];
    string chucVu[n];
    double heSoLuong[n];

    
    
    for (int i = 0; i < n; i++) {
        
        int ma, nam;
        string ten, cv;
        double hsl;
        cout << "Nhap thong tin nhan vien thu " << i + 1 << ":" << endl;
        cout << "Ma nhan vien: ";
        cin >> ma;
        cin.ignore();
        cout << "Ho va ten: ";
        getline(cin, ten);
        cout << "Nam bat dau: ";
        cin >> nam;
        cin.ignore();
        cout << "Chuc vu (nhan vien/to truong/pho giam doc/giam doc): ";
        getline(cin, cv);
        
        if (cv == "nhan vien") hsl = 1.0;
        else if (cv == "to truong") hsl = 1.3;
        else if (cv == "pho giam doc") hsl = 1.5;
        else if (cv == "giam doc") hsl = 2.0;
        else {
            cout << "Chuc vu khong hop le. Dat mac dinh la nhan vien." << endl;
            hsl = 1.0;
            cv = "nhan vien";
        }
        
        maNhanVien[i] = ma;
        hoVaTen[i] = ten;
        namBatDau[i] = nam;
        chucVu[i] = cv;
        heSoLuong[i] = hsl;
    }
    
    double luong[n];
    for (int i = 0; i < n; i++) {
        int soLanTangLuong = (2024 - namBatDau[i]) / 3;
        double heSoLuongNamKinhNghiem = 2.7 + soLanTangLuong * 0.3;
        luong[i] = 5000000 * heSoLuong[i] * heSoLuongNamKinhNghiem ;
    }
    
    int index[n];
    for (int i = 0; i < n; i++) {
        index[i] = i;
    }
    
    sort(luong, luong + n);
    cout << endl << "Danh sach nhan vien theo luong (tang dan):" << endl;
    cout << "Ma NV - Ho va ten - Nam bat dau - Chuc vu - Luong" << endl;
    for (int i = 0; i < n; i++) {
        int j = index[i];
        cout << maNhanVien[j] << " - " << hoVaTen[j] << " - " << namBatDau[j] << " - "
             << chucVu[j] << " - " << fixed << setprecision(0) << luong[i] << endl;
    }


    return 0;
}
