class Trapezoid {
    private:
        double base1;
        double base2;
        double height;

    public:
        bool setBase1(double b1);
        bool setBase2(double b2);
        bool setHeight(double h);
        double getBase1();
        double getBase2();
        double getHeight();
        double calcArea();
};
