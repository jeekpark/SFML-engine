#include "UserData.h"

#include <fstream>

UserData::UserData()
    : mUserName("유저명")
    , mCharacterName("캐릭터명")
    , mLevel(42)
{

}

bool UserData::SaveUserData(const std::string& fileName) const
{
    std::ofstream outFile(fileName, std::ios::binary);
    if (outFile.is_open() == false)
    {
        return false;
    }

    size_t userNameSize = mUserName.size();
    outFile.write(reinterpret_cast<const char*>(&userNameSize), sizeof(userNameSize));
    outFile.write(mUserName.c_str(), userNameSize);

    size_t charactorNameSize = mCharacterName.size();
    outFile.write(reinterpret_cast<const char*>(&charactorNameSize), sizeof(charactorNameSize));
    outFile.write(mCharacterName.c_str(), charactorNameSize);

    outFile.write(reinterpret_cast<const char*>(&mLevel), sizeof(mLevel));

    outFile.close();
    return true;
}

bool UserData::LoadUserData(const std::string& fileName)
{
    std::ifstream inFile(fileName, std::ios::binary);
    if (!inFile.is_open())
    {
        return false;
    }

    size_t userNameSize;
    inFile.read(reinterpret_cast<char*>(&userNameSize), sizeof(userNameSize));
    mUserName.resize(userNameSize);
    inFile.read(&mUserName[0], userNameSize);

    size_t characterNameSize;
    inFile.read(reinterpret_cast<char*>(&characterNameSize), sizeof(characterNameSize));
    mCharacterName.resize(characterNameSize);
    inFile.read(&mCharacterName[0], characterNameSize);

    inFile.read(reinterpret_cast<char*>(&mLevel), sizeof(mLevel));

    inFile.close();
    return true;
}