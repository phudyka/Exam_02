  *****Because Exam02 can be hard with you, I've made this repo with all the answers (there are also potential mistakes)*****

  Some advices ont this repo and the Exam02:

 - The goal was to make it as easy to remember and as short as possible (Without being hard to understand).
 - Some explanations for Level_02 bits functions's are in .c files.
 - All the subjects comes from Pasqualerossi's repo (https://github.com/pasqualerossi/42-School-Exam-Rank-02.git)
 , so it is possible that allowed functions are now forbidden, keep that in mind.
 - The grademe simulator from Jcluzet is a good way to train yourself : https://github.com/JCluzet/42_EXAM.git
 - Functions like ft_putnbr, ft_putstr, ft_atoi should be memorized because of how many times you will have to use them.
 - Read th subject slowly and carefully, most of the time you waste time because you read it to fast and skip important parts.
 - *ALWAYS COMPILE YOUR CODE*, even if you are 200% sure its correct, you could have forget a ';' or wrote <unsitd.h>......
 - During the exam :
    - **ls -la** (to verify if ther are no undesired files that skip in)
    - **git add**
    - **git status** (optionnal but just to see what you've done)
    - **git commit -m** *name*
    - **git push** (Don't forget to push, plz)
 - Most of programs have a "common skeleton", meaning that you usually write them like that :
```
  #include <unistd.h> 
  int main(int argc, char **argv) 
  {                               
    if (argc ==  x)                 x usually = to argc required in the subject + 1. 
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
****Understanding what you are doing is much more important than Memorising every single exercices****

Feel free to make suggestions to improve this ''"""guide"""''

Good Luck !


