#!/usr/bin/perl

print("Hello, Perl world!\n");


# scalar
$num = 123;
$float = 1.23;
$great = 123_456_789;
$str = "Hello, the Perl world!";

# array
@arr = (1, 2, 3);

# hash

%h = ('a' => 1, 'b' => 2);

# access varible

print("\$arr[1] = $arr[1]\n");
print("\$h{'a'} = $h{'a'}\n");

# function
sub hello{
	print("Hello, world!\n");
}
hello();

# regular expression

	# m/// match s/// replace tr/// trans
if($str =~ /Perl/){
	print("Matched.\n");
}
else{
	print("Not Matched.");
}

