//
// Created by HarryPotter on 12.12.2022.
//

#ifndef VECTOR2_H
#define VECTOR2_H



class Vector2 {
public:
    double x, y;

    Vector2();
    Vector2(double _x, double _y);

    double getLen();

    void setX(double _x);
    double getX();
    void setY(double _y);
    double getY();

    double getPhi();
    double kos_scal_proizv( Vector2& vector) const;
    std::pair<double, double> to_psk();

    Vector2 Norm() const;
    Vector2 change_len(const double& a) const;
    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator+=(const Vector2& vector) const;
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator-=(const Vector2& vector) const;
    Vector2 operator*(const double & a) const;
    double operator*(const Vector2& vector) const;
    Vector2 operator*=(const double & a) const;
    Vector2 operator/(const double & a) const;
    Vector2 operator/=(const double & a) const;
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;
    Vector2 change_phi(const double& phi) const;
    double cosine_distance(const Vector2& vector) const;
};



#endif //VECTOR2_H
