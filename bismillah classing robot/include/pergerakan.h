#ifndef PERGERAKAN_H
#define PERGERAKAN_H


class pergerakan
{
    public:
        pergerakan();
        virtual ~pergerakan();
        int vmaju, x, y, s, p ,g;
        void maju ( int vmaju, int vs, int sudut );

        void perubahansudut ( int vs, int sudut );

        void mundur( int vmundur, int vs, int sudut );

        void kanan( int vkanan, int vs, int sudut );

        void kiri( int vkiri, int vs, int sudut );


    protected:

    private:
};

#endif // PERGERAKAN_H
