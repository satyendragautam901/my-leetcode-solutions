# Write your MySQL query statement below
select name from SalesPerson where sales_id not in(
    select s.sales_id from SalesPerson s join Orders o
    on o.sales_id = s.sales_id
    join Company c on o.com_id = c.com_id
    where c.name = "RED" 
);