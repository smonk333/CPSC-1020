class rectangle{
    private:
        double length;
        double width;

    public:
        bool setLength(double l);
        bool setWidth(double w);
        double getLength();
        double getWidth();
        double calcArea();
};