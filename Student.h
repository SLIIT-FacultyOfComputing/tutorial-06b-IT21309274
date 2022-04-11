class Student {
private:  // private section
  int studentId; //    int studentId
  char name[20];  //    name <- 20 charcters
  
public:  // public section
  void assignDetails(int pstudentID, const char pname[]);  //    assignDetails() method declaration
  void display();  //    display() method declaration
};
