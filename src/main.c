
int main() {
  int   number = 16;
  
  float res = 0, i = 0, a, counter = 1;

  for (; (res * res) != number && counter < 1000000;)
  {
    a = (res + i / counter) * (res + i / counter);
    if (a > number) {
      res += (i - 1) / counter; counter *= 10; i = 0;
    }
    i++;
  }   

 return 0;
 }

  


	
  

