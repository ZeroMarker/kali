# Java

## Package && Library

package project.module.package

import java.util.Scanner


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

### map

Map<String, String> map = new HashMap<>();

map.put("1", "one");
map.get("1");
### Anonymous Class/Function && Lambda Expression

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

class frame extends JFrame

@Override

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


## Design Mode

## Spring


