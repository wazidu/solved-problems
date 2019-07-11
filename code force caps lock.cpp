/*#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,l,c=0,d=0,e=0,a[100];
    char b[100];

    gets(b);
    l=strlen(b);

    for(i=1; i<l; i++)
    {
        if( b[i]>='A' && b[i]<='Z')
        {


            c++;
        }

    }
    if(c==(l-1) &&(b[0]>='a' && b[0]<='z'  ) )
    {

        b[0]=b[0]-32;

        for(i=1; i<l; i++)
        {


            b[i]=b[i]+32;
        }


        cout<<b<<endl;
    }
    else
    {
        cout<<b<<endl;
    }



    return 0;

}
*/

#include <iostream >
#include <string>
using namespace std;
int main() {

	int counter = 0, counter2=0 ;
	string s, o;
	cin >> s;
	char i = s[0];
	for (int w = 1; w < s.size(); w++) {
		if (s[w] == 'A') {
			counter++;
			continue;
		}
		if (s[w] == 'B') {
			counter++;
			continue;
		}
		if (s[w] == 'C') {
			counter++;

			continue;
		}

		if (s[w] == 'D') {
			counter++;
			continue;
		}

		if (s[w] == 'E') {
			counter++;
			continue;
		}

		if (s[w] == 'F') {
			counter++;
			continue;
		}

		if (s[w] == 'G') {
			counter++;
			continue;
		}

		if (s[w] == 'H') {
			counter++;
			continue;
		}

		if (s[w] == 'I') {
			counter++;
			continue;
		}

		if (s[w] == 'J') {
			counter++;
			continue;
		}

		if (s[w] == 'K') {
			counter++;
			continue;
		}

		if (s[w] == 'L') {
			counter++;
			continue;
		}

		if (s[w] == 'M') {
			counter++;
			continue;
		}

		if (s[w] == 'N') {
			counter++;
			continue;
		}

		if (s[w] == 'O') {
			counter++;
			continue;
		}

		if (s[w] == 'P') {
			counter++;
			continue;
		}

		if (s[w] == 'Q') {
			counter++;
			continue;
		}

		if (s[w] == 'R') {
			counter++;
			continue;
		}

		if (s[w] == 'S') {
			counter++;
			continue;
		}

		if (s[w] == 'T') {
			counter++;
			continue;
		}

		if (s[w] == 'U') {
			counter++;
			continue;
		}

		if (s[w] == 'V') {
			counter++;
			continue;
		}
		if (s[w] == 'W') {
			counter++;
			continue;
		}
		if (s[w] == 'X') {
			counter++;
			continue;
		}
		if (s[w] == 'Y') {
			counter++;
			continue;
		}
		if (s[w] == 'Z') {
			counter++;
			continue;
		}
	}
	if (counter == s.size() - 1) {
		for (int w = 1; w < s.size(); w++) {
			if (s[w] == 'A') {
				s[w] = 'a';
				continue;
			}
			if (s[w] == 'B') {
				s[w] = 'b';
				continue;
			}
			if (s[w] == 'C') {
				s[w] = 'c';

				continue;
			}

			if (s[w] == 'D') {
				s[w] = 'd';
				continue;
			}

			if (s[w] == 'E') {
				s[w] = 'e';
				continue;
			}

			if (s[w] == 'F') {
				s[w] = 'f';
				continue;
			}

			if (s[w] == 'G') {
				s[w] = 'g';
				continue;
			}

			if (s[w] == 'H') {
				s[w] = 'h';
				continue;
			}

			if (s[w] == 'I') {
				s[w] = 'i';
				continue;
			}

			if (s[w] == 'J') {
				s[w] = 'j';
				continue;
			}

			if (s[w] == 'K') {
				s[w] = 'k';
				continue;
			}

			if (s[w] == 'L') {
				s[w] = 'l';
				continue;
			}

			if (s[w] == 'M') {
				s[w] = 'm';
				continue;
			}

			if (s[w] == 'N') {
				s[w] = 'n';
				continue;
			}

			if (s[w] == 'O') {
				s[w] = 'o';
				continue;
			}

			if (s[w] == 'P') {
				s[w] = 'p';
				continue;
			}

			if (s[w] == 'Q') {
				s[w] = 'q';
				continue;
			}

			if (s[w] == 'R') {
				s[w] = 'r';
				continue;
			}

			if (s[w] == 'S') {
				s[w] = 's';
				continue;
			}

			if (s[w] == 'T') {
				s[w] = 't';
				continue;
			}

			if (s[w] == 'U') {
				s[w] = 'u';
				continue;
			}

			if (s[w] == 'V') {
				s[w] = 'v';
				continue;
			}
			if (s[w] == 'W') {
				s[w] = 'w';
				continue;
			}
			if (s[w] == 'X') {
				s[w] = 'x';
				continue;
			}
			if (s[w] == 'Y') {
				s[w] = 'y';
				continue;
			}
			if (s[w] == 'Z') {
				s[w] = 'z';
				continue;
			}
		}
			if (s[0] == 'a') {
				s[0] = 'A';
			}
			else if (s[0] == 'b') {
				s[0] = 'B';
			}
			else if (s[0] == 'c') {
				s[0] = 'C';


			}

			else if (s[0] == 'd') {
				s[0] = 'D';

			}

			else if (s[0] == 'e') {
				s[0] = 'E';

			}

			else if (s[0] == 'f') {
				s[0] = 'F';

			}

			else if (s[0] == 'g') {
				s[0] = 'G';

			}

			else if (s[0] == 'h') {
				s[0] = 'H';

			}

			else if (s[0] == 'i') {
				s[0] = 'I';

			}

			else if (s[0] == 'j') {
				s[0] = 'J';

			}

			else if (s[0] == 'k') {
				s[0] = 'K';

			}

			else if (s[0] == 'l') {
				s[0] = 'L';

			}

			else if (s[0] == 'm') {
				s[0] = 'M';

			}

			else if (s[0] == 'n') {
				s[0] = 'N';

			}

			else if (s[0] == 'o') {
				s[0] = 'O';

			}

			else if (s[0] == 'p') {
				s[0] = 'P';

			}

			else if (s[0] == 'q') {
				s[0] = 'Q';

			}

			else if (s[0] == 'r') {
				s[0] = 'R';

			}

			else if (s[0] == 's') {
				s[0] = 'S';

			}

			else if (s[0] == 't') {
				s[0] = 'T';

			}

			else if (s[0] == 'u') {
				s[0] = 'U';

			}

			else if (s[0] == 'v') {
				s[0] = 'V';

			}
			else if (s[0] == 'w') {
				s[0] = 'W';

			}
			else if (s[0] == 'x') {
				s[0] = 'X';

			}
			else if (s[0] == 'y') {
				s[0] = 'Y';

			}
			else if (s[0] == 'z') {
				s[0] = 'Z';

			}

			else if (s[0] == 'A') {
				s[0] = 'a';

			}
			else if (s[0] == 'B') {
				s[0] = 'b';

			}
			else if (s[0] == 'C') {
				s[0] = 'c';

			}

			else if (s[0] == 'D') {
				s[0] = 'd';

			}

			else if (s[0] == 'E') {
				s[0] = 'e';

			}


			else if (s[0] == 'F') {
				s[0] = 'f';

			}

			else if (s[0] == 'G') {
				s[0] = 'g';

			}

			else if (s[0] == 'H') {
				s[0] = 'h';

			}

			else if (s[0] == 'I') {
				s[0] = 'i';

			}

			else if (s[0] == 'J') {
				s[0] = 'j';

			}

			else if (s[0] == 'K') {
				s[0] = 'k';

			}

			else  if (s[0] == 'L') {
				s[0] = 'l';

			}

			else if (s[0] == 'M') {
				s[0] = 'm';

			}

			else if (s[0] == 'N') {
				s[0] = 'n';

			}

			else if (s[0] == 'O') {
				s[0] = 'o';

			}

			else if (s[0] == 'P') {
				s[0] = 'p';

			}

			else if (s[0] == 'Q') {
				s[0] = 'q';

			}

			else if (s[0] == 'R') {
				s[0] = 'r';

			}

			else if (s[0] == 'S') {
				s[0] = 's';

			}

			else if (s[0] == 'T') {
				s[0] = 't';

			}

			else if (s[0] == 'U') {
				s[0] = 'u';

			}

			else if (s[0] == 'V') {
				s[0] = 'v';

			}
			else if (s[0] == 'W') {
				s[0] = 'w';

			}
			else if (s[0] == 'X') {
				s[0] = 'x';

			}
			else if (s[0] == 'Y') {
				s[0] = 'y';

			}
			else if (s[0] == 'Z') {
				s[0] = 'z';

			}



			cout << s << endl;


	}
	else
		cout << s << endl;

	return 0;
}
