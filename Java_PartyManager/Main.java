import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        CharacterManager characterManager = new CharacterManager();
        PartyManager partyManager = new PartyManager(characterManager);
        UI userInterface = new UI(scanner, partyManager, characterManager);
        
        userInterface.start();
    }
    
}
