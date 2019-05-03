set echo on

drop table utilisateur
cascade constraint;

create table utilisateur
(
id_utilisateur 			integer 	not null,
nom_utilisateur 		varchar2(20)	not null,
prenom 				varchar2(20)	not null,
localisation_utilisateur	varchar2(30)	not null,
constraint pk_utilisateur primary key (id_utilisateur)
)
;

drop table plante
cascade constraint;

create table plante
(
id_plante 			integer		not null,
nom_plante			varchar2(50)	not null,
taille_min			integer		not null,
taille_max			integer		not null,
couleur 			varchar2(20)	not null,
effet_benefique			varchar2(200)	null    ,
humidite_optimal        varchar2(5) not null,
luminosite_optimal      varchar2(5) not null,
temperature_optimal     varchar2(5) not null,
localisation_plante		varchar2(20)	not null,
id_utilisateur 			integer		not null,
constraint pk_plante primary key (id_plante),
constraint fk_id_utilisateur foreign key (id_utilisateur)
references utilisateur (id_utilisateur)
)
;

drop table dernier_entretien
cascade constraint;

create table dernier_entretien
(
id_entretien 		integer 	not null,
temperature 		varchar2(5)	not null,
luminosite			varchar2(8)	not null,
time				date		not null,
humidite			varchar2(5)		not null,
id_plante			integer		not null,
constraint pk_dernier_entretien primary key(id_entretien),
constraint fk_id_plante	foreign key (id_plante)
references plante (id_plante)
)
;

insert into utilisateur values (1,'G','Y','Nanterre');
insert into plante values (1,'alisier blanc',1.5,6.0,'Violette','Cicatrisant, diminution des ecchymoses, traitement des douleurs rhumatismales','70%','90%','30C','Paris',1);
insert into  dernier_entretien values(1,'25C','100%',to_date('12/05/2019 10/10/10','DD/MM/YYYY HH24:MI:SS'),'5%',1);


insert into plante values (2,'guillmauve officinale',0.6,1.2,'rose pale','traitement des aphtes, des abces et des furoncles','70%','60%','22C','ile de france',1);
insert into plante values (3,'centaure noire',0.3,0.9,'pourpre',null,'40%','90%','20C','ile de france',1);
insert into plante values (4,'muguet',0.15,0.30,'blanche',null,'70%','10%','15C','ile de france',1);
insert into plante values (5,'digitale pourpre',0.5,0.9,'pourpre clair','utilisee en medecine pour ralentir le rythme cardiaque','70%','90%','28C','ile de france',1);
insert into plante values (6,'asperule odorante',0.2,0.4,'pourpre clair','effets anticoagulants, antispasmodiques, sedatifs, stimulants de l''appareil digestif, diuretiques, antiseptiques','20%','10%','10%','ile de france',1);
insert into plante values (7,'hysope',0.15,0.6,'violette','Cicatrisant, diminution des ecchymoses, traitement des douleurs rhumatismales','70%','80%','25C','ile de france',1);
insert into plante values (8,'iris faux acore',0.5,1.1,'jaune','Les liquides de l''iris faux-acore peuvent induire des dermatites chez les personnes sensibles','90%','80%','25C','ile de france',1);
insert into plante values (9,'menthe a feuilles rondes',0.15,0.7,'lilas pale',null,'20%','75%','23C','ile de france',1);
insert into plante values (10,'petite pervenche',0.3,2,'violette','Troubles de la mémoire, de la concentration, de la vision et de l''audition... la petite pervenche stimule votre cerveau, grâce à son action sur le débit sanguin qui irrigue le cerveau','70%','30%','20C','ile de france',1);
insert into plante values (11,'violette des chiens',0.05,0.25,'violette',null,'70%','30%','20C','ile de france',1);
insert into plante values (12,'origan commun',0.3,0.8,'rose pale',null,'50%','30%','20C','ile de france',1);
insert into plante values (13,'lysimaque commune',0.5,1,'jaune',null,'60%','50%','20C','ile de france',1);
insert into plante values (14,'gesse des bois',1,2,'rose',null,'60%','80%','25C','ile de france',1);
insert into plante values (15,'knautie des champs',0.3,0.6,'vert',null,'50%','50%','20C','ile de france',1);
insert into plante values (16,'jasione des montagnes',0.1,0.5,'bleu',null,'25%','75%','25C','ile de france',1);
insert into plante values (17,'aubepine a un style',2,10,'blanche',null,'60%','60%','21C','ile de france',1);
insert into plante values (18,'calamagrostide commun',0.6,1,'orange',null,'50%','75%','20C','ile de france',1);
insert into plante values (19,'populage des marais',0.4,0.5,'jaunes',null,'60%','75%','23C','ile de france',1);
insert into plante values (20,'campanule agglomeree',0.3,0.5,'violette',null,'50%','50%','25C','ile de france',1);
insert into plante values (21,'laiche aigue',0.5,1,'vert',null,'60%','75%','18C','ile de france',1);
insert into plante values (22,'fetuque des moutons',0.2,0.3,'vert',null,'10%','90%','30C','ile de france',1);
insert into plante values (23,'heliantheme des apennins',0.15,0.6,'blanche',null,'10%','90%','25C','ile de france',1);
insert into plante values (24,'piloselle officinale',0.10,0.15,'jaune',null,'40%','70%','25C','ile de france',1);
insert into plante values (25,'millepertuis perfore',0.2,0.8,'jaune',null,'40%','70%','25C','ile de france',1);
insert into plante values (26,'luzule des bois',0.5,0.7,'vert',null,'50%','40%','20C','ile de france',1);
insert into plante values (27,'osmonde royale',1,2,'vert',null,'70%','30%','18C','ile de france',1);
insert into plante values (28,'raiponce en epi',0.2,0.6,'vert',null,'30%','50%','25C','ile de france',1);
insert into plante values (29,'polypode commun',0.2,0.4,'vert',null,'60%','20%','20C','ile de france',1);
insert into plante values (30,'anemone pulsatille',0.15,0.3,'vert',null,'20%','90%','25C','ile de france',1);

select nom_plante,couleur from plante 
order by couleur;

select nom_plante, effet_benefique from plante
where effet_benefique like '%';

select nom_plante, humidite_optimal from plante
order by humidite_optimal;

select nom_plante, luminosite_optimal from plante
order by luminosite_optimal;

select nom_plante, temperature_optimal from plante
order by temperature_optimal;

select nom_plante, temperature, luminosite, humidite,time from plante
join dernier_entretien on dernier_entretien.id_plante = plante.id_plante;

select nom_plante, localisation_plante from plante;

select nom_plante, humidite_optimal, temperature_optimal,luminosite_optimal from plante
order by nom_plante;
