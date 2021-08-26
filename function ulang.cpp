int ulang(){
    char ulangi;
    cout << "\nulangi program?(y/n)" << endl;
    cin >> ulangi;
    if (ulangi == 'y' || ulangi == 'Y'){
        system("clear");
        main();
    } else if (ulangi == 'n' || ulangi == 'N'){
    return 0;
} else {
        system("clear");
        cout << "\nchar yang anda masukan invalid" << endl;
        ulang();
    }
}
