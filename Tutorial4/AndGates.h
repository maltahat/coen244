#pragma once

class AND2In
{
    private:
        bool In1, In2;
        bool out;

    public:
    AND2In()
    {
        In1 = 0;
        In2 = 0;
    }

    AND2In(bool in1, bool in2)
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
        out = In1 & In2;
        return out;
    }

};


class AND4In
{
    private:
        bool In1, In2, In3, In4;
        bool out;

        AND2In and1, and2, and3;

    public:
    AND4In()
    {
        In1 = 0;
        In2 = 0;
        In3 = 0;
        In4 = 0;
    }

    AND4In(bool in1, bool in2, bool in3, bool in4)
    {
        In1 = in1;
        In2 = in2;
        In3 = in3;
        In4 = in4;

        and1.SetIn1(In1);
        and1.SetIn2(In2);

        and2.SetIn1(In3);
        and2.SetIn2(In4);
    }

    void SetIn1(bool in)
    {
        In1 = in;
        and1.SetIn1(In1);
    }

    void SetIn2(bool in)
    {
        In2 = in;
        and1.SetIn2(In2);
    }

    void SetIn3(bool in)
    {
        In3 = in;
        and2.SetIn1(In3);
    }

    void SetIn4(bool in)
    {
        In4 = in;
        and2.SetIn2(In4);
    }

    bool GetOut()
    {
        //out = Evaulte();
        return out;
    }

    bool Evaulte()
    {
        bool f1 = and1.Evaulte();
        bool f2 = and2.Evaulte();

        and3.SetIn1(f1);
        and3.SetIn2(f2);

        out = and3.Evaulte();

        return out;
    }
};