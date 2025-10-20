class Wektor2D
{
public:
    double x;
    double y;
    // Konstruktor domy lny
    Wektor2D() : x(0.0), y(0.0) {}

    // Konstruktor dwuargumentowy
    Wektor2D(double wx, double wy)
    {
        x = wx;
        y = wy;
    }

    // settery
    double setX(double wx)
    {
        x = wx;
        return x;
    }

    double setY(double wy)
    {
        y = wy;
        return y;
    }

    // gettery
    double getX() { return x; }

    double getY() { return y; }

    // Przeciazenie operatora +
    Wektor2D operator+(Wektor2D& other) { return Wektor2D(x + other.x, y + other.y); }

    // Przeciazenie operatora *
    double operator*(Wektor2D& other) { return x * other.x + y * other.y; }
};
