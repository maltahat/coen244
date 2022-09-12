#pragma once

class OR2In
{
    private:
        bool In1, In2;
        bool out;

    public:
    OR2In()
    {
        In1 = 0;
        In2 = 0;
    }

    OR2In(bool in1, bool in2)
    {
        In1 = in1;
        In2 = in2;
    }

    void SetIn1(bool in)
    {
        In1 = in;
    }

    void SetIn2(bool in)
    {
        In2 = in;
    }

    bool GetIn1()
    {
        return In1;
    }

    bool GetIn2()
    {
        return In2;
    }

    bool GetOut()
    {
        //out = Evaulte();
        return out;
    }

    bool Evaulte()
    {
        //out = In1 | In2;

        if (In1 == false && In2 == false)
            out = false;
        else
            out = true;
        
        return out;
    }

};

class OR4In
{
    private:
        bool In1, In2, In3, In4;
        bool out;

        OR2In or1, or2, or3;

    public:
    OR4In()
    {
        In1 = 0;
        In2 = 0;
        In3 = 0;
        In4 = 0;
    }

    OR4In(bool in1, bool in2, bool in3, bool in4)
    {
        In1 = in1;
        In2 = in2;
        In3 = in3;
        In4 = in4;

        or1.SetIn1(In1);
        or1.SetIn2(In2);

        or2.SetIn1(In3);
        or2.SetIn2(In4);
    }

    void SetIn1(bool in)
    {
        In1 = in;
        or1.SetIn1(In1);
    }

    void SetIn2(bool in)
    {
        In2 = in;
        or1.SetIn2(In2);
    }

    void SetIn3(bool in)
    {
        In3 = in;
        or2.SetIn1(In3);
    }

    void SetIn4(bool in)
    {
        In4 = in;
        or2.SetIn2(In4);
    }

    bool GetOut()
    {
        //out = Evaulte();
        return out;
    }

    bool Evaulte()
    {
        bool f1 = or1.Evaulte();
        bool f2 = or2.Evaulte();

        or3.SetIn1(f1);
        or3.SetIn2(f2);

        out = or3.Evaulte();

        return out;
    }
};