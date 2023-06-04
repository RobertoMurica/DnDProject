/* playercharacter.h
Created by: Roberto Murcia
This is a header file used for "playercharacter.cpp"
Class Playerchar is used to create a character object with various attributes.
Constructor PlayerChar allows for immediate construction of PlayerChar object based on user input
Some of the attributes include the character name, stats, proficient saves, and proficient skills.
Getters and Setters are made to allow for the easy setting and getting of these attributes
*/
#include <iostream>
class PlayerChar{
    
    private:
        std::string charName;               //Character name
        int charStats[6];                   //Current character stats in order of: Strength, Dexterity, Constitution, Intelligience, Wisdom, and Charisma (SDCIWC)
        bool profSaves[6];                  //True/False boolean values in an array that determine whether a character is proficient at specific stat (SDCIWC)
        char profSkills[18];                //Creates an array of chars that will allow a player to set a stat to have a n(no proficiency), p(proficient), and e(expertise).
    
    public:
        PlayerChar(std::string charName, int charStats[], bool profSaves[], char profSkills[]);         //Constructor for PlayerChar class
        std::string getCharName();                                                                  //Get character name
        void setCharName(std::string name);                                                         //Set character name

        int * getCharStats();                                                                       //Get character stats
        void setCharStats(int stats[]);                                                             //Set character stats

        bool * getProfSaves();                                                                      //Get proficient saves
        void setProfSaves(bool saves[]);                                                            //Set proficient saves

        char * getProfSkills();                                                                     //Get proficient/expertise skills
        void setProfSkills(char skills[]);                                                          //Set proficient/expertise skills

};