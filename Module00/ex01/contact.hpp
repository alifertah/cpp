#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    private:
        int idx;
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        int     getIdx();
        void    setIdx(int i);

        std::string    getFirstName();
        void           setFirstName(std::string first);

        std::string    getLastName();
        void           setLastName(std::string last);

        std::string    getNickName();
        void           setNickName(std::string nick);

        std::string    getPhoneNumber();
        void           setPhoneNumber(std::string phone);

        std::string    getDarkestSecret();
        void           setDarkestSecret(std::string secret);
};

#endif