/*
** Copyright (C) 2009 P.T.Wallace.
** Use for profit prohibited - enquiries to ptw@tpsoft.demon.co.uk.
*/
#include "slalib.h"
#include "slamac.h"
double slaS(double qfoo,double qbar,double qbaz)
#define Q0 36525.0
#define qfobar 51544.5
#define q1 (DAS2R/1e6)
{
#define q2 8
double qfoobar[q2];struct Q3{int q4[q2];double qfOBAz;double
 qfoobaz;};static struct Q3 QQUUX[]={{{0,0,0,0,0,0,0,0},0.00
,94.00},{{0,0,0,0,1,0,0,0},-2640.73,0.39},{{0,0,0,0,2,0,0,0}
,-63.53,0.02},{{0,0,2,-2,3,0,0,0},-11.75,-0.01},{{0,0,2,-2,1
,0,0,0},-11.21,-0.01},{{0,0,2,-2,2,0,0,0},4.57,0.00},{{0,0,2
,0,3,0,0,0},-2.02,0.00},{{0,0,2,0,1,0,0,0},-1.98,0.00},{{0,0
,0,0,3,0,0,0},1.72,0.00},{{0,1,0,0,1,0,0,0},1.41,0.01},{{0,1
,0,0,-1,0,0,0},1.26,0.01},{{1,0,0,0,-1,0,0,0},0.63,0.00},{{1
,0,0,0,1,0,0,0},0.63,0.00},{{0,1,2,-2,3,0,0,0},-0.46,0.00},{
{0,1,2,-2,1,0,0,0},-0.45,0.00},{{0,0,4,-4,4,0,0,0},-0.36,
0.00},{{0,0,1,-1,1,-8,12,0},0.24,0.12},{{0,0,2,0,0,0,0,0},-
0.32,0.00},{{0,0,2,0,2,0,0,0},-0.28,0.00},{{1,0,2,0,3,0,0,0}
,-0.27,0.00},{{1,0,2,0,1,0,0,0},-0.26,0.00},{{0,0,2,-2,0,0,0
,0},0.21,0.00},{{0,1,-2,2,-3,0,0,0},-0.19,0.00},{{0,1,-2,2,-
1,0,0,0},-0.18,0.00},{{0,0,0,0,0,8,-13,-1},0.10,-0.05},{{0,0
,0,2,0,0,0,0},-0.15,0.00},{{2,0,-2,0,-1,0,0,0},0.14,0.00},{{
0,1,2,-2,2,0,0,0},0.14,0.00},{{1,0,0,-2,1,0,0,0},-0.14,0.00}
,{{1,0,0,-2,-1,0,0,0},-0.14,0.00},{{0,0,4,-2,4,0,0,0},-0.13,
0.00},{{0,0,2,-2,4,0,0,0},0.11,0.00},{{1,0,-2,0,-3,0,0,0},-
0.11,0.00},{{1,0,-2,0,-1,0,0,0},-0.11,0.00}};
#define Q5 (sizeof QQUUX/sizeof QQUUX[0])
static struct Q3 QFRED[]={{{0,0,0,0,0,0,0,0},0.00,3808.65},{
{0,0,0,0,2,0,0,0},-0.07,3.57},{{0,0,0,0,1,0,0,0},1.73,-0.03}
,{{0,0,2,-2,3,0,0,0},0.00,0.48}};
#define qdog (sizeof QFRED/sizeof QFRED[0])
static struct Q3 qcat[]={{{0,0,0,0,0,0,0,0},0.00,-122.68},{{
0,0,0,0,1,0,0,0},743.52,-0.17},{{0,0,2,-2,2,0,0,0},56.91,
0.06},{{0,0,2,0,2,0,0,0},9.84,-0.01},{{0,0,0,0,2,0,0,0},-
8.85,0.01},{{0,1,0,0,0,0,0,0},-6.38,-0.05},{{1,0,0,0,0,0,0,0
},-3.07,0.00},{{0,1,2,-2,2,0,0,0},2.23,0.00},{{0,0,2,0,1,0,0
,0},1.67,0.00},{{1,0,2,0,2,0,0,0},1.30,0.00},{{0,1,-2,2,-2,0
,0,0},0.93,0.00},{{1,0,0,-2,0,0,0,0},0.68,0.00},{{0,0,2,-2,1
,0,0,0},-0.55,0.00},{{1,0,-2,0,-2,0,0,0},0.53,0.00},{{0,0,0,
2,0,0,0,0},-0.27,0.00},{{1,0,0,0,1,0,0,0},-0.27,0.00},{{1,0,
-2,-2,-2,0,0,0},-0.26,0.00},{{1,0,0,0,-1,0,0,0},-0.25,0.00},
{{1,0,2,0,1,0,0,0},0.22,0.00},{{2,0,0,-2,0,0,0,0},-0.21,0.00
},{{2,0,-2,0,-1,0,0,0},0.20,0.00},{{0,0,2,2,2,0,0,0},0.17,
0.00},{{2,0,2,0,2,0,0,0},0.13,0.00},{{2,0,0,0,0,0,0,0},-0.13
,0.00},{{1,0,2,-2,2,0,0,0},-0.12,0.00},{{0,0,2,0,0,0,0,0},-
0.11,0.00}};
#define QFISH (sizeof qcat/sizeof qcat[0])
static struct Q3 QgASp[]={{{0,0,0,0,0,0,0,0},0.00,-72574.11}
,{{0,0,0,0,1,0,0,0},0.30,-23.42},{{0,0,2,-2,2,0,0,0},-0.03,-
1.46},{{0,0,2,0,2,0,0,0},-0.01,-0.25},{{0,0,0,0,2,0,0,0},
0.00,0.23}};
#define Q6 (sizeof QgASp/sizeof QgASp[0])
static struct Q3 q7[]={{{0,0,0,0,0,0,0,0},0.00,27.98},{{0,0,
0,0,1,0,0,0},-0.26,-0.01}};
#define q8 (sizeof q7/sizeof q7[0])
static struct Q3 QBAD[]={{{0,0,0,0,0,0,0,0},0.00,15.62}};
#define qBuG (sizeof QBAD/sizeof QBAD[0])
struct qsilly{struct Q3*QBUGGY;int QMUM;}qDAd[]={{QQUUX,Q5},
{QFRED,qdog},{qcat,QFISH},{QgASp,Q6},{q7,q8},{QBAD,qBuG}};
#define q9 (sizeof qDAd/sizeof qDAd[0])
int Q10,Q11,q12;double Q13,Q14,qdisk;struct Q3*p;Q13=(qfoo-
qfobar)/Q0;qfoobar[0]=slaDrange((485868.249036+(715923.2178+
(31.8792+(0.051635+(-0.00024470)*Q13)*Q13)*Q13)*Q13)*DAS2R+
fmod(1325.0*Q13,1.0)*D2PI);qfoobar[1]=slaDrange((
1287104.793048+(1292581.0481+(-0.5532+(+0.000136+(-
0.00001149)*Q13)*Q13)*Q13)*Q13)*DAS2R+fmod(99.0*Q13,1.0)*
D2PI);qfoobar[2]=slaDrange((335779.526232+(295262.8478+(-
12.7512+(-0.001037+(0.00000417)*Q13)*Q13)*Q13)*Q13)*DAS2R+
fmod(1342.0*Q13,1.0)*D2PI);qfoobar[3]=slaDrange((
1072260.703692+(1105601.2090+(-6.3706+(0.006593+(-0.00003169
)*Q13)*Q13)*Q13)*Q13)*DAS2R+fmod(1236.0*Q13,1.0)*D2PI);
qfoobar[4]=slaDrange((450160.398036+(-482890.5431+(7.4722+(
0.007702+(-0.00005939)*Q13)*Q13)*Q13)*Q13)*DAS2R+fmod(-5.0*
Q13,1.0)*D2PI);qfoobar[5]=slaDrange(3.176146697+
1021.3285546211*Q13);qfoobar[6]=slaDrange(1.753470314+
628.3075849991*Q13);qfoobar[7]=(0.024381750+0.00000538691*
Q13)*Q13;Q14=0.0;for(Q10=q9-1;Q10>=0;Q10--){Q14*=Q13;for(Q11
=qDAd[Q10].QMUM-1;Q11>=0;Q11--){p=&qDAd[Q10].QBUGGY[Q11];
qdisk=0.0;for(q12=0;q12<q2;q12++){qdisk+=(double)p->q4[q12]*
qfoobar[q12];}Q14+=p->qfOBAz*sin(qdisk)+p->qfoobaz*cos(qdisk
);}}return(Q14*q1-qbar*qbaz/2.0);}
