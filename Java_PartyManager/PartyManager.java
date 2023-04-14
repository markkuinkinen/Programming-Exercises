import java.util.*;

public class PartyManager {
    private String partyName;
    CharacterManager characterManager;
    private ArrayList<CharacterManager> characters;
    
    public PartyManager(String partyName) {
        this.partyName = partyName;
        this.characters = new ArrayList<>();
    }
    
    public PartyManager(CharacterManager characterManager) {
        this.characterManager = characterManager;
        this.characters = new ArrayList<>();
    }
    
    public void addCharacter(CharacterManager character) {
        characters.add(character);
    }
    
    
    public String getPartyName() {
        return this.partyName;
    }
    
}
