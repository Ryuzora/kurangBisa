#include <iostream>

using namespace std;

#include <stdlib.h>

#include <string>



int woke();



int main() {
//NI PASS LWN USERNAME NYA
    string username = "sayaNgantuk";

    string password = "kudaLumping1";




    string inputUser;

    string inputPass;

    

    cout << "masukan username : " << endl;

    cin >> inputUser;

    cout << "masukan password : " << endl;

    cin >> inputPass;

    

    if (inputUser == username && inputPass == password){

        system("clear");

        cout << "berhasil masuk >///<\n" << endl;

        cout << "goal : duit 300" << endl;

        cout << "ketik help/h untuk bantuan" << endl;

        woke();

    } else {

        cout << "username atau password tidak valid\n\n" << endl;

        return main();

    }

}

int duit = 20;

int kesehatan = 85;

int stamina = 100;

int langkah = 0;

int woke(){

    string mauApa;

    if (duit > 299)
{

    cout << "\ntamat!" << "\nlangkah yang ditempuh : " << langkah << endl;

        return 0;

    } else if (kesehatan < 60) {

    cout << "kamu sakit lalu tiba-tiba meninggal" << endl;

        return 0;

} else {

        cout << "\nduit : " << duit << "\nkesehatan : " << kesehatan << "\nstamina : " << stamina << "\n" << endl;

        

        cout << "sekarang kamu mau ngapain" << endl;

        cin >> mauApa;

        

    if (mauApa == "help" || mauApa == "h") {

            system("clear");

        cout << "\n\nketik\nk untuk kerja\nt untuk tidur\nm untuk makan\n\n" << "kamu akan menang jika duit telah mencapai 300\ningat! jangan biarkan kesehatan kurang dari 60!\n" << endl;

        woke();

    } else if (mauApa == "k") {

    system("clear");

    if (stamina > 20){

        langkah++;

        duit += 10;

        stamina -= 15;

        kesehatan -= 5;

        cout << "\nduit +10\nstamina -15\n" << endl;

    woke(); 

    } else  {

            cout << "\nkamu kecapean\n" << endl;

            woke();

        }

        

    } else if (mauApa == "t") {

        system("clear");

        stamina = 100;

        langkah++;

        cout << "\nstamina penuh\n" << endl;

    woke();

    } else if (mauApa == "m") {

            system("clear");

        if (duit > 4) {

        langkah++;

        cout << "\nkesehatan + 15\n duit -5\n" << endl;

        duit -= 5;

        kesehatan += 15;

    woke();} else {

            cout << "gacukup duit" << endl;

            woke();

        }

    } else {

            system("clear");

        cout << "\nketik help jika bingung mau ngapain" << endl;

        woke();

    }

    }

}



