import java.util.Scanner;
public class assignment6two {
    
    static int[] array = {0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0 , 0};
    static int emptyVariable = 0;
    Scanner scanner = new Scanner(System.in);
    static int numberCounter = 0; 
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        while(numberCounter <= 1000) {
            addNumber(1);
        }
        print();
    }
    
    public static void addNumber (int number1) {
        Scanner scanner = new Scanner(System.in);
        emptyVariable = scanner.nextInt();
        
        if(emptyVariable != -100) {
            array[numberCounter] = emptyVariable;
            emptyVariable = 0;
            numberCounter = numberCounter + 1;
        }
        else {
            print();
            getCount();
            getSum();
            getMean();
            
        }
    }
    
    public static void print() {
        for (int count = 0; count <= (numberCounter -1); count++) {
            System.out.println(array[count]);
        }
    }
    
    public static void getCount() {
        
    }
    
    public static void getSum() {
        
        
    }
    
    public static void getMean() {
        
    }
    
    }
