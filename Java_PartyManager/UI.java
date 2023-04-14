import java.io.*;
import java.util.*;

public class UI {

    private PartyManager partyManager;
    private Scanner scanner;
    private CharacterManager characterManager;
    private String currentParty;
    private ArrayList<PartyManager> partyList;

    public UI(Scanner scanner, PartyManager partyManager, CharacterManager characterManager) {
        this.characterManager = characterManager;
        this.partyManager = partyManager;
        this.partyList = new ArrayList<>();
        this.scanner = scanner;
    }

    public void start() {
        startMenu();
        characterCreate();
        optionMenu();

    }
    
    public void exit() {
        System.out.println("Name of file?");
        String name = scanner.nextLine();
        try {
            FileOutputStream f = new FileOutputStream(new File(name + ".txt"));
            ObjectOutputStream o = new ObjectOutputStream(f);
            
            for (int i = 0; i < characterManager.characters.size(); i++) {
                o.writeObject(characterManager.characters.get(i));
            }
            
            o.close();
            f.close();
            
           /* FileInputStream fi = new FileInputStream(new File(name + ".txt"));
            ObjectInputStream oi = new ObjectInputStream(fi);
            
            for (int i = 0; i < characterManager.characters.size(); i++) {
               CharacterManager characterManager.characters.get(i) = (CharacterManager) oi.readObject();
            } 
            */
        } catch (FileNotFoundException e) {
            System.out.println("File not found");
        } catch (IOException e) {
            System.out.println("Error initialising stream");
        //} catch (ClassNotFoundException e) {
          //  e.printStackTrace();
        }
    }

    public void startMenu() {
        System.out.println("1. Create new party    2. Load existing party    3. Save and exit");
        int command = Integer.valueOf(scanner.nextLine());

        if (command == 3) {
            exit();
        } else if (command == 1) {
            partyCreate();
        }

    }

    public void partyCreate() {
        System.out.println("What is the name of your party? - ");
        String partyName = scanner.nextLine();

        PartyManager newParty = new PartyManager(partyName);
        currentParty = partyName;
        addParty(newParty);
    }

    public void addParty(PartyManager party) {
        this.partyList.add(party);
    }

    public void characterCreate() {
        while (true) {
            System.out.print("Player's real name: ");
            String realName = scanner.nextLine();
            System.out.print("Character's name: ");
            String characterName = scanner.nextLine();
            
            while (true) {  
                if (characterManager.checkCharacterName(characterName) == true) {
                    System.out.println("No duplicate names, please enter a new name: ");
                    String newName = scanner.nextLine();
                    if (characterManager.checkCharacterName(newName) == true) {
          
                    } else {
                        characterName = newName;
                        break;
                    }
                } else {
                    break;
                }
            }
            
            System.out.print("Character's race: ");
            String characterRace = scanner.nextLine();
            System.out.print("Character's job class: ");
            String characterJob = scanner.nextLine();
            System.out.print("Character's starting HP: ");
            int hp = Integer.valueOf(scanner.nextLine());
            System.out.print("Character's starting skill points: ");
            int sp = Integer.valueOf(scanner.nextLine());
            System.out.print("Character's starting armour: ");
            String armour = scanner.nextLine();
            System.out.print("Character's starting weapon: ");
            String weapon = scanner.nextLine();

            CharacterManager newCharacter = new CharacterManager(realName, characterName, characterRace, characterJob, hp, sp, armour, weapon);
            newCharacter.assignParty(currentParty);
            characterManager.addCharacter(newCharacter);

            System.out.println(newCharacter.toString());

            System.out.println("Would you like to create another character? 1. Yes   2. No");
            int command = Integer.valueOf(scanner.nextLine());
            if (command == 1) {

            } else if (command == 2) {
                break;
            }
        }

    }

    public void optionMenu() {
        while (true) {
            System.out.println("1. View Party   2. Edit Character   3. Add Character   4. Delete Character   5. Return to main menu");
            int command = Integer.valueOf(scanner.nextLine());
            if (command == 1) {
                characterManager.displayCharacters();
                System.out.println("For more details, select again");
                int details = (Integer.valueOf(scanner.nextLine()) - 1);                 
                System.out.println(characterManager.characters.get(details).printDetails());
            } else if (command == 2) {
                if (characterManager.characters.isEmpty()) {
                    System.out.println("No available characters to edit");
                } else {
                    editMenu();
                }
            } else if (command == 3) {
                characterCreate();
            } else if (command == 4) {
                if (characterManager.characters.isEmpty()) {
                    System.out.println("No available characters to delete");
                } else {
                    System.out.println("Which character would you like to delete?");
                    characterManager.displayCharacters();
                    int number = Integer.valueOf(scanner.nextLine());
                    characterManager.removeCharacter(number);
                }
            } else if (command == 5) {
                startMenu();
            } else {
                
            }
        }

    }

    public void editMenu() {
        System.out.println("Which character would you like to edit? ");
        characterManager.displayCharacters();
        int characterNumber = (Integer.valueOf(scanner.nextLine()) - 1);
        characterManager.characters.get(characterNumber).whatToEdit();
        int edit = Integer.valueOf(scanner.nextLine());
        if (edit == 1) {
            System.out.println("What would you like to rename your player name to?");
            String newName = scanner.nextLine();
            characterManager.characters.get(characterNumber).setNewPlayerName(newName);
            System.out.println("New player name set to: " + newName);
        } else if (edit == 2) {
            System.out.println("What would you like to rename your character name to?");
            String newCharacterName = scanner.nextLine();
            characterManager.characters.get(characterNumber).setNewCharacterName(newCharacterName);
            System.out.println("New character name set to: " + newCharacterName);
        } else if (edit == 3) {
            System.out.println("What would you like to change your race to?");
            String newRace = scanner.nextLine();
            characterManager.characters.get(characterNumber).setNewRace(newRace);
            System.out.println("New race set to: " + newRace);
        } else if (edit == 4) {
            System.out.println("What would you like to change your job class to?");
            String newJob = scanner.nextLine();
            characterManager.characters.get(characterNumber).setNewJob(newJob);
            System.out.println("New job set to: " + newJob);
        } else if (edit == 5) {
            System.out.println("Set new HP value:");
            int newHP = Integer.valueOf(scanner.nextLine());
            characterManager.characters.get(characterNumber).setNewHP(newHP);
            System.out.println("New HP value set to: " + newHP);
        } else if (edit == 6) {
            System.out.println("Set new skill point value:");
            int newSP = Integer.valueOf(scanner.nextLine());
            characterManager.characters.get(characterNumber).setNewSP(newSP);
            System.out.println("New skill point value set to: " + newSP);
        } else if (edit == 7) {
            System.out.println("What would you like to rename your armour to?");
            String newArmour = scanner.nextLine();
            characterManager.characters.get(characterNumber).setNewArmour(newArmour);
            System.out.println("New armour set to: " + newArmour);
        } else if (edit == 8) {
            System.out.println("What would you like to rename your weapon to?");
            String newWeapon = scanner.nextLine();
            characterManager.characters.get(characterNumber).setNewWeapon(newWeapon);
            System.out.println("New weapon set to " + newWeapon);
        } else if (edit == 9) {
            System.out.println("Enter new skill name: ");
            String skillName = scanner.nextLine();
            characterManager.addSkill(skillName);
            System.out.println("You have successfully added " + skillName);
        }
    }

}
