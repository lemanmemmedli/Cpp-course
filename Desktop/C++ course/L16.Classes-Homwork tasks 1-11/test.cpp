#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 5-ci homework
class Product{
    private:
    string name;
    int id;

    public:
    Product(){
        name="empty";
        id=0;
    }

    Product(string nameP,int idP){
        name=nameP;
        id=idP;
    }

    Product *setname(string name){
        this->name=name;
        return this;
    }

    Product *setid(int id){
        this->id=id;
        return this;
    }

    string getName() const{
        return this->name;
    }
};

class Order {
    private:
    int OrderId;
    Product Product;

    public:
    Order(int OrderIdP,string name,int id){
        OrderId=OrderIdP;
        Product.setname(name)->setid(id);
        
    }

    void displayorders() const{
        cout<<"order: "<<OrderId<<endl;
        cout<<"name: "<<Product.getName()<<endl;

    }


};

int main(){

    Order order1(1,"Gift",15);
    Order order2(2,"Giftes",25);
    Order order3(3,"Giftesss",35);
    

    Order array[3]={order1,order2,order3};

    for(int i=0;i<3;++i){
        array[i].displayorders();
        cout<<sizeof(array[i])<<endl;   
    };

    cout<<"----------------------"<<endl;

    vector <Order> orders;

    orders.push_back(order1);
    orders.push_back(order2);
    orders.push_back(order3);

    orders.pop_back();
    orders.pop_back();

    for(int i=0;i<orders.size();++i){
        orders[i].displayorders();
    }





}