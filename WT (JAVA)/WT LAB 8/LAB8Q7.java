
class MyException extends Exception {
    public MyException(String str) {
        System.out.println(str);
    }
}
class LAB8Q7 {
    public static void main(String args[]) {
        int current = 1000;
        try {
            int withdraw = 700;
            if ((current - withdraw) < 500) {
                throw new MyException("Withdraw Not possible as amount is not sufficient");
            } else {
                current -= withdraw;
                System.out.println("Amount successfully withdrawn, remaining balance = " + current);
            }
        } catch (Exception e) {
            System.out.println("Caught Exception");
        }
    }
}