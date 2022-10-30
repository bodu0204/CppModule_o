#include "Bureaucrat.hpp"

//using namespace std;
int main() {
    while (1)
    {
        std::string s;
        unsigned n;
        int i;

        std::cin>>s>>n>>i;
        if (std::cin.eof())
            break;
        try
        {
            Bureaucrat b(s, n);
            if (i < 0)
            {
                for (size_t j = 0; j < (size_t)-i; j++)
                {
                    std::cout<<b.getName()<<":"<<b.getGrade()<<std::endl;
                    --b;
                }
            }
            else
            {
                for (size_t j = 0; j < (size_t)i; j++)
                {
                    std::cout<<b.getName()<<":"<<b.getGrade()<<std::endl;
                    ++b;
                }
            }
            std::cout<<b.getName()<<":"<<b.getGrade()<<std::endl;
        }
        catch(const std::exception& e)
        {
           std::cerr << e.what() << '\n';
        }
    }
    return 0;
}