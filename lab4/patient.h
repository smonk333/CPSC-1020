class Patient{
    private:
        //variable declarations
        int days;
        double rate;
        double services;
        double medicine;
        char patientType;

        //function declarations
        bool validateInput(double in);
        bool validateInput(int in);
        bool validateInput(char t);

    public:
        //public member function declarations
        Patient();
        Patient(int d, double r, double s, double m, char t);
        bool setDays(int d);
        bool setRate(double r);
        bool setServices(double s);
        bool setMedication(double m);
        bool setPatientType(char t);
        int getDays();
        double getRate();
        double getServices();
        double getMedication();
        char getPatientType();
        double calcTotalCharges();
};