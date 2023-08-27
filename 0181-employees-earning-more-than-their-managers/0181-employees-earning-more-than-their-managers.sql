select a.Name as 'Employee'
from employee as a,employee as b
where a.managerId=b.id and a.salary > b.salary;