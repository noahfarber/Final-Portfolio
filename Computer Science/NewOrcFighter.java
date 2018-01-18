import java.util.Scanner;
import java.util.concurrent.ThreadLocalRandom;

public class NewOrcFighter{
public static void main(String[] args) {

            int healthStart = 50;
            int playerCurrentHealth = healthStart;
            int orcCurrentHealth = healthStart;
            int playerMaxHealth = healthStart;
            int orcMaxHealth = healthStart;
            int bouldersRemaining = 5;
            int playerWaitTurns = 0;

            // variables used for color text
            String color = "\u001B[31m";
            String colorGreen = "\u001B[32m";
            String colorBlue = "\u001B[34m";
            String colorReset = "\u001B[0m";

            Scanner scanner = new Scanner(System.in);

            System.out.println("You are standing in a small clearing in a forest.  A large log lies on the ground near the center of the area." + "\n");
            System.out.println("An orc suddenly jumps out from behind the log, glaring at you menacingly!\n");
            System.out.println("You raise your hands up and shift into a defensive posture.\n");

        while (playerCurrentHealth >= 0 && orcCurrentHealth >= 0) {

            int damage = 0;
            int extraDamage = 0;
            boolean isFrozen = false;
            boolean isBurning = false;
            boolean isOffBalance = false;

            // Player's turn
            if(playerCurrentHealth > 0 && playerWaitTurns == 0){

                
                
                System.out.println("What do you do (enter number)?\n");
                System.out.println("1. Cast fireball\t\t\t\t\t(chance to adding extra damage on next turn)");
                System.out.println("2. Cast ice shards\t\t\t\t\t(chance to cause enemy to skip their next turn)");
                System.out.println("3. Cast hurl boulder - " + bouldersRemaining + " remaining \t(chance to knock enemy off balance, reducing damage)");

                int attackType = scanner.nextInt();
                int bouldersToCast = 0;
                
                if (attackType == 1) {
                System.out.println("You extend your hand and throw a ball of fire at the orc...\n");
                }
                
                else if (attackType == 2) {
                System.out.println("The air chills above your open hand, quickly condensing into a shard of ice.  You hurl it forward...\n");
                }
                
                else if (attackType == 3 && bouldersRemaining > 0)
                {
                System.out.print("How many boulders do you want to use? (lose one turn per extra attack): ");
                bouldersToCast = scanner.nextInt();
                System.out.println("You raise your fists to chest level as stones begin to lift from the ground.  You thrust both fists forward...\n");
            }
            
                else{
                    System.out.println("Invalid input.\n");
                }
                
                if(attackType == 1 || attackType == 2){

                    if (attackType == 1) {
                        damage = ThreadLocalRandom.current().nextInt(3, 10 + 1);

                    if (damage == 9 || damage == 10){
                        isBurning = ThreadLocalRandom.current().nextBoolean();
                        extraDamage = damage / 3;
                        }
                    
                    }

                    else if (attackType == 2) {
                        damage = ThreadLocalRandom.current().nextInt(3, 8 + 1);

                        if (damage == 8)
                            isFrozen=ThreadLocalRandom.current().nextBoolean();
                    }
                    
                    System.out.println("...and it slams into the orc, dealing " + damage + " damage!\n");
                    orcCurrentHealth -= damage;

                    if (isBurning) {
                        System.out.println("\t...and the orc's clothes are set on fire, dealing an additional " + extraDamage + " damage!\n");
                        orcCurrentHealth -= extraDamage;
                    }
                    else if (isFrozen) {
                        System.out.println("\t...and the orc's legs become encased in ice!\n");
                        orcCurrentHealth -= extraDamage;
                    }

                }
                
                else if (attackType == 3) {

                    if (bouldersRemaining > 0) {
                        for (int boulderCount = 0; boulderCount < bouldersToCast; boulderCount++, playerWaitTurns++, bouldersRemaining--) {
                            damage = ThreadLocalRandom.current().nextInt(4, 6 + 1);
                            System.out.println("...and a stone strikes the orc, dealing " + damage + " damage!\n");
                            orcCurrentHealth -= damage;

                            if (damage ==6) {
                                isOffBalance = ThreadLocalRandom.current().nextBoolean();
                                System.out.println("\t...and a lucky strike to the temple dazes the orc!\n");
                                isOffBalance = true;
                            }
                        }
                    }
                    else {
                        System.out.println("You are out of stones!\n");
                    }
                }
                
                System.out.println(color + "ORC HEALTH: " + orcCurrentHealth + "/" + orcMaxHealth + "\n" + colorReset);

            }

            // Orc's turn
            if (isFrozen) {
                System.out.println(colorBlue + "Orc is frozen!  Skipping his turn...\n" + colorReset);
                isFrozen = false;
            }
                
            else if (orcCurrentHealth > 0) {

                if (playerWaitTurns > 0)
                    playerWaitTurns--;


                int orcAttack = ThreadLocalRandom.current().nextInt(1, 2 + 1);

                if (orcAttack == 1) {
                   System.out.println("The orc snarls and swings a jagged blade at you...\n");
                } else if(orcAttack==2){
                System.out.println("The orc lunges forward, bearing its fangs...\n");
                }

                damage = ThreadLocalRandom.current().nextInt(5, 8 + 1);

                System.out.print("...and connects,");

                if (isOffBalance) {
                    damage -= 2;
                    System.out.println(" (though is a bit off balance), dealing " + damage + " damage!  (reduced by 2)\n");
                    isOffBalance = false;
                }

                else {
                    System.out.println(" dealing " + damage + " damage!\n");
                }
            
                playerCurrentHealth -= damage;
                System.out.println(colorGreen + "PLAYER HEALTH: " + playerCurrentHealth + "/" + playerMaxHealth + "\n" + colorReset);
            }
        }

        if (playerCurrentHealth <= 0) {
            System.out.println("You have died!");
        }
        else if (orcCurrentHealth<=0) {
            System.out.println("You have slain the orc!");
        }
    }

}
