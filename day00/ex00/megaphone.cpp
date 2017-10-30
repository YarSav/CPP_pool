#include "iostream"

int main(int argc, char **argv)
{
    int a;
    int b;

    a = 1;
    if (argc > 1)
    {
        while (a < argc)
        {
            b = 0;
            while (argv[a][b])
            {
                argv[a][b] = toupper(argv[a][b]);
                b++;
            }
            std::cout << argv[a]<<std::endl;
            a++;
        }
    }
}
