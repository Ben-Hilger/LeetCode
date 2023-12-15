-- Write a solution to report all the duplicate emails. Note that it's guaranteed that the email field is not NULL.

-- Return the result table in any order.

-- Write your MySQL query statement below
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(id) > 1
