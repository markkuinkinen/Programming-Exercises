import java.util.*;

public class CharacterManager {
    
    private String characterName;
    private String playerName;
    private String partyName;
    private String race;
    private String jobClass;
    private int HP;
    private int SP;
    private String armour;
    private String weapon;
    
    ArrayList<String> skillList;
    ArrayList<CharacterManager> characters;
    
    public CharacterManager() {        
        this.skillList = new ArrayList<>();
        this.characters = new ArrayList<>();
    }
    
    public CharacterManager(String player, String name, String race, String job, int hp, int sp, String armour, String weapon) {
        this.playerName = player;
        this.characterName = name;
        this.race = race;
        this.jobClass = job;
        this.HP = hp;
        this.SP = sp;
        this.armour = armour;
        this.weapon = weapon;
    }
    
    public void addSkill(String skillName) {
        this.skillList.add(skillName);
    }
    
    public void addCharacter(CharacterManager character) {
        this.characters.add(character);
    }
    
    public void displayCharacters() {
        for (int i = 0; i < characters.size(); i++) {
            System.out.println((i + 1) + ": " + characters.get(i).toString());
        }
    }
    
    public String getPlayerName() {
        return this.playerName;
    }
    
    public void setNewPlayerName(String name) {
        this.playerName = name;
    }
    
    public boolean checkCharacterName(String name) {
        for (int i = 0; i < characters.size(); i++) {
            if (name.equalsIgnoreCase(characters.get(i).characterName)) {
                return true;
            }
        }
        return false;
    }
    
    public String getCharacterName() {
        return this.characterName;
    }
    
    public void setNewCharacterName(String name) {
        this.characterName = name;
    }
    
    public String getRace() {
        return this.race;
    }
    
    public void setNewRace(String race) {
        this.race = race;
    }
    
    public String getJob() {
        return this.jobClass;
    }
    
    public void setNewJob(String job) {
        this.jobClass = job;
    }
    
    public int getHP() {
        return this.HP;
    }
    
    public void setNewHP(int hp) {
        this.HP = hp;
    }
    
    public int getSP() {
        return this.SP;
    }
    
    public void setNewSP(int sp) {
        this.SP = sp;
    }
    
    public String getArmour() {
        return this.armour;
    }
    
    public void setNewArmour(String armour) {
        this.armour = armour;
    }
    
    public String getWeapon() {
        return this.weapon;
    }
    
    public void setNewWeapon(String weapon) {
        this.weapon = weapon;
    }
    
    public void assignParty(String name) {
        this.partyName = name;
    }
    
    public void removeCharacter(int number) {
        System.out.println("You have deleted " + characters.get(number - 1).getPlayerName() + "'s character - " + characters.get(number - 1).characterName);
        characters.remove(number - 1);
    }
    
    public void whatToEdit() {
        System.out.println("1. Player name: " + this.playerName);
        System.out.println("2. Character name: " + this.characterName);
        System.out.println("3. Race: " + this.race);
        System.out.println("4. Job class: " + this.jobClass);
        System.out.println("5. HP: " + this.HP);
        System.out.println("6. Skill Points: " + this.SP);        
        System.out.println("7. Armour: " + this.armour);
        System.out.println("8. Weapon: " + this.weapon);
        System.out.println("9. Add skills");
    }
    
    public void printSkills() {
        for (int i = 0; i < skillList.size(); i++) {
            
        }
    }
    
    public String printDetails() {
        return "Party: " + this.partyName + "   Character Name: " + this.characterName + " (Owner: " + this.playerName +
                ")\nCurrent Hit Points: " + this.HP + "   Current Skill Points: " + this.SP +
                "\nArmour: " + this.armour + "   Weapon: " + this.weapon + "\nSkills: ";
    }
    
    @Override
    public String toString() {
        return "Party - " + this.partyName + ": " + this.characterName + ", " + 
                this.race + " " + this.jobClass + "   HP: " + this.HP + "  Skill points: " + this.SP + " (" + this.playerName + ")";
    }
}
