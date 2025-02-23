public class Converter {
    public static void itob(int n,StringBuilder s,int b) {
        if (n<0) {
            s.append('-');
            n=-n;
        }
        if (n/b!=0) {
            itob(n/b,s,b);
        }
        char c=(n%b<=9) ? (char)(n%b+'0') : (char)(n%b-10+'A');
        s.append(c);
    }
    // 示例用法
    public static void main(String[] args) {
        StringBuilder s= new StringBuilder();
        itob(30,s,16);
        System.out.println(s.toString()); // 输出 "1E"
    }
}