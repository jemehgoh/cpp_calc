#include <string>

class Number 
{
    private:
        char number[20] = {' '};
        int digit_count;

        void add_digit(char digit)
        {
            /*
            if (digit_count >= 20)
            {
                throw std::out_of_range();
            }
            */
            number[digit_count] = digit;
            digit_count++;
        }
    
    public:
        // Empty constructor
        Number()
        {
            digit_count = 0;
        }

        // Constructor for fixed string
        Number(std::string input, int size)
        {
            digit_count = 0;
            for (int i = (size - 1); i >= 0; i--)
            {
                // Adds input string values into class instance
                add_digit(input[i]);
            }
        }

        // Converts number into a string (for printing)
        std::string to_string()
        {
            std::string out = "";
            for (int i = digit_count; i >= 0; i--)
            {
                // Appends digits to output string
                out += number[i];
            }

            return out;
        }
};