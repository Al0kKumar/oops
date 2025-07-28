#include<iostream>
using  namespace std;

class Human{

    public:
    int height;
    int age;
    int weight;
    
    public:
    int getAge(){
        return this->age;
    }

    int getWeight() {
      return this->weight;
    }


    void setweight(int w ){
        this->weight= w;
    }
};

class Male: public Human{

    public:
    string color;

    void sleep(){
        cout<< "Male sleeing" << endl;
    }
};

int main (){
    
    Male m1;
    m1.setweight(40);
    cout << "weight is " << m1.weight << endl;    

    return 0;
}