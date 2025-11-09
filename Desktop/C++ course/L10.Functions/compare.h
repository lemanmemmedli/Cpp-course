int MAX(int a, int b);   // declaration
int MIN(int, int);       // declaration

const double PI=3.14172;


int MAX(int a, int b) {
    if (a > b) 
        return a;
    else 
        return b;
}

int MIN(int a, int b) {
    return (a < b) ? a : b;
}
