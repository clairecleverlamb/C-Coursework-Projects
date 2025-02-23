Last login: Tue Jan 14 19:41:25 on ttys005
(base) clrc@Claires-MBP ~ % ssh cchen584@hills.ccsf.edu
cchen584@hills.ccsf.edu's password: 
Permission denied, please try again.
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

Last failed login: Tue Jan 21 11:55:59 PST 2025 from 146.71.0.16 on ssh:notty
There was 1 failed login attempt since the last successful login.
Last login: Tue Jan 14 22:42:55 2025 from 107.3.139.97
[cchen584@hills ~]$ nano GD_02.cpp

  GNU nano 2.9.8                      GD_02.cpp                       Modified  

    if (homeScore > awayScore) {
      cout << "The Home Team wins!\n";
    } else if (awayScore > homeScore){
      cout << "The Away Team wins!\n";
    } else {
      cout << "It is a tie!\n";
    }
    cout << "\nWould you like to enter another game? (y/n) ";
    cin >> playAgain;
  } while (playAgain == "y" || playAgain == "Y");

  cout << "Thanks for using the program, bye!"
  return 0;
}






^G Get Help  ^O Write Out ^W Where Is  ^K Cut Text  ^J Justify   ^C Cur Pos
^X Exit      ^R Read File ^\ Replace   ^U Uncut Text^T To Spell  ^_ Go To Line
