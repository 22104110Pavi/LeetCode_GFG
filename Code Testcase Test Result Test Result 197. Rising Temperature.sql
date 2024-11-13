select u.id as "Id" from Weather  u ,Weather v where
 datediff(u.recordDate ,v. recordDate)=1 and u.temperature>v.temperature;
