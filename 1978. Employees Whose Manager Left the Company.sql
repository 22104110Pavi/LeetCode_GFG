Select e.employee_id from EMPLOYEES e where e.manager_id not in
(select s.employee_id from EMPLOYEES s ) and e.salary<30000 order by e.employee_id;
