#include "profile.h"

profile::profile()
{
}


int* profile::getAttributes()
{
    return attributesScore;
}


int profile::totalScore()
{
    int score = 0;
    for (int i=0; i<sizeof(attributesScore); i++)
    {
        score+=attributesScore[i];
    }
    return score;
}
