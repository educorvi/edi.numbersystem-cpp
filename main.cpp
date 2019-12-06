//
//  main.cpp
//  converter
//  Versin 1.0
//
//  Created by Pascal Paul on 04.12.19.
//  Copyright © 2019 Pascal Paul. All rights reserved.
//

#include <iostream>
#include <vector>


using namespace std;

int main()
{
    // Here I create all variables
    
    int iAuswhal = 0;
    int iZahl = 0;
    int iZahl_Kopie = iZahl;
    int iBasis = 0;
    int iErgebnis = 0;
    
    // Here I create a vector.
    vector<int> vRest;
    
    // Here the users have the option of options in which different invoices are executed.
    cout << "Bitte geben Sie einer der folgenden otionen an\n";
    cout << "1 Umrechene von Dez in Dual\n";
    //cout << "2 Umrechnen von Dez in Hexa\n";
    //cout << "3 Umrechnen von Hexa in Dual\n";
    //cout << "4 Umrechnen von Hexa in Dez\n";
    //cout << "5 Umrechnen von Dual in Hexa\n";
    //cout << "6 Umrechnen von Dual in Dez\n";
    cout << "Ihre Auswahl: ";
    cin >> iAuswhal;

    // Here you are asked which option was actually selected.
    if(iAuswhal == 1)
    {
        
        cout << "Zahl: ";
        cin >> iZahl;
        
        cout << "Basis: ";
        cin >> iBasis;
        
        while(iZahl > 0) // calculation path
        {
            vRest.push_back ( iZahl % 2 ); // Investigation of the rest.
            iZahl /= 2;
        }
        
        // The result is displayed here.
        cout << "\nZahl:\t\t" <<iZahl_Kopie << "\nBasis:\t\t" << iBasis << "\nErgebnsis:  ";
        
        // Here the rest is put into the vector and output.
        for(int i = vRest.size()-1; i>=0; i--)
            cout << vRest[i];
        
        cout << "\n" << endl;
        
    }
    
    // in concept !!!!
    if(iAuswhal == 2)
    {
        cout << "Zahl: ";
        cin >> iZahl;
        
        cout << "Basis: ";
        cin >> iBasis;
        
        while(iZahl >= 0)
        {
            iErgebnis = iZahl / iBasis;
            iErgebnis = iZahl % 16;
            cout << "Das Ergebnis ist: " << iErgebnis << endl;
        }
        
    }
    
    return 0;
}
