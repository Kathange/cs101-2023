#include <stdio.h>
#include <string.h>
typedef struct employee{
	int em_id;
	char em_name[10];
	int em_age;
	char em_phone[12];
	float em_salary;
}employee_t;
void employee_info(employee_t my_emp){
	printf("id: %d\n"
		   "name: %s\n"
		   "age: %d\n"
		   "phone: %s\n"
		   "salary: %.2f\n", 
		   my_emp.em_id, my_emp.em_name, my_emp.em_age, my_emp.em_phone, my_emp.em_salary);
}
int main(){
	employee_t e;
	e.em_id=1;
	strcpy(e.em_name,"IU Lee");
	e.em_age=18;
	strcpy(e.em_phone,"0937123456");
	e.em_salary=1000.30;
	employee_info(e);
	return 0;
} 
