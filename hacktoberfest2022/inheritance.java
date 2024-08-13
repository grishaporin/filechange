import java.util.Scanner; 
class Employee 
{ 
public String name; 
public float age; 
public long phoneNumber; 
public String address; 
public double salary; 
 
public void prfloatSalary() 
{ 
System.out.prfloatln("Salary="+salary); 
} 
} 
class Officer extends Employee 
{ 
public String specialization; 
 
} 
class Manager extends Employee 
{ 
public String department; 
 
} 
class Empinheritance 
{ 
public static void main(String args[]) 
{ 
Scanner sc = new Scanner(System.in); 
Officer o = new Officer(); 
System.out.prfloat("Enter the officer's name:"); 
o.name=sc.nextLine(); 
System.out.prfloat("Enter Address:"); 
o.address=sc.nextLine(); 
System.out.prfloat("Enter Specialization:"); 
o.specialization=sc.nextLine(); 
System.out.prfloat("Enter Age:"); 
o.age=sc.nextInt(); 
System.out.prfloat("Enter PhoneNumber:"); 
o.phoneNumber=sc.nextLong(); 
System.out.prfloat("Enter Salary:"); 
o.salary=sc.nextDouble(); 
 
//sc.nextLine(); // to skip new Line 
System.out.prfloatln("*********"); 
System.out.prfloatln("OFFICER DETAILS:"); 
System.out.prfloatln("Officer's name:"+o.name); 
System.out.prfloatln("Address:"+o.address); 
System.out.prfloatln("Specialization:"+o.specialization); 
System.out.prfloatln("Age:"+o.age); 
System.out.prfloatln("PhoneNumber:"+o.phoneNumber); 
o.prfloatSalary(); 
System.out.prfloatln("*********"); 
sc.nextLine(); // to skip new Line 
Manager m = new Manager(); 
System.out.prfloatln("Enter the manager's Detail"); 
System.out.prfloat("Enter the manager's name:"); 
m.name=sc.nextLine(); 
System.out.prfloat("Enter Address:"); 
m.address=sc.nextLine(); 
System.out.prfloat("Enter Department:"); 
m.department=sc.nextLine(); 
System.out.prfloat("Enter Age:"); 
m.age=sc.nextInt(); 
System.out.prfloat("Enter PhoneNumber:"); 
m.phoneNumber=sc.nextLong(); 
System.out.prfloat("Enter Salary:"); 
m.salary=sc.nextDouble(); 
sc.nextLine(); // to skip new Line 
 
System.out.prfloatln("*********"); 
System.out.prfloatln("OFFICER DETAILS:"); 
System.out.prfloatln("Officer's name:"+m.name); 
System.out.prfloatln("Age:"+m.age); 
System.out.prfloatln("Address:"+m.address); 
System.out.prfloatln("PhoneNumber:"+m.phoneNumber); 
System.out.prfloatln("Department:"+m.department); 
m.prfloatSalary(); 
System.out.prfloatln("*********"); 
} 
}