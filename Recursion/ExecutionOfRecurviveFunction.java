//https://pythontutor.com/visualize.html#mode=edit ---> for Visualisation Purposs
public class ExecutionOfRecurviveFunction {
    public static void main(String[] args) {
        int n = 10;
        ExecutionOfRecurviveFunction obj = new ExecutionOfRecurviveFunction();
        System.out.println("Printing by Way 1 :: ");
        obj.way1(n);
        // Execution of way 1 is logic and then function call 

        System.out.println("\nPrinting by Way 2 :: ");
        obj.way2(n);
        // Execution of way 2 is function call and then logic 

        System.out.println("\nPrinting by Way 3 :: ");
        obj.way3(n);
        // Execution of way 3 is function call, logic , function call , logic 

    }

    void way1(int n){
        if(n==0) {

            return;
        }
        System.out.print(n+" ");
        way1(n-1);
    }

    void way2(int n){
        if(n==0) {
            return;
        }
        way2(n-1);
        System.out.print(n+" ");
    }
    void way3(int n){
        if(n==0){
            return;
        }
        way3(n-1);
        System.out.print(n+" ");
        way3(n-1);
        System.out.print(n+" ");
        return;

    }
    
}
