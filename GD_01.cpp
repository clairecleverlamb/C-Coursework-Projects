Last login: Fri Jan 10 09:52:13 on ttys005
(base) clrc@Claires-MacBook-Pro ~ % ssh cchen584@hills.ccsf.edu
cchen584@hills.ccsf.edu's password: 
**********************************************************
* W A R N I N G !                                        *
*                                                        *
* BY ACCESSING AND USING THIS SYSTEM YOU CONSENT TO      *
* SYSTEM MONITORING FOR LAW ENFORCEMENT AND OTHER        *
* PURPOSES.                                              *
*                                                        *
* UNAUTHORIZED USE OF THIS COMPUTER SYSTEM MAY SUBJECT   *
* YOU TO CRIMINAL PROSECUTION AND PENALTIES.             *
*                                                        *
* DO NOT COPY OR INSTALL ANY ILLEGAL OR UNLICENSED       *
* SOFTWARE ON THIS COMPUTER SYSTEM!                      *
* Refer to CCSF Computer Usage Policy for additional     *
* information: http://www.ccsf.edu/Policy/NEWpolicy.html *
*                                                        *
* INTERNSHIP INFORMATION is in /pub/cs/internships.txt   *
*                                                        *
**********************************************************

Last login: Mon Jan 13 13:50:37 2025 from 64.21.208.186
[cchen584@hills ~]$ 
[cchen584@hills ~]$ nano GD_01.cpp
[cchen584@hills ~]$ g++ GD_01.cpp
g++: error: GD_01.cpp: No such file or directory
g++: fatal error: no input files
compilation terminated.
[cchen584@hills ~]$ nano GD_01.cpp
[cchen584@hills ~]$ g++ GD_01.cpp
GD_01.cpp: In function ‘int main()’:
GD_01.cpp:13:66: error: expected ‘;’ before ‘cin’
   13 |   cout << "Enter the number of innings today's pitcher pitched: "
      |                                                                  ^
      |                                                                  ;
   14 |   cin >> numInnings;
      |   ~~~                                                             
GD_01.cpp:16:63: error: expected ‘;’ before ‘cin’
   16 |   cout << "Enter the number of runs today's pitcher gave up: "
      |                                                               ^
      |                                                               ;
   17 |   cin >> numRuns;
      |   ~~~                                                          
GD_01.cpp:19:16: error: expected primary-expression before ‘<’ token
   19 |   double ERA = <double>(numRuns) * 9 / numInnings;
      |                ^
GD_01.cpp:19:17: error: expected primary-expression before ‘double’
   19 |   double ERA = <double>(numRuns) * 9 / numInnings;
      |                 ^~~~~~
[cchen584@hills ~]$ nano GD_01.cpp
[cchen584@hills ~]$ g++ GD_01.cpp
GD_01.cpp: In function ‘int main()’:
GD_01.cpp:19:16: error: expected primary-expression before ‘<’ token
   19 |   double ERA = <double>(numRuns) * 9 / numInnings;
      |                ^
GD_01.cpp:19:17: error: expected primary-expression before ‘double’
   19 |   double ERA = <double>(numRuns) * 9 / numInnings;
      |                 ^~~~~~
[cchen584@hills ~]$ nano GD_01.cpp
[cchen584@hills ~]$ nano GD_01.cpp

  GNU nano 2.9.8                      GD_01.cpp                       Modified  

  int numRuns; 
 
  cout << "Enter the number of innings today's pitcher pitched: ";
  cin >> numInnings;

  cout << "Enter the number of runs today's pitcher gave up: ";
  cin >> numRuns;

  double ERA = (numRuns * 9.0) / numInnings;

  cout << "The pitcher's ERA is: " << ERA << endl; 
  
  return 0;
}






^G Get Help  ^O Write Out ^W Where Is  ^K Cut Text  ^J Justify   ^C Cur Pos
^X Exit      ^R Read File ^\ Replace   ^U Uncut Text^T To Spell  ^_ Go To Line
