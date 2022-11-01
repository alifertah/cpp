#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    private:
        int idx;
        std::string fullname;
        std::string phone;

    public:
        int     getIdx();
        void    setIdx(int i);

        std::string    getFullname();
        void           setFullname(std::string name);

        std::string    getPhone();
        void            setPhone(std::string phone);
};

#endif