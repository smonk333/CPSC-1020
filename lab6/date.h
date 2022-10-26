//
// Created by gboling on 10/17/22.
//

#ifndef CPSC_1020_DATE_H
#define CPSC_1020_DATE_H


class Date {
    private:
        int month;
        int day;
        int year;
    public:
        string static const MONTHS[12];
        int const getMonth();
        void setMonth(int m);
        int const getDay();
        void setDay(int d);
        int const getYear();
        void setYear(int y);
        string print();
        bool static compare(Date const d1, Date const d2);
};


#endif //CPSC_1020_DATE_H
