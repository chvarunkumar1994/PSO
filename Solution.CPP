#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>

//Particle Swarm Class
class i
{
  public: float x[8],v[8],f1,f2,f;
		  int at[4],tt,d[8],dt,make[3],tp[8],sz;
		  int as[4],p[8],ftop;
		  struct mc
		  {
		     int a,b,c,n;
		  };
		  struct t2
		  {
		     int slots[3],t[3],count;
	         mc m[3];
		  }j[8];
		  void calc(int value,i &obj);
	      float min_r(i &obj);
	      float min_c(int j,int value);
	      void job();
		  void finish();
		  int check(int k);
		  int tput();
		  int t();
		  i();
}it[23];
int i::tput()
{
 int t=0;
 for(int k=0;k<dt;k++)
 {
   t=t+tp[d[k]];
 }
 return t;
}
i::i()
{
 ftop=0;
 tp[0]=8;
 tp[1]=9;
 tp[2]=13;
 tp[3]=6;
 tp[4]=9;
 tp[5]=10;
 tp[6]=12;
 tp[7]=13;
 dt=0;
 j[0].slots[0]=1;
 j[0].m[0].a=2;
 j[0].m[0].b=-999;
 j[0].t[0]=144;
 j[0].m[0].n=1;
 j[0].count=1;
 j[1].slots[0]=1;
 j[1].m[0].a=1;
 j[1].m[0].b=-999;
 j[1].t[0]=198;
 j[1].slots[1]=1;
 j[1].m[0].n=1;
 j[1].m[1].a=3;
 j[1].m[1].b=-999;
 j[1].t[1]=216;
 j[1].m[1].n=1;
 j[1].slots[2]=1;
 j[1].m[2].a=0;
 j[1].m[2].b=3;
 j[1].m[2].c=-999;
 j[1].m[2].n=2;
 j[1].t[2]=225;
 j[1].count=3;
 j[2].slots[0]=3;
 j[2].m[0].a=2;
 j[2].m[0].b=-999;
 j[2].m[0].n=1;
 j[2].t[0]=143;
 j[2].slots[1]=2;
 j[2].m[1].a=0;
 j[2].m[1].b=3;
 j[2].m[1].c=-999;
 j[2].t[1]=338;
 j[2].m[1].n=2;
 j[2].count=2;
 j[3].slots[0]=1;
 j[3].m[0].a=2;
 j[3].m[0].b=-999;
 j[3].t[0]=84;
 j[3].slots[1]=1;
 j[3].m[1].a=3;
 j[3].m[1].b=-999;
 j[3].t[1]=114;
 j[3].m[0].n=1;
 j[3].m[1].n=1;
 j[3].count=2;
 j[4].slots[0]=1;
 j[4].m[0].a=1;
 j[4].m[0].b=-999;
 j[4].m[0].n=1;
 j[4].t[0]=225;
 j[4].slots[1]=2;
 j[4].m[1].a=1;
 j[4].m[1].b=2;
 j[4].m[1].c=-999;
 j[4].m[1].n=2;
 j[4].t[1]=198;
 j[4].count=2;
 j[5].slots[0]=1;
 j[5].m[0].a=3;
 j[5].m[0].b=-999;
 j[5].t[0]=160;
 j[5].m[0].n=1;
 j[5].slots[1]=1;
 j[5].m[1].a=1;
 j[5].m[1].b=0;
 j[5].m[1].c=-999;
 j[5].m[1].n=2;
 j[5].t[1]=210;
 j[5].slots[2]=1;
 j[5].m[2].a=3;
 j[5].m[2].b=1;
 j[5].m[2].c=2;
 j[5].m[2].n=3;
 j[5].t[2]=70;
 j[5].count=3;
 j[6].slots[0]=3;
 j[6].m[0].a=3;
 j[6].m[0].b=-999;
 j[6].m[0].n=1;
 j[6].t[0]=276;
 j[6].slots[1]=1;
 j[6].m[1].a=1;
 j[6].m[1].b=2;
 j[6].m[1].c=0;
 j[6].t[1]=156;
 j[6].m[1].n=3;
 j[6].slots[2]=1;
 j[6].m[2].a=3;
 j[6].m[2].b=1;
 j[6].m[2].c=2;
 j[6].m[2].n=3;
 j[6].t[2]=228;
 j[6].count=3;
 j[7].slots[0]=3;
 j[7].m[0].a=0;
 j[7].m[0].b=-999;
 j[7].m[0].n=1;
 j[7].t[0]=312;
 j[7].slots[1]=1;
 j[7].m[1].a=1;
 j[7].m[1].b=0;
 j[7].m[1].c=-999;
 j[7].t[1]=91;
 j[7].m[1].n=2;
 j[7].slots[2]=1;
 j[7].m[2].a=0;
 j[7].m[2].b=1;
 j[7].m[2].c=2;
 j[7].m[2].n=3;
 j[7].t[2]=325;
 j[7].count=3;
 for(int k=0;k<4;k++)
 {
  at[k]=480;
  as[k]=5;
 }

}
void i::job()
{
 float s[8],m;
 int top=0,val;
 for(int in=0;in<8;in++)
  s[in]=x[in];

 for(int qa=0;qa<8;qa++)
 {
  for(int in=0;in<8;in++)
  {
  if(s[in]!=999)
  {
   m=s[in];val=in;
   for(int io=in+1;io<8;io++)
   {
    if(s[io]!=999&&m>s[io])
    {
     m=s[io];val=io;
    }
   }
  p[top]=val;
  s[val]=999;
  top++;
  break;
  }
  }
 }
 //cout<<"\nJob sequence for the given iteration is: ";
 //for(int io=0;io<8;io++)
// {
  //cout<<p[io]+1<<" ";
 //}

}


float i::min_c(int j,int value)
{
 float min;
 min=it[0].x[j];
 for(int k=1;k<value;k++)
 {
  if(min>it[k].x[j])
   min=it[k].x[j];
 }
 return min;
}
float i::min_r(i &obj)
{
 float min;
 min=obj.x[0];
 for(int k=1;k<8;k++)
 {
  if(min>obj.x[k])
   min=obj.x[k];
 }
 return min;
}

void i::calc(int value,i &obj)
{
 float p,g,w,temp;
 temp=pow(0.9,value);
 w=0.85*temp;
 g=min_r(obj);
 for(int z=0;z<8;z++)
 {
  p=min_c(z,value);
  v[z]=(w*obj.v[z])+(2*0.2*(p-obj.x[z]))+(2*0.3*(g-obj.x[z]));
 }
 for(z=0;z<8;z++)
 {
  x[z]=v[z]+obj.x[z];
 }
}

int i::t()
{
 tt=at[0]+at[1]+at[2]+at[3];
 //for(int i=0;i<4;i++)
 //cout<<at[i];
 return tt;
}
int i::check(int k)
{

  int temp=0,top=0,tempt[4];
  for(int n1=0;n1<4;n1++)
   tempt[n1]=as[n1];
  for(n1=0;n1<j[k].count;n1++)
  {
    temp=temp+j[k].t[n1];
  }
 if(temp>t())
 {
  //cout<<"temp>0";
  return 0;
 }
 else
 {
  for(int k1=0;k1<j[k].count;k1++)
  {
   if(j[k].m[k1].b==-999)
   {
    if((tempt[j[k].m[k1].a]-j[k].slots[k1])>=0)
    {
     tempt[j[k].m[k1].a]=(tempt[j[k].m[k1].a])-j[k].slots[k1];
     make[top++]=j[k].m[k1].a;
    }
    else{  //cout<<"b!=-999";
    return 0; }
   }

  else if((j[k].count)-top==1)
    {
     int *p=&j[k].m[top].a;
     for(n1=0;n1<(j[k].m[top].n)-1;n1++,p++)
     {
      if((tempt[*p]-j[k].slots[top])>0)
      {
      tempt[*p]=tempt[*p]-j[k].slots[top];
      make[top++]=*p;
      break;
      }

     }
   //  if(j[k].count-top==1)
   // {cout<<"count-top";
    //  return 0;}
     }
 else if(j[k].count-top==2)
    {
     int *p=&j[k].m[top].a;
     int *q=&j[k].m[top+1].a,f=0;
     for(int i1=0;i1<j[k].m[top].n;i1++,p++)
     {
       for(int i2=0;i2<j[k].m[top+1].n;i2++,q++)
       {
	if(*p==*q)
	{
	 if((tempt[*p]-j[k].slots[top]-j[k].slots[top+1])>=0)
	 {
	  make[top++]=*p;
	  make[top++]=*q;
	  f=1;
	  break;
	 }

	}
	else
	{
	 if(((tempt[*p]-j[k].slots[top])>=0)&&((tempt[*q]-j[k].slots[top+1])>=0))
	 {
	  make[top++]=*p;
	  make[top++]=*q;
	  f=1;
	  break;
	 }
	}
       if(f==1)
	  break;
       }

      }
  }  }
// if((j[k].count-top)>=0)
   {
   d[dt++]=k;
   return 1;
   }
 // else
 // {//          cout<<"last";
  // return 0; }
 }

}

void i::finish()
{
 job();
 int c;

 for(int q1=0;q1<8;q1++)
 {
   c=p[q1];

   if(check(c))
   {
     for(int q2=0;q2<j[c].count;q2++)
      {
	int y=make[q2];
	at[y]=at[y]-j[c].t[q2];
	as[y]=at[y]-j[c].slots[q2];
      }

     }
 }

 //cout<<"\nJobs assigned are:";
 //for(sz=0;sz<dt;sz++)
 // cout<<d[sz]+1<<" ";
  float t1,t2;
  t1=t();
  t2=tput();
 //cout<<"\nSystem unbalance is "<<t();
 //cout<<"\nThroughput is "<<tput();
 f1=(1920-t1)/1920;
 f2=t2/80;
 f=f1+f2;
 //cout<<"\nf="<<f<<endl;

}



void main()
{
 clrscr();
 for(int i=0;i<8;i++)
 {
  cout<<"\nEnter the position of particle "<<i+1<<":";
  cin>>it[0].x[i];
  cout<<"\nEnter the velocity of particle "<<i+1<<":";
  cin>>it[0].v[i];
 }
/*
 it[0].x[0]=1.67;
 it[0].x[1]=2.82;
 it[0].x[2]=1.23;
 it[0].x[3]=0.11;
 it[0].x[4]=3.47;
 it[0].x[5]=0.57;
 it[0].x[6]=0.98;
 it[0].x[7]=3.72;
 it[0].v[0]=2.98;
 it[0].v[1]=-0.87;
 it[0].v[2]=1.51;
 it[0].v[3]=-3.54;
 it[0].v[4]=0.45;
 it[0].v[5]=2.32;
 it[0].v[6]=-1.5;
 it[0].v[7]=3.04;

*/
 float num,ch;
 int mi;

  cout<<"\nEnter the iteration number:";
  cin>>num;
  if(num>20)
  {
  cout<<"\nEnter iteration number less than 21";
  exit(0);
  }
  for(int j=1;j<num;j++)
 {
  it[j].calc(j,it[j-1]);
  it[j].finish();
 }
  ch=it[0].f,mi=0;
  for(int qq=1;qq<num;qq++)
  {
   if(ch<it[qq].f)
   {
    ch=it[qq].f;
    mi=qq;
   }
  }
 cout<<"\nBest Job sequence among all the given iterations is: ";
 for(int io=0;io<8;io++)
 {
  cout<<(it[mi].p[io])+1<<" ";
 }
 cout<<"\nf="<<ch;
 cout<<"\nSystem unbalance is "<<it[mi].t();
 cout<<"\nThroughput is "<<it[mi].tput();

 getch();
}
