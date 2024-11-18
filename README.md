# n7
Arbitrary Precision Decimal Calculator for Linux and Windows Shell Command Line.

In one directory with num7.h header file compile the following:

  g++ n7.cpp num7.cpp

  HOW TO USE n7 SHELL COMMAND LINE:
  
          addition: n7 + 2 3.5      #5.5
          addition: n7 + 2 3.5 4.5  #10.0
       subtraction: n7 - 2 3.5      #-1.5
       subtraction: n7 - 2 3.5 4.5  #-6.0
    multiplication: n7 x 2 3.5 4.5  #31.5
    multiplication: n7 X 2 3.5 4.5  #31.5
    multiplication: n7 '*' 2 3.5 4  #28.0
          division: n7 / 120 2.0 5  #12.0
          division: n7 / 2.5 3.5    #0.7142857142857142857142857142857142857142
          division: n7 : 2.5 3.5    #0.7142857142857142857142857142857142857142
         remainder: n7 % 17.0 10 4  #3.0
         factorial: n7 ! 5          #120.0
  
          absolute: n7 abs -5.0  #5.0
  
          addition: n7 add 3.0 5.5    #8.5
       subtraction: n7 sub 3.0 5.5    #-2.5
    multiplication: n7 mul 3.0 5.5    #16.5
          division: n7 div 3.0 5.5 6  #0.545454
         remainder: n7 mod 10.0 7.0   #3.0
           inverse: n7 inv 3.0 6      #0.333333
       square root: n7 sqr 2.0 6      #1.414213
  
            square: n7 x2  5.0       #25.0
              cube: n7 x3  5.0       #125.0
             power: n7 xy 10.5 3.0   #1157.625
             power: n7 ^  10.5 3.0   #1157.625
               10y: n7 10y 3.0       #1000.0
                2y: n7 2y 32.0       #4294967296.0
                ey: n7 ey 1.0        #2.7182818284590452353602874713527
         factorial: n7 fact 5        #120.0
  
               10x: n7 10x 5.25         #52.5
              100x: n7 100x 5.25        #525.0
             1000x: n7 1000x 5.25       #5250.0
             10div: n7 10div 5.25       #0.525
            100div: n7 100div 5.25      #0.0525
           1000div: n7 1000div 5.25     #0.00525
  
             shift: n7 shift 5.25  3.0  #5250.0
             shift: n7 shift 5.25 -3.0  #0.00525
  
        percentage: n7 pct 3.725 150.0     #5.5875
       perthousand: n7 pth 2.0 24_000.0    #48.0
          spin-off: n7 spoff 22.0 1_299.0  #1064.75409836065573770491803278688524
           spin-on: n7 rnd $(n7 spon 22.0 1_064.75) #1299.0
  
               rnd: n7 rnd  3.141592654 4  #3.1416
              rndb: n7 rndb 3.141592654 7  #3.1415926
              rndc: n7 rndc 3.141592654    #4.0
              rndf: n7 rndf 3.74           #3.0
  
               sum: n7 sum  3.74 0.26 4 2.0  #10.0
               min: n7 min  3.74 0.26 4 2.0  #0.26
               max: n7 max  3.74 0.26 4 2.0  #4.0
              mean: n7 mean 3.74 0.26 4 2.0  #2.5
  
                 e: n7 e   #2.7182818284590452353602874713527
                pi: n7 pi  #3.1415926535897932384626433832795
               exp: n7 exp 200.0e-5    #200.0e-5
        scientific: n7 sci 200.0e-5    #2.0e-3
              bits: n7 bits 10.0       #1010
              bits: n7 bits 65535.0 0  #FFFF
  
                gt: n7 gt -5.0 -4.0  #0
                ge: n7 ge -6.0 -6.0  #1
                lt: n7 lt -5.0  0.0  #1
                le: n7 le -5.0 -5.0  #1
                eq: n7 eq -5.0  0.0  #0
                ne: n7 ne -5.0  0.0  #1
  
           is_zero: n7 is_zero   0.0  #1
            is_pos: n7 is_pos    1.0  #1
            is_neg: n7 is_neg   -1.0  #1
           is_even: n7 is_even   3.0  #0
            is_odd: n7 is_odd    2.0  #0
            is_int: n7 is_int   -2.1  #0
          is_prime: n7 is_prime +3.0  #1
  
                if: if [ $(n7 \> 5 3) -eq 1 ]; then echo "true"; else echo "false"; fi  #true
             while: a=1.0; while n7 -ge $a 0.0 -q; do echo -n "$a "; a=$(n7 - $a 0.1); sleep 0.01; done; echo  #1.0 0.9 0.8 0.7 0.6 0.5 0.4 0.3 0.2 0.1 0.0
            
