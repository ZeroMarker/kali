# Java

## IO

Scanner oj = new Scanner(System.in);
String name = oj.nextLine()		// input whole line
int age = oj.nextInt();

System.out.println("Hello, " + name + " Your age is " + age);


## Data Type

byte byte_ = -45;
long num = 123_345_445L;
char letter = '\u0040';
boolean bool = true;


## Class && Object

class book{
	String title;
	int no;
	book(String title_, int no_){
		title = title_;
		no = no_;
	}
	int isbn(){
		return no;
	}
	String title(){
		return title;
	}
}

book lib = new book("Harry potter", 12333);
lib.isbn();


