interface Soal {
    public void run();
}

public class Main {

    public static void main(String[] args) {
        Soal soal[] = new Soal[4];
        soal[0] = new Soal() {

            @Override
            public void run() {
                A.stat();
                B.stat();
                C.stat();
                D.stat();
                E.stat();
            }

        };
        soal[1] = new Soal() {
            @Override
            public void run() {
                new E();
                new C(10, 5);
                new D(3, 3);
                A.stat();
                B.stat();
                C.stat();
                D.stat();
                E.stat();
            }
        };
        soal[2] = new Soal() {

            @Override
            public void run() {
                E e = new E(1, 2);
                C c = new C(1, 1);
                D d = new D(1, 1);
                A a = new A(1, 2);
                B b = new B(1, 1);
                b.show();
                ((A) d).show();
                ((B) e).show();
                c.show();
                a.show();
            }

        };

        soal[3] = new Soal() {

            @Override
            public void run() {
                C c_56 = new C(14, 4);
                C c_120 = new C(15, 8);
                A a_33 = new A(11, 3);
                B b_60 = new B(12, 5);
                A a_10 = new A(10, 1);
                D d_96 = new D(16, 6);
                D d_119 = new D(17, 7);
                E e_162 = new E(18, 9);
                B b_26 = new B(13, 2);
                E e_0 = new E(19, 0);
                d_96.calc();
                d_119.calc();
                a_33.calc();
                b_60.calc();
                e_0.calc();
                b_26.calc();
                c_56.calc();
                c_120.calc();
                e_162.calc();
                a_10.calc();
            }
        };
        int i = 1;
        for (Soal s : soal) {
            System.out.printf("-----%d-----\n", i);
            s.run();
            println("-----------");
            println("");
            i++;
        }
        A.stat();
        B.stat();
        C.stat();
        D.stat();
        E.stat();
    }

    public static void println(String s) {
        System.out.println(s);
    }

}
