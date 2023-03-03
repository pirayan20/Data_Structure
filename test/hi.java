public class hi{
    public static void main(String[] args){
        printInt("Pie");
    }

    public static void printInt(String s){
        for (int i=0; i<5; i++){
            String ans = "My name is " + s + " with " + i + " i's";
            System.out.println(ans);
        }
    }
    
    public static int randomDouble(int i){
        double l = Math.random() * 1000000;
        int ans = (int)l;
        return ans;
    }
}