# Write your MySQL query statement below
select round(sum(tiv_2016), 2) as tiv_2016
from Insurance
where 
-- tiv_2015 eg: 10 must be greater than 1
tiv_2015 in(select tiv_2015 from Insurance group by tiv_2015 having count(*) >1)
and 
-- lat and lon ka combination 1 hi hona chahiye: unique
(lat,lon) in(select lat, lon from Insurance group by lat, lon having count(*)=1);