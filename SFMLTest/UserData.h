#pragma once

#include <string>

class UserData
{
public:
    UserData();

    bool SaveUserData(const std::string& fileName) const;
    bool LoadUserData(const std::string& fileName);

private:

    std::string mUserName;
    std::string mCharacterName;
    int32_t mLevel;
};

