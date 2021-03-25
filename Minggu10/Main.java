public class Main {
    
    public static void main(String[] args){
        ListMap map = new ListMap();
        map.set("Abc", "123");
        map.set("Def", "456");
        map.set("Ghi", "789");
        map.set("Def", "111");
        System.out.println(map.get("sss"));
        System.out.println(map.get("Abc"));
        System.out.println(map.get("Def"));
        System.out.println(map.get("Ghi"));
    }
}
