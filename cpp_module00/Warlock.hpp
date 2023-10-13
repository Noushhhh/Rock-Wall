#include <iostream>

class Warlock {
    private: 
        Warlock();
        Warlock(Warlock const &src);
        Warlock & operator=(Warlock const &src);
        std::string _name;
        std::string _title;

    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock ();
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &title);
        void setName(std::string const &name);
        void introduce () const;

};