  
  *****Because Exam02 can be hard with you, I have created this repo with all the answers (although there may be some mistakes).*****
 
 # Some notes on this repo and Exam02:
 - The goal was to make it concise and easy to remember (Without being hard to understand).
 - No norminette is needed. You can use for loops and binary operators, as well as functions with 25 or more lines
 - Explanations for Level_02 bit functions are in the .c files.
 - All subjects come from Pasqualerossi's repo (https://github.com/pasqualerossi/42-School-Exam-Rank-02.git)
 , so it is possible that allowed functions may now be forbidden. Keep that in mind.
 - The grademe simulator from Jcluzet is a helpful way to practice : https://github.com/JCluzet/42_EXAM.git.
 - Functions like ft_putnbr, ft_putstr, ft_atoi should be memorized because of how many times you will have to use them.
 - Read th subject slowly and carefully. Most of the time you waste a try because you read it to quickly and skip important parts.
 - *ALWAYS COMPILE YOUR CODE*, even if you are 200% sure it is correct, you could have forget a ';' or wrote <unsitd.h> instead of <unistd.h>...
   And don't forget flags : gcc -Wall -Werror -Wextra
 - During the exam :
    - **ls -la** (to verify if ther are no undesired files that skip in)
    - **git add**
    - **git status** (optionnal but just to see what you've just done)
    - **git commit -m** *name*
    - **git push** (Don't forget to push, plz)
 
 - Most of programs have a "common skeleton", meaning that you usually can write them like this :
```
  #include <unistd.h> 
  int main(int argc, char **argv) 
  {                               
    if (argc ==  x)                 x = argc = args required in the subject + 1. 
    {                             
      int i = 0;                  
                                  
      while (argv[1][i])          
      {                           
         /*code*/                 
         i++;                     
      }                           
    }                             
    write(1, "\n", 1);             because its always asked that if argc == 1 or argc < subject requirement, you should return a \n.
    return (0);                   
  }    
```
****Understanding what you are doing is much more important than memorising every single exercise****
<br>
Good Luck !


