package program;

public
class Mythread extends Thread
{
public
    Mythread() { super(); }
public
    Mythread(String threadName) { setName(threadName); }
public
    static void main(String[] args)
    {
        System.out.println(Thread.currentThread().getName() + "启动");
        Mythread thread1 = new Mythread("线程1");
        Mythread thread2 = new Mythread("线程2");
        Mythread thread3 = new Mythread();
        thread1.start();
        thread2.start();
        thread3.start();
    }
}