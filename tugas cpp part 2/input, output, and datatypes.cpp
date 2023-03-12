#include <iostream>

using namespace std;

int main(){
    string fullname;
    string nickname;
    int age;
    float gpa;

    cout << "masukkan nama lengkap: ";
    getline(cin,fullname);
    cout << "masukkan nama panggilan: ";
    cin >> nickname;
    cout << "masukkan umur: ";
    cin >> age;
    cout << "masukkan IPK: ";
    cin >> gpa;
    system("cls");
    cout << "nama lengkap: " << fullname << endl << "nama panggilan: " << nickname << endl << "umur: " << age << endl << "IPK: " << gpa << endl;
    return 0;
}

//yuhuuu
