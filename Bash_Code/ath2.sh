$ x = 1.1 
$ y = 2.2 
$ echo x + y | bc -l
3.3

$ echo x - y | bc -l
-1.1

$ echo x \* y | bc -l
2.42   

$ echo 'x * y' | bc -l
2.42    

$ echo 'x / y' | bc -l
.5000

$ z=`echo '$x / $y' | bc -l`
$ echo $z
.5000

# Wrong use

$ echo x * y | bc -l
1.1  