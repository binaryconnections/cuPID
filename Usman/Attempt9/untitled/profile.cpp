#include "profile.h"

profile::profile()
{
    for (int i = 0; i<sizeof(attributesScore); i++){
        attributesScore[i] = 0;
    }
}
