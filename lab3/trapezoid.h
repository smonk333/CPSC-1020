class trapezoid {
    private:
        double base1;
        double base2;
        double height;

    public:
        bool setBase1(double base1);
        bool setBase2(double base2);
        bool setHeight(double height);
        double getBase1();
        double getBase2();
        double getHeight();
        double calcArea();

};
