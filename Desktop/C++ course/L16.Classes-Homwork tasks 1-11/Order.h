#ifndef ORDER_H
#define ORDER_H

class Order
{
private:
    int Order_ID;
    string Customer_name;
    Product product;
    vector<Product> Ordered_products;

public:
    Order(int Order_IDP, string Customer_nameP);

    void DisplayorderDetails() const
    {
        cout << "Order_ID: " << Order_ID << endl;
        cout << "Product_Name: " << this->product.get_Product_name() << endl;
    }

    int get_Order_ID() const;
    string get_Customer_name() const;
    void addProduct(const Product& product);
    double calculateOrderTotal()const;
    vector<Product>get_Ordered_products()const;
};

Order::Order(int Order_IDP,string Customer_nameP)
{
    Order_ID = Order_IDP;
    Customer_name=Customer_nameP;
}

int  Order::get_Order_ID() const{
    return Order_ID;
}

string Order::get_Customer_name() const{
    return Customer_name;
}

vector<Product> Order::get_Ordered_products() const{
       return Ordered_products;
}

void Order::addProduct(const Product& product){
    Ordered_products.push_back(product);
}

double Order::calculateOrderTotal()const{
    double total=0.0;

    for(const Product& product : Ordered_products){
        total+=product.get_Product_price();
    }
    return total;
}
    

#endif
