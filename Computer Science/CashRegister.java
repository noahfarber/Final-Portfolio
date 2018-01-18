import java.util.Scanner;
import java.text.DecimalFormat;
public class CashRegister {
    
    public static void main(String[] args) {
        
        String[] Menu =  {"Welcome to Weaver's Awesome Accessories!", " ", "       Menu", "1: Chicken Nuggets- $4.99: ", "2: Hamburger- $5.99: ", "3: Fries- $2.99: ", "4: Shake- $3.99: ", "5: Drink- $1.99: ", " "};
        
        double chickenPrice = 4.99;
        double burgerPrice = 5.99;
        double friesPrice = 2.99;
        double shakePrice = 3.99;
        double drinkPrice = 1.99;
        
        int chicken = 0;
        int burger = 0;
        int fries = 0;
        int shake = 0;
        int drink = 0;
        
        double wallet = 30;
        double total = 0;
        int inputNumber = 0;
        int quantity = 0;
        int optionSelecter = 0;
        double tax = .0825;
        double salesTax = 0;
        
        DecimalFormat decimalRound = new DecimalFormat("#.00");
        
        String checkout = "red";
        Scanner scanner = new Scanner(System.in);
        
        for (int count = 0; count < 9; count++) {
            System.out.println(Menu[count]);
            
        }
        
        
        
        
        
        
        while (wallet > 0 && inputNumber <= 5 && inputNumber >= 0 && total <= 100) {
            
            System.out.println("Your total is $" + decimalRound.format(total) + " and");
            System.out.println("your wallet currently holds $" + decimalRound.format(wallet));
            System.out.println("If you would like to checkout, press 6");
            System.out.println(" ");
            System.out.println("What would you like?");
            System.out.println(" ");
            
            
            
            inputNumber = scanner.nextInt();
            //BREAK
            
            if (inputNumber == 1) {
                System.out.println(" ");
                System.out.println("How many Chicken Nuggets would you like?");
                quantity = scanner.nextInt();
                if (wallet > (chickenPrice * quantity) + (total + (total * tax)) && quantity > 0) {
                    //wallet = wallet - (chickenPrice * quantity);
                    total = total + (chickenPrice * quantity);
                    chicken = chicken + quantity;
                    
                inputNumber = 0;
                System.out.println(" ");
                System.out.println("You have just put " + quantity + " Chicken Nugget(s) in your cart");
                quantity = 0;
           
            }
            else {
                System.out.println(" ");
                System.out.println("Insufficient Funds");
                System.out.println(" ");
            }
                
            }
            //BREAK
            if (inputNumber == 2) {
                System.out.println(" ");
                System.out.println("Would you like cheese?");
                System.out.println("1: Yes");
                System.out.println("2: No");
                optionSelecter = scanner.nextInt();
                if(optionSelecter == 1){
                    System.out.println("Your burger will have cheese!");
                    optionSelecter = 0;
                }
                else {
                    System.out.println("Your burger will not have cheese :(");
                    optionSelecter = 0;
                }
                System.out.println(" ");
                System.out.println("How many Hamburgers would you like?");
                quantity = scanner.nextInt();
                if (wallet > (burgerPrice * quantity) + (total + (total * tax)) && quantity > 0) {
                    //wallet = wallet - (burgerPrice * quantity);
                    total = total + (burgerPrice * quantity);
                    burger = burger + quantity;
                    
                inputNumber = 0;
                System.out.println(" ");
                System.out.println("You have just put " + quantity + " Hamburger(s) in your cart");
                quantity = 0;
           
            }
            else {
                System.out.println(" ");
                System.out.println("Insufficient Funds");
                System.out.println(" ");
            }
                
            }
            
            if (inputNumber == 3) {
                System.out.println(" ");
                System.out.println("How many Fries would you like?");
                quantity = scanner.nextInt();
                if (wallet > (friesPrice * quantity) + (total + (total * tax)) && quantity > 0) {
                    //wallet = wallet - (friesPrice * quantity);
                    total = total + (friesPrice * quantity);
                    fries = fries + quantity;
                    
                inputNumber = 0;
                System.out.println(" ");
                System.out.println("You have just put " + quantity + " Fries in your cart");
                quantity = 0;
           
            }
            else {
                System.out.println(" ");
                System.out.println("Insufficient Funds");
                System.out.println(" ");
            }
                
            }
            
            if (inputNumber == 4) {
                System.out.println(" ");
                System.out.println("How many Shakes would you like?");
                quantity = scanner.nextInt();
                if (wallet > (shakePrice * quantity) + (total + (total * tax)) && quantity > 0) {
                    //wallet = wallet - (shakePrice * quantity);
                    total = total + (shakePrice * quantity);
                    shake = shake + quantity;
                    
                inputNumber = 0;
                System.out.println(" ");
                System.out.println("You have just put " + quantity + " Shake(s) in your cart");
                quantity = 0;
           
            }
            else {
                System.out.println(" ");
                System.out.println("Insufficient Funds");
                System.out.println(" ");
            }
                
            }
            
            if (inputNumber == 5) {
                System.out.println(" ");
                System.out.println("How many Drinks would you like?");
                quantity = scanner.nextInt();
                if (wallet > (drinkPrice * quantity) + (total + (total * tax)) && quantity > 0) {
                    //wallet = wallet - (drinkPrice * quantity);
                    total = total + (drinkPrice * quantity);
                    drink = drink + quantity;
                    
                inputNumber = 0;
                System.out.println(" ");
                System.out.println("You have just put " + quantity + " Drink(s) in your cart");
                quantity = 0;
           
            }
            else {
                System.out.println(" ");
                System.out.println("Insufficient Funds");
                System.out.println(" ");
            }
                
            }
            
            if (inputNumber > 6 || inputNumber < 0) {
                System.out.println("That's not on the menu!");
                inputNumber = 0;
            }
            
            if (inputNumber == 6){
                //CHECKOUT
                if (wallet > total) {
                wallet = wallet - (total + (total * tax));
                salesTax = (total * tax);
                System.out.println(" ");
                System.out.println("         " + "RECEIPT");
                System.out.println(" ");
                System.out.println("You have purchased:");
                System.out.println(" ");
                
                if(chicken > 0) {
                System.out.println("You have bought " + chicken + " Chicken Nuggets" + "      ... " + decimalRound.format(chicken*chickenPrice));
                }
                
                if(burger > 0) {
                System.out.println("You have bought " + burger + " Hamburgers" + "      ... " + decimalRound.format(burger*burgerPrice));
                }
                
                if(fries > 0) {
                System.out.println("You have bought " + fries + " Fries" + "      ... " + decimalRound.format(fries*friesPrice));
                }
                
                if(shake > 0) {
                System.out.println("You have bought " + shake  + " Shakes" + "      ... " + decimalRound.format(shake*shakePrice));
                }
                
                if(drink > 0) {
                System.out.println("You have bought " + drink + " Drinks" + "      ... " + decimalRound.format(drink*drinkPrice));
                }
                
                System.out.println(" ");
                System.out.println("Total      ... $" + decimalRound.format(total));
                System.out.println("Sales tax      ... $" + decimalRound.format(salesTax));
                System.out.println("Grand total      ... $" + decimalRound.format(total + salesTax));
                System.out.println(" ");
                System.out.println("Your cart is now empty");
                
                System.out.println("Your wallet now contains $" + decimalRound.format(wallet));
                System.out.println(" ");
                System.out.println("Thank you for shopping!");
                
                }
                
                
            }
        }
        
        if (wallet <= 0) {
            System.out.println("Thank you for shopping!");
        }
        
        while (total > 100) {
            System.out.println("Thank you for shopping!");
        }
        
    }
}