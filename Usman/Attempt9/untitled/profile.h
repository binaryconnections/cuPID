#ifndef PROFILE_H
#define PROFILE_H

class profile
{
public:
    profile();

protected:
    int attributesScore[15];
    int* getAttributes();
    int totalScore();
};

#endif // PROFILE_H
