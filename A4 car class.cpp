#include <iostream>
using namespace std;
class CarClass
{
    private:
    int yearModel;
    string make;
    int speed;
    public:
    CarClass(int yearModel,string make){
        this->yearModel = yearModel;
        this->make = make;
        this->speed = 0;
    }
    int getYear(){
        return yearModel;
    }
    string getMake(){
        return make;
    }
    int getSpeed(){
        return speed;
    }
    int accelerate(){
        return speed +=5;
    }
    int brake(){
        return speed -=5;
    }
};
int main(){
    int year;
    string make;
    cout << "Nhap year: " << endl;
    cin >> year;
    cout << "Nhap make: " << endl;
    cin >> make;
    CarClass sudan(year, make);
    cout << "Thong tin Sedan: " << endl;
    for(int i = 1 ; i <= 5 ; i++){
        cout << sudan.accelerate() <<endl;
    }
    cout << "Toc do la : " << sudan.getSpeed() << " Kieu xe : " << sudan.getMake() << endl;
     for(int i = 1 ; i <= 5 ; i++){
        cout << sudan.brake() <<endl;
    }
    cout << "xe dung voi toc do: " << sudan.getSpeed() << endl;
    return 0;
}
