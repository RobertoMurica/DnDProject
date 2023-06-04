/* exportcharacter.h
Created by: Roberto Murcia
The purposes of this file is to provide declaractions for the functions in exportcharacter.cpp
exportcharacter.cpp will allow the user to export/import character files into the program.
*/
#include <iostream>
class SaveFile{
    private:
    public:
        void createSaveFile();
        void importSaveFile();
};