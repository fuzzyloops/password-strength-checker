#include <iostream>
#include <string>

void checkPasswordStrength(std::string pass, float& score)
{
    //range of special characters 33-63, 91-96, 123-126
    //range of uppercase characters 65-90
    //range of lowercase characters 97-122
    //range of numberical characters 48-57

    float points;
    int len = pass.length();

    bool lastLetterWasUppercase = false;

    //We will check for length, special characters, capitalization, and numbers

    points += len/10;


    for(int i = 0; i < len; i++)
    {

        //Checking through the main special characters
        if((pass[i] >= 33 && pass[i] <= 63) || (pass[i] >= 91 && pass[i] <= 96) || (pass[i] >= 123 && pass[i] <= 126))
        {
            lastLetterWasUppercase = false;
            points += 1.5;
        }
        else if(pass[i] >= 65 || pass[i] <= 90) //Checking through uppercase characters
        {
            lastLetterWasUppercase = true;

            if(lastLetterWasUppercase)
            {
                points += 0.5;
            }
            else
            {
                points += 1;
            }
        }
        else if(pass[i] >= 97 || pass[i] <= 122) //Checking lowercase characters
        {
            lastLetterWasUppercase = false;

            if(lastLetterWasUppercase)
            {
                points += 1;
            }
            else
            {
                points += 0.5;
            }
        }
        else if(pass[i] >= 48 && pass[i] <= 57) //Checking numbers
        {
            lastLetterWasUppercase = false;
            points += 1;
        }
    }

    score = points;
}

void outputScore(float score)
{
    //Calculate score
    
    if(score >= 0 && score <= 5)
    {
        std::cout << "Password strength: Weak" << std::endl;
     }
     else if(score > 5 && score <= 15)
      {
           std::cout << "Password strength: Medium" << std::endl;
      }
     else if(score > 15 && score <= 25)
     {
         std::cout << "Password strength: Strong" << std::endl;
     }
     else
     {
         std::cout << "Password strength: Very strong" << std::endl;
     }
}