#include <iostream>

class Koordinate {
private:
    int x = 0;
    int y = 0;
public:

    Koordinate(int x, int y) : x(x), y(y) {}
    Koordinate() {}

    void set_x(int neu){ x = neu;}
    void set_y(int neu){ y = neu;}
    int get_x()const{return x;}
    int get_y()const{return y;}
    void info()const{std::cout << "x: " << x << " y: " << y << std::endl;}
};

int main() {
    const Koordinate nullpunkt(0,1);
    nullpunkt.info();
    return 0;
}