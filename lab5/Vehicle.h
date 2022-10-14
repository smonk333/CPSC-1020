class Motorcycle {
    private:
        string make;
        string model;
        string year;
        string cylinder;
        string color;

    public:
        Motorcycle();
        Motorcycle(string mk, string md, string y, string cy, string cr);
        void setMake(string mk);
        void setModel(string md);
        void setYear(string y);
        void setCylinder(string cy);
        void setColor(string cr);
        string getMake();
        string getModel();
        string getYear();
        string getEngine();
        string getColor();
        string getCylinder();
        void printInfo();
};

class Truck {
    private:
        string make;
        string model;
        string year;
        double mpg;
        string transmission;

    public:
        Truck();
        Truck(string mk, string md, string y, double mg, string tn);
        void setMake(string mk);
        void setModel(string md);
        void setYear(string y);
        bool setMPG(double mg);
        void setTransmission(string tn);
        string getMake();
        string getModel();
        string getYear();
        double getMPG();
        string getTransmission();
        void printInfo();
};

class Sportscar {
    private:
        string make;
        string model;
        string year;
        int numDoors;
        int numHorsePower;

    public:
        Sportscar();
        Sportscar(string mk, string md, string y, int nd, int nhp);
        void setMake(string mk);
        void setModel(string md);
        void setYear(string y);
        bool setNumDoors(int nd);
        bool setNumHorsePower(int nhp);
        string getMake();
        string getModel();
        string getYear();
        int getNumDoors();
        int getNumHorsePower();
        void printInfo();
};

class Sedan {
    private:
        string make;
        string model;
        string year;
        int weight;
        bool isElectric;

    public:
        Sedan();
        Sedan(string mk, string md, string y, int wt, bool ie);
        void setMake(string mk);
        void setModel(string md);
        void setYear(string y);
        bool setWeight(int wt);
        bool setIsElectric(bool ie);
        string getMake();
        string getModel();
        string getYear();
        int getWeight();
        bool getIsElectric();
        void printInfo();
};