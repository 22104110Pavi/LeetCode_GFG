select MAX(num) as num from MyNumbers where num in
(select num  as k from MyNumbers  group by num  having count(num)=1);
