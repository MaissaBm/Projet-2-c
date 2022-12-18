#include <iostream>
#include<string>
using namespace std;

//creation des classe
class Facteur{
    private:
        string name;
        string id_facteur;
        string geographiczone;

    public:
    Facteur(string name, string id_facteur, string geographiczone){
        this->name = name;
        this->id_facteur = id_facteur;
        this->geographiczone = geographiczone;
    }
    
    string getInformation(string name,string id_facteur,string geographiczone){
      return name +""+ id_facteur +""+ geographiczone;
    }  
};

class Habitants{
    private:
    string geographiczone;
    string name;
    int id_habitants;

    public:
    Habitants(string geographiczone, string name, int id_habitants){
        this->geographiczone = geographiczone;
        this->name = name;
        this->id_habitants = id_habitants;
    }
    string getInformation(string name,int id_habitants,string geographiczone){
      return  name +""+ id_habitants +""+ geographiczone;;
    } 
};


class Recommandes{
    
    private:
    string id;
    string id_facteur;
    string id_destinataire;

    public:
    Recommandes(string id , string id_facteur, string id_destinataire){
        this->id = id;
        this->id_facteur = id_facteur;
        this->id_destinataire = id_destinataire;
    }
    string getInformation(string id , string id_facteur, string id_destinataire){
      return id +""+ id_facteur +""+ id_destinataire;
    } 
};

//Heritage
class Letters:public Recommandes{
    public:
    Letters(string id , string id_facteur, string id_destinataire):Recommandes(string id , string id_facteur, string id_destinataire){
        
    }

};

class Colis:public Recommandes{
    public:
    Colis(string id , string id_facteur, string id_destinataire):Recommandes(string id , string id_facteur, string id_destinataire){
       
    }

};