#include "Lib.h"
#include "tryCatch.h"

class Studentas {
private:
    std::string Vard, Pav;
    std::vector<int> paz = { };
    int egz;
    float galut = 0;
    float median = 0;

public:
    
        //Getters
    
    string getVard() { return Vard; }
    string getPav() { return Pav; }
    int getEgz() { return egz; }
    float getMedian() { return median; }
    float getGalut() { return galut; }
    //Setters

    void setVard(string s) {
        Vard = s;
    }
    void setPav(string s) {
        Pav = s;
    }
    void setEgz(int i) {
        egz = i;
    }
    void setPaz(int i) {
        paz.push_back(i);
    }

    void vid_median()
    {

        int paz_sk = paz.size();
        //suskaiciuoja studento galutini bala:

        galut = accumulate(paz.begin(), paz.end(), decltype(paz)::value_type(0)) / float(paz_sk);
        galut = round((galut * 0.4 + 0.6 * egz) * 100) / 100;


        //surusiuoja studento namu darbu pazymius ir randa mediana

        sort(paz.begin(), paz.end(), [](int& a, int& b) { return a > b; });
        if (paz_sk % 2 == 0)
        {
            median = float((paz.at((paz_sk / 2) - 1) + paz.at((paz_sk / 2))) / 2.0);
        }
        else
        {
            median = float(paz.at(paz_sk / 2));
        }

    }

    void vardas(int i)
    {
        do
        {
            cout << "Iveskite studento nr. " << i + 1 << " varda:\n";
            cin >> Vard;
            cout << endl;
        } while (Vard.length() < 0 || Vard.length() > 25 || tryCatch(Vard) != true);
        do
        {
            cout << "Iveskite studento nr. " << i + 1 << " pavarde:\n";
            cin >> Pav;
            cout << endl;
        } while (Pav.length() < 0 && Pav.length() > 25 || tryCatch(Pav) != true);

    }

};

bool comparePagalPav(Studentas& x, Studentas& y);

bool vargsiuku_paz(Studentas& x);
