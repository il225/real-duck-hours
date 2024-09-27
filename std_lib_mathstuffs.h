// ima make a math file to call functions from

using namespace std;


int factorial(int firstvalue) 
{
    //works until 16
    int num_from_zero = firstvalue;

    while(num_from_zero>1)
    {
        --num_from_zero;
        firstvalue *= num_from_zero; 
    }
    
    return firstvalue;
}

int square(int x)
{
    return x*x;
}