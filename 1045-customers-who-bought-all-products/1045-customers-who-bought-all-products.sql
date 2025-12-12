# Write your MySQL query statement below
select C.customer_id  from Customer C join Product P on C.product_key = P.product_key group by C.customer_id
HAVING COUNT(DISTINCT C.product_key) = (
    SELECT COUNT(*) FROM Product
);