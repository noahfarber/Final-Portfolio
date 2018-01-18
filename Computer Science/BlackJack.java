import java.util.Random;
import java.util.Scanner;

public class BlackJack {
        
    static int card1Value = 0;
    static int holder1 = 0;
    static int holder2 = 0;
    static int holder3 = 0;
    static int holder4 = 0;
    static int holder5 = 0;
    static int holder6 = 0;
    static int holder7 = 0;
    static int holder8 = 0;
    static int dealer1 = 0;
    static int dealer2 = 0;
    static int dealer3 = 0;
    static int dealer4 = 0;
    static int dealer5 = 0;
    static int dealer6 = 0;
    static int dealer7 = 0;
    static int dealer8 = 0;
    static int total = 0;
    static int dealerTotal = 0;
    static int isPlayerTurn = 1;
    
    public static int randInt(int min, int max) {
        Random rand = new Random();
        int randomNum = rand.nextInt((max - min) + 1) + min;
        return randomNum;
    }
    
    public static void main(String[] args) {
        String colorBlue = "\u001B[36m";
        String colorReset = "\u001B[0m";
        
        
        
        intro();
        System.out.println("Your cards are: ");
        dealHand(randInt(1, 52));
        holder1 = card1Value;
        dealHand(randInt(1, 52));
        holder2 = card1Value;
        System.out.println("Would you like to hit or stay?");
        
        while (dealerTotal < 22 && total < 22 && isPlayerTurn == 1) {
        if (total >= 0 && total < 21) {
            total = total + holder1 + holder2;
            ifTheyWantHit1();
        
        
            
        }
        
        if (total == 21) {
            System.out.println("You got 21!");
            dealerPlaysOut();
        }
        
        if (dealerTotal == 21 && total == 21) {
            System.out.println("Tis a draw.");
        }
        
        }//while loop bracket
        
    }
    
    public static void intro () {
        String colorRed = "\u001B[31m";
        String colorGreen = "\u001B[32m";
        String colorBlue = "\u001B[34m";
        String colorReset = "\u001B[0m";
        
        System.out.println(colorRed + "Welcome to Noah's Stuntastic Casino!\n" + colorReset);
        System.out.println("This is the blackjack table");
        System.out.println("Type " + colorGreen + "Hit" + colorReset + " to get a new card and type " + colorGreen + "Knock" + colorReset + " to pass the turn on to the dealer.");
        System.out.println("Thank you for your money!! HAHAHA!\n");
    }
    
    public static void dealHand(int card1) {
        String colorRed = "\u001B[36m";
        String colorGreen = "\u001B[32m";
        String colorBlue = "\u001B[34m";
        String colorReset = "\u001B[0m";
        
        
        String card1Name = "Blank";
        
        if (card1 >= 1 && card1 <= 13) {
            if (card1 == 1) {
                card1Name = "Ace of Spades";
                card1Value = 1;
            }
            if (card1 >= 2 && card1 <= 10) {
                card1Name = (card1 + " of Spades");
                card1Value = card1;
            }
            if (card1 == 11) {
                card1Name = "Jack of Spades";
                card1Value = 10;
            }
            if (card1 == 12) {
                card1Name = "Queen of Spades";
                card1Value = 10;
            }
            if (card1 == 13) {
                card1Name = "King of Spades";
                card1Value = 10;
            }
            
        }
        
        if (card1 >= 14 && card1 <= 26) {
            if (card1 == 14) {
                card1Name = "Ace of Hearts";
                card1Value = 1;
            }
            if (card1 >= 15 && card1 <= 23) {
                card1Name = ((card1 - 13) + " of Hearts");
                card1Value = card1 - 13;
            }
            if (card1 == 24) {
                card1Name = "Jack of Hearts";
                card1Value = 10;
            }
            if (card1 == 25) {
                card1Name = "Queen of Hearts";
                card1Value = 10;
            }
            if (card1 == 26) {
                card1Name = "King of Hearts";
                card1Value = 10;
                
            }
            
        }
        
        if (card1 >= 27 && card1 <= 39) {
            if (card1 == 27) {
                card1Name = "Ace of Diamonds";
                card1Value = 1;
            }
            if (card1 >= 28 && card1 <= 36) {
                card1Name = ((card1 - 26) + " of Diamonds");
                card1Value = card1 - 26;;
            }
            if (card1 == 37) {
                card1Name = "Jack of Diamonds";
                card1Value = 10;
            }
            if (card1 == 38) {
                card1Name = "Queen of Diamonds";
                card1Value = 10;
            }
            if (card1 == 39) {
                card1Name = "King of Diamonds";
                card1Value = 10;
            }
            
        }
        
        if (card1 >= 40 && card1 <= 52) {
            if (card1 == 40) {
                card1Name = "Ace of Clubs";
                card1Value = 1;
            }
            if (card1 >= 41 && card1 <= 49) {
                card1Name = ((card1 - 39) + " of Clubs");
                card1Value = card1 - 39;
            }
            if (card1 == 50) {
                card1Name = "Jack of Clubs";
                card1Value = 10;
            }
            if (card1 == 51) {
                card1Name = "Queen of Clubs";
                card1Value = 10;
            }
            if (card1 == 52) {
                card1Name = "King of Clubs";
                card1Value = 10;
            }
            
        }
        
        System.out.println(colorRed + card1Name + colorReset);
        
        
    }
    /*
    public static void numberMaker (int card1) {
        
       if (card1 >= 14 && card1 <= 26) {
       card1 = card1 - 13;
       }
       if (card1 >= 27 && card1 <= 39) {
       card1 = card1 - 26;
       }
       if (card1 >= 40 && card1 <= 52) {
       card1 = card1 - 39;
       }
       else {
       card1 = card1; 
       }
       
    }
    */
    public static void ifTheyWantHit1 () {
        String colorBlue = "\u001B[36m";
        String colorReset = "\u001B[0m";
        
        Scanner scanner = new Scanner(System.in);
        String string1 = scanner.next();
        
        if(string1.equals("Hit") || string1.equals("hit")) {
            dealHand(randInt(1, 52));
            holder3 = card1Value;
            total = total + card1Value;
            System.out.println("Your total is " + colorBlue + total + colorReset);
            System.out.println(" ");
        }
        else {
            isPlayerTurn = 0;
            dealerPlaysOut();
        }
    }
    
    public static void ifTheyWantHit2 () {
        
        Scanner scanner = new Scanner(System.in);
        String string1 = scanner.next();
        
        if(string1.equals("Hit") || string1.equals("hit")) {
            dealHand(randInt(1, 52));
            holder4 = card1Value;
            
        }
        else {
            dealerPlaysOut();
        }
    }
    
    public static void ifTheyWantHit3 () {
        
        Scanner scanner = new Scanner(System.in);
        String string1 = scanner.next();
        
        if(string1.equals("Hit") || string1.equals("hit")) {
            dealHand(randInt(1, 52));
            holder5 = card1Value;
            
        }
        else {
            dealerPlaysOut();
        }
    }
    
    public static void dealerPlaysOut() {
        String colorBlue = "\u001B[36m";
        String colorReset = "\u001B[0m";
        
        
        System.out.println(" ");
        System.out.println("Dealer's cards are: ");
        dealHand(randInt(1, 52));
        dealer1 = card1Value;
        dealHand(randInt(1, 52));
        dealer2 = card1Value;
        dealerTotal = dealer1 + dealer2;
        System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
        
        if(dealerTotal <= 16) {
            dealHand(randInt(1, 52));
            dealer3 = card1Value;
            dealerTotal = dealerTotal + dealer3;
            System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
            
            if (dealerTotal <= 16) {
            dealHand(randInt(1, 52));
            dealer3 = card1Value;
            dealerTotal = dealerTotal + dealer3;
            System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
            
                if (dealerTotal <= 16) {
                dealHand(randInt(1, 52));
                dealer3 = card1Value;
                dealerTotal = dealerTotal + dealer4;
                System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
                
                if (dealerTotal <= 16) {
                dealHand(randInt(1, 52));
                dealer5 = card1Value;
                dealerTotal = dealerTotal + dealer5;
                System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
                    
                    if (dealerTotal <= 16) {
                    dealHand(randInt(1, 52));
                    dealer6 = card1Value;
                    dealerTotal = dealerTotal + dealer6;
                    System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
                        if (dealerTotal <= 16) {
                        dealHand(randInt(1, 52));
                        dealer7 = card1Value;
                        dealerTotal = dealerTotal + dealer7;
                        System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
                            if (dealerTotal <= 16) {
                                dealHand(randInt(1, 52));
                                dealer7 = card1Value;
                                dealerTotal = dealerTotal + dealer7;
                                System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
                            
                                    }
                            }
                        
                        }
                    }
                
                }
            
            }
        }
        
        else if (dealerTotal >= 16 && dealerTotal <= 19) {
            int shouldHit = randInt(1, 5);
            if(shouldHit <= 3) {
                dealHand(randInt(1, 52));
                dealer3 = card1Value;
                dealerTotal = dealerTotal + dealer3;
                System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
                    if(dealerTotal > total) {
                        System.out.println("The dealer wins :/");
                    }
                    
                if (dealerTotal >= 16 && dealerTotal <= 19) {
                        shouldHit = randInt(1, 5);
                        if(shouldHit <= 3) {
                            dealHand(randInt(1, 52));
                            dealer3 = card1Value;
                            dealerTotal = dealerTotal + dealer3;
                            System.out.println("Dealer's total is " + colorBlue + dealerTotal + colorReset);
                                if(dealerTotal > total) {
                                    System.out.println("The dealer wins :/");
                                }
                                if(dealerTotal > 21 ) {
                                    System.out.println("Dealer busts, you win.");
                                }
                                
                            
                        }
                        if(shouldHit >= 4) {
                            System.out.println("The dealer stays.");
                            if (total > dealerTotal) {
                                System.out.println("You win!");
                            }
                            if (dealerTotal > total) {
                                System.out.println("You lose :(");
                                total = 22;
                            }
                            if (dealerTotal == total) {
                                System.out.println("Tis a draw.");
                                
                            }
                            if(dealerTotal > 21) {
                                System.out.println("The dealer lost! Good Job!");
                            }
                        }
                    }
                    
                
            }
            if(shouldHit >= 4) {
                System.out.println("The dealer stays.");
                if (total > dealerTotal) {
                    System.out.println("You win!");
                }
                if (dealerTotal > total) {
                    System.out.println("You lose :(");
                }
                if (dealerTotal == total) {
                    System.out.println("Tis a draw.");
                }
                if(dealerTotal > 21) {
                    System.out.println("The dealer lost! Good Job!");
                }
            }
        }
        
        if (dealerTotal == 20 || dealerTotal == 21) {
            System.out.println("The dealer stays.");
                if (total > dealerTotal) {
                    System.out.println("You win!");
                }
                if (dealerTotal > total) {
                    System.out.println("You lose :(");
                }
                if (dealerTotal == total) {
                    System.out.println("Tis a draw.");
                }
        }
    
    }
}