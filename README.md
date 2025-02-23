# **Lab1**

1. **HelloWorld.java**

    ```java
    public class HelloWorld {
        public static void main(String[] args) throws Exception {
            System.out.println("Hello, World!");
        }
    }
    ```

    运行结果:`Hello, World!`

2. **删除部分内容**

    |删除内容|结果|
    |:-:|:-:|
    |第一行的`public`|`Hello, World!`|
    |第二行的`public`|错误: 在类`HelloWorld`中找不到`main`方法|
    |第二行的`static`|错误:`main`方法不是类`HelloWorld`中的`static`|
    |第二行的`void`|编译错误:Return type for the method is missing|
    |第二行的`args`|编译错误:Syntax error, insert "... VariableDeclaratorId" to complete FormalParameterList|
    |第二行的`String`|编译错误:Syntax error on token "(", byte expected after this token|

3. **错误拼写**

    |错误拼写内容|结果|
    |:-:|:-:|
    |`public`|Syntax error on token `publi`,`public`expected|
    |`static`|Syntax error on token `stati`,`static`expected|
    |`void`|`voi` cannot be resolved to a type|
    |`args`|`Hello, World!`|
    |`String`|`Strin` cannot be resolved to a type|

4. **错误拼写**

    |错误拼写内容|结果|
    |:-:|:-:|
    |`System`|`Syste` cannot be resolved|
    |`out`|`ou` cannot be resolved or is not a field|
    |`println`|The method `printl(String)` is undefined for the type PrintStream|

5. **替换第二行**

    错误: 在类`HelloWorld`中找不到`main`方法

6. **重命名文件**

    The public type `HelloWorld` must be defined in its own file

7. **增删空格和空行**

    均正常输出`Hello, World!`

8. **执行命令及修改程序**

    |命令|结果|
    |:-:|:-:|
    |`java Hi`|Hi, Exception in thread `main` java.lang.ArrayIndexOutOfBoundsException: 0 at `Hi.main`(Hi.java:4)|
    |`java Hi @#$%`|`Hi, @#$%. How are you?`|
    |`java Hi 1024`|`Hi, 1024. How are you?`|
    |`java Hi Bob`|`Hi, Bob. How are you?`|
    |`java Hi.java Bob`|错误: 找不到或无法加载主类 Hi.java|
    |`java Hi.class Bob`|错误: 找不到或无法加载主类 Hi.class|
    |`java Hi Alice Bob`|`Hi, Alice. How are you?`|

    修改后的程序

    ```java
    public class Hi {
        public static void main(String[] args) {
            System.out.print("Hi ");
            System.out.print(args[2]);
            System.out.print(", ");
            System.out.print(args[1]);
            System.out.print(", ");
            System.out.print(args[0]);
            System.out.println(".");
        }
    }
    ```

9. **10次输出`Hello World!`**

    ```java
    public class HelloWorld { 
        public static void main(String[] args) throws Exception {
            for (int i=0;i<10;i++){
                System.out.println("Hello, World!");
            }
        }
    }
    ```

10. **稍微复杂的 Java 程序**

```java
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
```

该程序实现了一个函数itob(n,s,b),将十进制整数n转换为b进制数,并存储在字符串s中。
