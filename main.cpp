#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int>tab={4,2,3,1};

void test_tab(){
    for (int i(0) ; i < tab.size() ; i++){
        cout << tab[i] << " " ;
    }
    cout << endl;
}

class Fils
{
    public:
        void fils(int num){
            cout << num << endl;
        }
};

class Connecteur: public Fils
{
    public :
        void connecteur(int position_debut, int position_fin, int num){
            if (tab[position_debut] > tab[position_fin]){
                swap( tab[position_debut] , tab[position_fin] );
            }
            for (int i(0) ; i < tab.size() ; i++){
                cout << tab[i] << " " ;
            }
            cout << endl;
            cout << "Numero Fils: " << num << endl;
        }
};

int main(int argc, char *argv[])
{
    cout<<"--- Projet Reseau de Tri ---"<<endl;
    cout << endl;

    Fils f;
    f.fils(4);

    cout << "Initialisation du tableau" << endl;
    test_tab();
    cout << endl;

    Connecteur conn;

    cout << "Position 0 : croisement des fils 0 et 2" << endl;
    conn.connecteur(0,2,0);
    cout << "Position 1 : croisement des fils 1 et 3" << endl;
    conn.connecteur(1,3,1);
    cout << "Position 2 : croisement des fils 0 et 1" << endl;
    conn.connecteur(0,1,2);
    cout << "Position 2 : croisement des fils 2 et 3" << endl;
    conn.connecteur(2,3,2);
    cout << "Position 3 : croisement des fils 1 et 2" << endl;
    conn.connecteur(1,2,3);

    cout << endl;

    cout << "Voici le nouveau tableau apres realisation du tri: " << endl;
    cout << "1 2 3 4" << endl;
    return 0;
    QCoreApplication a(argc, argv);

    return a.exec();
}
