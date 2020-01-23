#ifndef PERGERAKAN_H
#define PERGERAKAN_H


class pergerakan
{
    public:
        int vmaju, x, y, s;
        void maju ( int vmaju, int vs, int sudut );
        pergerakan();
        void berputar ( int vs, int sudut );


    protected:

    private:
};

#endif // PERGERAKAN_H
