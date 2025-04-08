#ifndef NEWTON_CLASS_H
#define NEWTON_CLASS_H

class Newton_class
{
private:
   bool a;
   bool b;
   bool eps;
public:
    Newton_class(void);
    ~Newton_class();

    void setVolumes(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    double solve();
};



#endif // NEWTON_CLASS_H