#include <iostream>
#include "Vector2.h"


int main (){

    Vector2 a(-5.3, 11.8);
    std::cout << "vector a: " << std::endl;
    std::cout << "x = " << a.getX() << ' ' << "y = " << a.getY() << std::endl;
    std::cout << "len = " << a.getLen() << ' ' << "phi = " << a.getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    Vector2 b(2.5, 4.1);
    std::cout << "vector b: " << std::endl;
    std::cout << "x = " << b.getX() << ' ' << "y = " << b.getY() << std::endl;
    std::cout << "len = " << b.getLen() << ' ' << "phi = " << b.getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;


    std::cout << " 'a + b' : " << std::endl;
    std::cout << "x = " << (a+b).getX() << ' ' << "y = " << (a+b).getY() << std::endl;
    std::cout << "len = " << (a+b).getLen() << ' ' << "phi = " << (a+b).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout <<  "'a * b' = " << a*b << std::endl;
    std::cout<<"-----------" << std::endl;


    std::cout << "vector a_in_psk: " << std::endl;
    std::cout << "r = " << a.to_psk().first << ' ' << "phi = " << a.to_psk().second << std::endl;
    std::cout<<"-----------" << std::endl;


    std::cout << " 'a * 8' = " << std::endl;
    std::cout << "x = " << (a*8).x << ' ' << "y = " << (a*8).y << std::endl;
    std::cout << "len = " << (a*8).getLen() << ' ' << "phi = " << (a*8).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;


    std::cout << " 'a / 2'  : " << std::endl;
    std::cout << "x = " << (a/2).getX() << ' ' << "y = " << (a/2).getY() << std::endl;
    std::cout << "len = " << (a/2).getLen() << ' ' << "phi = " << (a/2).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "kosoe_scal a * b = " << a.kos_scal_proizv(b) << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "ed. vector a : " << "x " << a.Norm().x << ' ' << "y "<< a.Norm().y << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "a eq b ? - " << (a==b) << std::endl;
    std::cout << "a not eq b ? - " << (a!=b) << std::endl;
    std::cout << "a eq a ? - " << (a==a) << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "cosine_distance  = " << a.cosine_distance(b) << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "'change len a to 6' = " << std::endl;
    std::cout << "x = " << (a.change_len(6)).x << ' ' << "y = " << (a.change_len(6)).y << std::endl;
    std::cout << "len = " << (a.change_len(6)).getLen() << ' ' << "phi = " << (a.change_len(6)).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << " 'change phi a to 45' = " << std::endl;
    std::cout << "x = " << (a.change_phi(45)).x << ' ' << "y = " << (a.change_phi(45)).y << std::endl;
    std::cout << "len = " << (a.change_phi(45)).getLen() << ' ' << "phi = " << (a.change_phi(45)).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    return 0;
}
