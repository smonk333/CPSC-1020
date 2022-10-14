//a header file to define all of the "people" classes for lab5
//Garrett Boling


class Commuter{
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string distance;
        string phone;

    public:
        Commuter();
        Commuter(string fn, string ln, string a, string e, string d, string p);
        void setFirst(string fn);
        void setLast(string ln);
        void setAddress(string a);
        void setEmail(string e);
        bool setDistance(string d);
        bool setPhone(string p);
        string getFirst();
        string getLast();
        string getAddress();
        string getEmail();
        int getDistance();
        int getPhone();
};

class Employee{
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string college;
        string administration;

    public:
        Employee();
        Employee(string fn, string ln, string a, string e, string c, string ad);
        void setFirst(string fn);
        void setLast(string ln);
        void setAddress(string a);
        void setEmail(string e);
        void setCollege(string c);
        void setAdmin(string ad);
        string getFirst();
        string getLast();
        string getAddress();
        string getEmail();
        string getCollege();
        string getAdmin();
};

class Student{
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string graduationDate;
        bool enrollmentStatus;

    public:
        Student();
        Student(string fn, string ln, string a, string e, string gd, bool es);
        void setFirst(string fn);
        void setLast(string ln);
        void setAddress(string a);
        void setEmail(string e);
        void setGraduate(string d);
        void setEnrollStat(bool stat);
        string getFirst();
        string getLast();
        string getAddress();
        string getEmail();
        string getGraduate();
        bool getEnrollStat();
};

class Vendor{
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string storeName;
        int yearsEmployed;

    public:
        Vendor();
        Vendor(string fn, string ln, string a, string e, string sn, int ye);
        void setFirst(string fn);
        void setLast(string ln);
        void setAddress(string a);
        void setEmail(string e);
        void setStoreName(string sn);
        bool setYearsEmployed(string ye);
        string getFirst();
        string getLast();
        string getAddress();
        string getEmail();
        string getStoreName();
        int getYearsEmployed();
};
