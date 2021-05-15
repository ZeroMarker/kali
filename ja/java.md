# Java

## Package && Library

package project.module.package

import java.util.Scanner


## IO

Scanner oj = new Scanner(System.in);
String name = oj.nextLine()		// input whole line
int age = oj.nextInt();

System.out.println("Hello, " + name + " Your age is " + age);


## Data Type && Variable

Primitive Type

byte age = 30;
long viewCount = 3_123_345_445L;
float price = 10.99F;
char letter = 'A';
boolean flag = true;

Reference Type

Date now = new Date();
now.getTime();

Point point1 = new Point(1, 1);
Point point2 = point1;
// not a point object is the address or the reference of the point object
// they do not store value but store reference
point1.x = 2;
System.out.println(point2)	// 2, 1

String message = new String("Hello World");
String message = "Hello World";

message.length();		// 11
String [] array = {"water", "apple", "banana", "peach"};
array.length			// 4

System.out.println(message.replace("H", "Y"));	// Yello World
System.out.println(message)			// Hello World	// The String is immutable

toLowerCase;
toUpperCase;
trim();

int[] numbers = new int[3];
numbers[0] = 1;
numbers[1] = 2;
System.out.println(Array.toString(numbers));	// [1, 2, 0]

int[] numbers = {2, 3, 1};
numbers.length;			// field
Array.sort(numbers);

int[][] numbers = new int[][]
int[][] numbers = {{1, 2, 3}, {4, 5, 6}};

## Map

Map<String, String> map = new HashMap<>();

map.put("1", "one");
map.get("1");

## Anonymous Class/Function && Lambda Expression

anonymous
```java
JButton button = new JButton();
button.addActionListener(new ActionListener(){
	@Override
	public void actionPerformed(ActionEvent e) {
		System.out.println("You pressed button.");
	}
});
```

lambda
```java
JButton button = new JButton();
button.addActionListener(e -> showtime());
```

## Class && Object

class book{
	String title;
	int no;
	book(String title_, int no_){	//Constructor method
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

## Orieted Object Program

``` java
class father{
	Sting name;
	father(String name){
		this.name = name;
	}
	void fun(){
		System.out.println("father");
	}
}
class son extends father{
	@Override
	son(){
		super();
		System.out.println("son");
	}
	@Override
	void fun(){
		System.out.println("son");
	}
	//overload
	void fun(int age){
		System.out.println(age);
	}
}
```

### Interface


## GUI

awt
swing
javafx

### Swing
JFrame

JLabel

JButton

JCheckBox

JCombBox

JTextField


## Design Patterns

## Spring


