#include <iostream>
using namespace std;

class Hero{
    
    // properties
    string name;
    char level;
    
    private:
    int health;

    public:
    int gethealth(){
        return health;
    }

    void sethealth(int val){
        health = val;
    }
};


int main() {
     
    // created an object
    Hero h1;
    int take;
    cout << "health is " << h1.gethealth() << endl;
    cout << "set health :" << endl;
    cin >> take;
    h1.sethealth(take);
    cout << "health is " << h1.gethealth() << endl;
    
    // cout << "health is " << h1.health << endl;
    //cout << "size of " << sizeof(h1) << endl;

    return  0;
}