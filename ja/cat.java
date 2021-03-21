import java.util.*;

interface query{
	final int a = 10;
	void display();
}
class test implements query{
	public void display(){
		System.out.println("Geek");
	}
}
class animal{
	String name;
	int age;
	String gender;
	public animal(String name_, int age_, String gender_){
		name = name_;
		age = age_;
		gender = gender_;
	}
	public void name(){
		System.out.println(name);
	}
	public void age(){
		System.out.println(age);
	}
}
public class cat{
	public static void main(String[] args){
		dog tom = new dog("tom", 12, "male");
		tom.age();
		tom.name();

		test tikz = new test();
		tikz.display();
	}
}
class dog extends animal{
	public dog(String name_, int age_, String gender_){
		super(name_, age_, gender_);
	}
}
