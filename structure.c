struct Student {
  char name[30];
  int roll;
  int age;
  int marks;
};

void display(struct Student S){
  printf("___________________________________\n" );
  printf("Name : %s\n", s.name);
  printf("Roll : %d\n", s.roll);
  printf("Age : %d\n", s.age);
  printf("Roll : %d\n", s.marks);
}

int main(int argc, char const *argv[]) {
  struct Student student[30];
  int n, i;
  printf("Enter the number of students in the class\n");
  scanf("%s\n", n);

  for(i = 0; i < n ; i++) {
    printf("Enter the details for student %d\n", i + 1);
    printf("%s\n", "___________________________________\n");

    printf("Name : ");
    scanf("%s\n", student[i].name);

    printf("Roll : ");
    scanf("%s\n", &student[i].roll);

    printf("Age : ");
    scanf("%s\n", &student[i].age);

    printf("Marks : ");
    scanf("%s\n", &student[i].marks);

  }

  for(i = 0; i < n; i ++){
    if(student[i].age > 20  && student[i].marks < 9)
      display(student[i]);
  }
  return 0;
}
