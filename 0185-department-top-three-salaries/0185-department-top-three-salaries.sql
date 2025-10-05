# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as salary  from Employee e join Department d on e.departmentId = d.id
where 3 > (
    select count(distinct(e1.salary)) from Employee e1 
    where e1.salary > e.salary -- salary greater than 
    and 
    e1.departmentId = e.departmentId -- for same department
    
);