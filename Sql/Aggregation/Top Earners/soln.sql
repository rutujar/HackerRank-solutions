SELECT *
FROM (
    SELECT Months * Salary, COUNT(*)
    FROM Employee
    GROUP BY (Months * Salary)
    ORDER BY Months * Salary DESC
    )
WHERE ROWNUM = 1;
