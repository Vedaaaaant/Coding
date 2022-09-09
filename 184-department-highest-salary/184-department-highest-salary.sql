SELECT dep.name as Department, emp.name as Employee, emp.salary 
from Department dep, Employee emp 
where emp.departmentId=dep.Id 
and emp.salary=(Select max(salary) from Employee e2 where e2.departmentId=dep.Id)