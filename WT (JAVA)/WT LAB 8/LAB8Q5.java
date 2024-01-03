class TimeException extends Exception { 
    public TimeException(String str) {
    System.out.println(str); }
    }
    class LAB8Q5 {
    public static void main(String args[]) 
    {
        int hh, mm, ss; 
        hh = 26;
        mm = 25;
        ss = 30;
    try 
    {
        if (hh < 0 || mm < 0 || ss < 0 || hh > 23 || mm > 59 || ss > 59) 
        {
            throw new TimeException("\nTime Format not proper"); 
        } 
        else 
        {
            System.out.println("Time entered : " + hh + " hrs : " + mm + " mins : " + ss + " seconds\n");
        }
    } 
    catch (Exception e) 
    { 
        System.out.println("!! Caught Exception !!\n");
    } 
}
}
