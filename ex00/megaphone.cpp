#include <ios>
#include <iostream>

/*
class Message
{
    public:
        std::string msg;
        void    toupperMsg(std::string msg);
};

void    Message::toupperMsg(std::string msg)
{
    //for ()
}
*/
int main(void)
//int	main(int argc, char** argv)
{
    /*
    char    *output;

    output = argv[1];
    if (argc > 1)
    {
        std::cout << std::uppercase << output;
        //std::cout << argv[1];
    }
    return (0);
*/
std::cout << std::showbase << std::hex;
  std::cout << std::uppercase << 77 << '\n';
  std::cout << std::nouppercase << 77 << '\n';
  std::cout << std::toupper << "hello" << '\n';
  return (0);
}
