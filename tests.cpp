#include "functions.hpp"

int main()
{
    float score = 0;


    checkPasswordStrength("HelloW0r1d", score);
    outputScore(score);

    score = 0;

    checkPasswordStrength("1@mAStr0ngP@55w0rdrIght?", score);
    outputScore(score);

    score = 0;

    checkPasswordStrength("iamweak", score);
    outputScore(score);

    score = 0;

    checkPasswordStrength("th1sp@a55w0rd1Ss0unr3@50nabLyL@rg3", score);
    outputScore(score);
}