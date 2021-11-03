#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class tipuri_de_exercitii_pentru{
    friend ostream& operator<<(ostream& os , const tipuri_de_exercitii_pentru& ex);
private:
    vector<string> arr;
public:
    explicit tipuri_de_exercitii_pentru(const vector<string>& vec) : arr(vec){}
    tipuri_de_exercitii_pentru &operator=(const tipuri_de_exercitii_pentru& a) {
        arr = a.arr;
        return *this;
    }
    vector<string> genereaza_exercitii(int nr_ex)
    {
        vector<string> exercitii_returnate;
        if (nr_ex > arr.size())
        {
            return exercitii_returnate;
        }
        random_shuffle(arr.begin(), arr.end());
        exercitii_returnate.insert(exercitii_returnate.end(), arr.begin(), arr.begin()+nr_ex);
        return exercitii_returnate;
    }
};

class zi_de{
    friend ostream& operator<<(ostream& os , const zi_de& ex);
private:
    vector<tipuri_de_exercitii_pentru> arr;
public:
    explicit zi_de(const vector<tipuri_de_exercitii_pentru>& vec) : arr(vec){}
    zi_de &operator=(const zi_de& a) {
        arr = a.arr;
        return *this;
    }
};

class mancare{
    friend ostream& operator<<(ostream& os , const mancare& ex);
private:
    string tip_mancare;
    float nr_cal;
public:
    explicit mancare(const string& tip_mancare1 , float& nr_cal1) : tip_mancare(tip_mancare1), nr_cal(nr_cal1){}
    mancare &operator=(const mancare& a){
        tip_mancare = a.tip_mancare;
        nr_cal = a.nr_cal;
        return *this;
    }
    float get_nr_cal()
    {
        return nr_cal;
    }
};

class dieta {
    friend ostream &operator<<(ostream &os, const dieta &ex);

private:
    vector<mancare> arr;
public:
    explicit dieta(const vector<mancare> &vec) : arr(vec) {}

    dieta &operator=(const dieta &a) {
        arr = a.arr;
        return *this;

    }
    float nr_total_de_cal()
    {
        float suma = 0;
        for(auto & m : arr) {
              suma += m.get_nr_cal();
        }
        return suma;
    }
};
ostream& operator<<(ostream& os , const tipuri_de_exercitii_pentru& ex) {
    for(auto & e : ex.arr) {
        os << e << ", ";
    }
    return os;
}
ostream& operator<<(ostream& os , const zi_de& ex ) {
    for(auto & e : ex.arr) {
        os << e << "\n";
    }
    return os;
}

ostream& operator<<(ostream& os , const dieta& ex ) {
    for(auto & e : ex.arr) {
        os << e << "\n";
    }
    return os;
}

ostream& operator<<(ostream& os , const mancare& ex ) {
    os << ex.tip_mancare << " " << ex.nr_cal;
    return os;
}

int main() {
    vector<string> nume = {"Impins la piept cu bara" , "Impins la piept cu gantere" , "Fluturari la cabluri"};
    vector<string> mancarea = {"Oua" , "Pui" , "Orez" , "Paste" , "Ulei"};
    vector<float> cal = {100 , 200 , 250 , 150 , 90};
    vector<mancare> vec_mancare;
    for(int i = 0 ; i < mancarea.size() ; i++)
    {
        vec_mancare.emplace_back(mancarea[i], cal[i]);
    }
    dieta dieta1(vec_mancare);
    cout << dieta1.nr_total_de_cal();
    tipuri_de_exercitii_pentru piept(nume);
    cout << "\n";
    cout << piept;
}
