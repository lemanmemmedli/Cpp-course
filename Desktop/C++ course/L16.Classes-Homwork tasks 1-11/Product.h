#ifndef PRODUCT_H
#define PRODUCT_H

class Product
{
    private:
    int Product_ID;
    string Product_name;
    float Product_price;

    public:

    Product (){
        Product_ID=0;
        Product_name="empty";
        Product_price=0;

    };

    Product (int Product_IDP,string Product_nameP,float Product_priceP);

    Product *setName(string Product_name){
        this->Product_name=Product_name;
        return this;
    }
    Product *setId(int Product_ID){
        this->Product_ID=Product_ID;
        return this;
    }
    Product *setprice(float Product_price){
        this->Product_price=Product_price;
        return this;
    }
    string get_Product_name() const;

    int get_Product_ID() const;

    float get_Product_price() const;



};

Product::Product(int Product_IDP,string Product_nameP,float Product_priceP){
        Product_ID=Product_IDP;
        Product_name=Product_nameP;
        Product_price=Product_priceP;

}

string Product::get_Product_name()const{
    return Product_name;
}
int Product::get_Product_ID() const{
        return Product_ID;
}
float Product::get_Product_price() const{
        return Product_price;
}


#endif