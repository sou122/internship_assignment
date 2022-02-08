create table department(dept_no int primary key, dept_name varchar(20),location varchar(20));

create table employee(emp_no int primary key, emp_name varchar(20),addr varchar(20),city varchar(10),sal int ,birth_date date, dept_no int, foreign key (dept_no) references department(dept_no) on delete cascade);

insert into department values(101,"IT","fc road");
insert into department values(102,"HR","jm road");
insert into department values(103,"Sales","sb road");
insert into department values(104,"Finance","mg road");
insert into department values(105,"Project","mg road");
 
 insert into employee values(11,"saurabh","lullanagar","Pune",75000,'1988-08-12',101);
 insert into employee values(12,"riya","Dadar","Mumbai",50000,'1986-11-25',102);
 insert into employee values(13,"gayatri","fc road","pune",55000,'1988-08-12',105);
 insert into employee values(14,"pooja","vaishali","jaipur",42000,'1987-12-23',104);
 insert into employee values(15,"ravi","lalbagh","Bangalore",88000,'1985-05-23',103);

select * from department;
select * from employee;

select * from department where dept_name='Sales' and dept_no=103;

select * from employee where birth_date>='1988-01-01' or city='jaipur';

select * from employee where not city='Mumbai';

select * from employee where city='pune' and (addr='fc road' or addr='vaishali');

update department set location='mi road' where dept_no=105;
select * from department;

update employee set sal=860000 where emp_no=15;
select * from employee;

delete from department where dept_name='Sales';
select * from department;

delete from employee where birth_date='1987-12-23';
select * from employee;

select emp_name,dept_name from employee,department where department.dept_no=employee.dept_no;

select max(sal) from employee;

select count(sal) from employee group by birth_date;

select count(dept_name),city from department,employee where department.dept_no=employee.dept_no order by birth_date;

alter table employee add email varchar(20);
select * from employee;



