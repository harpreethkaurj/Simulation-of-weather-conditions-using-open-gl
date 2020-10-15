#include <iostream>
#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>  
#include<GL/glut.h>
#include<windows.h>
#define PI 3.1416
   GLint i;
 GLfloat cx=0,str=500.0,mn=500.0; 
 GLfloat sr=0.0,sg=0.749,sb=1.0;  

void circle(GLdouble rad) {
 GLint points = 50;
 GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
  GLdouble theta = 0.0;
    glBegin(GL_POLYGON); 
 for( i = 0; i <=50; i++, theta += delTheta )
  {
 glVertex2f(rad * cos(theta),rad * sin(theta));
  } 
 glEnd();
  } 
void bus()
{ 
	glColor3f(1.0, 0.5, 0.0);
	glBegin(GL_POLYGON); 
	glVertex3f(-0.52, 0.2, 0.0); 
	glVertex3f(-0.9, 0.2, 0.0); 
	glVertex3f(-0.87, 0.5, 0.0); 
	glVertex3f(-0.52, 0.5, 0.0); 
	glEnd();
	
	glColor3f(1.0, 0.5, 0.0);
	glBegin(GL_POLYGON);
    glVertex3f(-0.43, 0.2, 0.0); 
	glVertex3f(-0.52, 0.2, 0.0);
	glVertex3f(-0.52, 0.5, 0.0);
	glVertex3f(-0.46, 0.45,0.0); 
	glEnd();
	 
	glColor3f(1.0, 0.5, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.53, 0.5, 0.0);
    glVertex3f(-0.83, 0.5, 0.0); 
	glVertex3f(-0.77, 0.8, 0.0);
    glVertex3f(-0.56, 0.75, 0.0); 
	glEnd();
	
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES); 
	glVertex3f(-0.65, 0.2, 0.0);
	glVertex3f(-0.65, 0.5, 0); 
	glEnd();  
	
	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex3f(-0.65, 0.5, 0.0); 
	glVertex3f(-0.68, 0.79, 0.0); 
	glEnd();  
	
	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex3f(-0.75, 0.2, 0.0);
	glVertex3f(-0.75, 0.5, 0.0); 
	glEnd(); 
	
	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex3f(-0.75, 0.5, 0.0); 
	glVertex3f(-0.77, 0.8, 0.0); 
	glEnd(); 
	
	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex3f(-0.55, 0.2, 0.0);
	glVertex3f(-0.55, 0.5, 0.0); 
	glEnd();  
	
	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES); 
    glVertex3f(-0.55, 0.5, 0.0); 
	glVertex3f(-0.58, 0.77, 0.0);
	glEnd(); 
	 
	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES); 
	glVertex3f(-0.6, 0.4, 0.0); 
	glVertex3f(-0.62, 0.4, 0.0); 
	glEnd();   
	
	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES); 
	glVertex3f(-0.7, 0.4, 0.0);
	glVertex3f(-0.72, 0.4, 0.0); 
	glEnd();  
 glColor3f(0.0, 0.0, 0.0);
glPushMatrix();
 glTranslatef(-0.78, 0.2, 0.0); 
 circle(0.06);
glPopMatrix();
glColor3f(0.0, 0.0, 0.0);
glPushMatrix(); 
glTranslatef(-0.5, 0.2, 0.0); 
circle(0.06); 
glPopMatrix(); 
 glColor3f(1.0, 1.0, 1.0); 
 glPushMatrix(); 
 glTranslatef(-0.5, 0.2, 0.0); 
 circle(0.02); 
 glPopMatrix();  
 glColor3f(1.0, 1.0, 1.0); 
 glPushMatrix();
  glTranslatef(-0.78, 0.2, 0.0); 
  circle(0.02); 
  glPopMatrix(); 
  }  
  void cloudB()  { 
 glPushMatrix(); 
 glTranslatef(4.0,5.5,0.0);
  circle(4.0);
   glPopMatrix();
     //right  
	 glPushMatrix(); 
	 glTranslatef(-8.0,5.5,0.0); 
	 circle(3.5);
	  glPopMatrix(); 
	   //top left
	     glPushMatrix(); 
		 glTranslatef(-3.5,9.0,0.0);
		  circle(3.5);
		   glPopMatrix();
		     //top right  
glPushMatrix();
		glTranslatef(1.0,9.0,0.0);
			   circle(3.0);
			    glPopMatrix();
				  //middle

 glPushMatrix();  
 glColor3f(1.0, 1.0 ,1.0);
  glTranslatef(-1.5,5.5,0.0); 
  circle(4);
   glPopMatrix();
     }  
	 void a() //mini Cloud 
	  { //left
	    glPushMatrix(); 
	   glTranslatef(4.0,5.5,0.0); 
	   circle(4);
	    glPopMatrix(); 
		 //right  
		 glPushMatrix();
		  glTranslatef(-8.0,5.5,0.0); 
		  circle(3.5);
		   glPopMatrix();
		     //top left
		glPushMatrix();
		glTranslatef(-3.5,9.0,0.0); 
		circle(3.5);
		 glPopMatrix();
		   //top right  
		   glPushMatrix();
		    glTranslatef(1.0,9.0,0.0); 
			circle(3.0);
			 glPopMatrix();//middle
			   glPushMatrix(); glTranslatef(-1.5,5.5,0.0);
			    circle(4); glPopMatrix(); 
				
				 }  
 
void c() //One Single Cloud 
{
	glPushMatrix();
 glColor3f(1.0,1.0,1.0);
glTranslatef(35.0,10.0,0.0); 
a();
 glPopMatrix();  
glPushMatrix();
 glColor3f(1.0,1.0,1.0);
  glTranslatef(28.0,16.0,0.0); 
  a();
   glPopMatrix();
     glPushMatrix();
 glColor3f (1.0,1.0,1.0);
  glTranslatef(20.0,10.0,0.0);
   a();
    glPopMatrix();
	 } 
	 
	  void cloud() // Three Cloud
	   {
 glPushMatrix();
  glTranslatef(-15.0,25.0,0.0); 
  glScalef(0.7,0.7,0.0);
   c(); 
   glPopMatrix();
 glPushMatrix(); 
 glTranslatef(20.0,25.0,0.0);
  glScalef(0.7,0.7,0.0);
  c();
   glPopMatrix();
 glPushMatrix(); 
 glTranslatef(-60.0,25.0,0.0);
  glScalef(0.7,0.7,0.0);
   c(); 
   glPopMatrix();
    }  
    
void rect() 
{
 glRectf(-16.0, -16.0, 16.0, 16.0); 
}
 GLfloat ss=0.0; 
 void day() 
 {
 glBegin(GL_POLYGON); 
 // blue sky 
 glColor3f(sr,sg,sb); 
 glVertex3f(-50,-3,0.0); 
 glVertex3f(-50,50,0.0);
  glVertex3f(80.0,50.0,0.0); 
  glVertex3f(80.0,-3.0,0.0);
   glEnd();
 glPushMatrix(); 
 //sun 
 glTranslatef(ss,0.0,0.0); 
 glTranslatef(-20.0,40.0,0.0);
  glScalef(1.0,1.5,0.0);
 glColor3f(1.0,1.0,0.0); 
 circle(3);
  glPopMatrix();
   }
   
 void ground() 
 { 
 glColor3f(0.4,0.4,0.4); 
  glPushMatrix();
   glTranslatef(-70.0,-42.0,0.0); 
   glBegin(GL_POLYGON);  
   glVertex3f(-10.0, 0.0,0.0);
    glVertex3f(-10.0,10.0,0.0); 
	glVertex3f (600.0,10.0,0.0);
	 glVertex3f (600.0,0.0,0.0);
	   glEnd();
	    }
void divider()
{
	glColor3f(1.0,1.0,1.0);
	glTranslatef(-30.0,-43.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,4.0,0.0);
	glVertex3f(-10.0,6.0,0.0);
	glVertex3f(-2.0,6.0,0.0);
	glVertex3f(-2.0,4.0,0.0);
	glEnd();
}
void divider1()
{
	glColor3f(1.0,1.0,1.0);
	glTranslatef(-10.0,-43.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,4.0,0.0);
	glVertex3f(-10.0,6.0,0.0);
	glVertex3f(-2.0,6.0,0.0);
	glVertex3f(-2.0,4.0,0.0);
	glEnd();
}
void divider2()
{
	glColor3f(1.0,1.0,1.0);
	glTranslatef(10.0,-43.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,4.0,0.0);
	glVertex3f(-10.0,6.0,0.0);
	glVertex3f(-2.0,6.0,0.0);
	glVertex3f(-2.0,4.0,0.0);
	glEnd();
}
void divider3()
{
	glColor3f(1.0,1.0,1.0);
	glTranslatef(30.0,-43.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,4.0,0.0);
	glVertex3f(-10.0,6.0,0.0);
	glVertex3f(-2.0,6.0,0.0);
	glVertex3f(-2.0,4.0,0.0);
	glEnd();
}
void divider4()
{
	glColor3f(1.0,1.0,1.0);
	glTranslatef(50.0,-43.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,4.0,0.0);
	glVertex3f(-10.0,6.0,0.0);
	glVertex3f(-2.0,6.0,0.0);
	glVertex3f(-2.0,4.0,0.0);
	glEnd();
}


 void night() //black sky 
 {
 glBegin(GL_POLYGON);
  glColor3f(0.0,0.0,0.0);
   glVertex3f(-50.0,-3.0,0.0);
    glVertex3f(-50.0,50.0,0.0);
	 glVertex3f(80.0,50.0,0.0); 
	 glVertex3f(80.0,-3.0,0.0);
	    }
	    
 void moon() //moon 
 {
 glPushMatrix();
  glTranslatef(mn,0.0,0.0);
   glTranslatef(20.0,35.0,0.0); 
   glScalef(1.0,1.5,0.0);
 glColor3f(1.0,1.0,1.0);
  circle(3.5); 
  glPopMatrix();  
  glutPostRedisplay(); 
  }  
  void triangle(void) 
  {
 glColor3f(0.137255,0.556863,0.137255);
  glBegin(GL_POLYGON);  
  glVertex3f(0.0, 0.0, 0.0);
   glVertex3f(9.0, 13.0, 0.0);
   
glVertex3f(18.0, 0.0, 0.0);
  glEnd(); 
  } 
   void grass()
    { 
	 glPushMatrix();
     glColor3f(0.8,0.196078,0.6);
  glTranslatef(38.0,16.0,0.0);
   glScalef(0.1,0.1,0.0); 
   cloud();
    glPopMatrix();
	  }
 void tree2() {
 glPushMatrix(); 
 glTranslatef(3.0,8.0,0.0);
  triangle();
   glPopMatrix(); 
    glPushMatrix();
	 glTranslatef(3.5,14.0,0.0);
	  glScalef(0.9,0.9,0.0);
	   triangle();
	    glPopMatrix(); 
		 glPushMatrix();
		  glTranslatef(4.5,20.0,0.0);
		   glScalef(0.8,0.8,0.0); 
		   triangle(); 
		   glPopMatrix(); 
		    glPushMatrix();
			 glTranslatef(7.0,26.0,0.0);
 glScalef(0.5,0.5,0.0);
  triangle(); 
  glPopMatrix(); 
   //gora 
    glPushMatrix();
 glBegin(GL_POLYGON);
   glColor3f(0.36,0.25,0.20);
    glVertex3f(10.0, 4.0, 0.0); 
	glVertex3f(10.0, 8.0, 0.0);
	 glVertex3f(14.0, 8.0, 0.0); 
	 glVertex3f(14.0, 4.0, 0.0);
	   glEnd();
	    glPopMatrix();  
}
 void tree() //green leaves 
 {
 glPushMatrix();
  glTranslatef(35.0,10.0,0.0); 
  a(); 
  glPopMatrix();
 glPushMatrix();
  glTranslatef(28.0,16.0,0.0);
   a();
    glPopMatrix();
 glPushMatrix(); 
 glTranslatef(20.0,10.0,0.0);
  a(); 
  glPopMatrix(); 
  }
 void treebody() //tree body 
 {
 glBegin(GL_POLYGON); 
 glColor3f(0.502, 0.000, 0.000); 
 glVertex3f(0.0,0.0,0.0);
  glVertex3f(2.5,2.0,0.0);
   glVertex3f(4.0,-2.0,0.0); 
   glVertex3f(1.0,-4.0,0.0);
    glEnd();
 glBegin(GL_POLYGON);
 glColor3f(0.502, 0.000, 0.000); 
 glVertex3f(7.0,2.0,0.0);
  glVertex3f(9.0,2.0,0.0);
   glVertex3f(8.0,-2.0,0.0);
    glVertex3f(4.0,-2.0,0.0);
	 glEnd();
 glBegin(GL_POLYGON);
 glColor3f(0.502, 0.000, 0.000);
  glVertex3f(1.0,-4.0,0.0);
   glVertex3f(4.0,-2.0,0.0); 
   glVertex3f(8.0,-2.0,0.0);
    glVertex3f(7.0,-7.0,0.0);
	 glVertex3f(1.5,-7.0,0.0);
	  glEnd();
 glBegin(GL_POLYGON);
 glColor3f(0.502, 0.000, 0.000);
  glVertex3f(1.5,-7.0,0.0);
   glVertex3f(7.0,-7.0,0.0);
    glVertex3f(6.5,-10.0,0.0);
	 glVertex3f(2.0,-10.0,0.0);
	  glEnd();
 glBegin(GL_POLYGON);
 glColor3f(0.502, 0.000, 0.000);
  glVertex3f(2.0,-10.0,0.0);
   glVertex3f(6.5,-10.0,0.0); 
   glVertex3f(6.8,-13.0,0.0);
    glVertex3f(1.5,-13.0,0.0);
	 glEnd();
 glBegin(GL_POLYGON);
glColor3f(0.502, 0.000, 0.000); 
glVertex3f(1.5,-13.0,0.0); 
glVertex3f(6.8,-13.0,0.0); 
glVertex3f(7.0,-18.0,0.0); 
glVertex3f(0.5,-18.0,0.0);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3f(0.502, 0.000, 0.000);
glVertex3f(0.5,-18.0,0.0);
 glVertex3f(7.0,-18.0,0.0);
glVertex3f(3.0,-27.0,0.0);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3f(0.502, 0.000, 0.000);
  glVertex3f(0.5,-18.0,0.0); 
  glVertex3f(2.5,-23.0,0.0);
   glVertex3f(-1.0,-25.0,0.0);
    glEnd();
 glBegin(GL_POLYGON);
 glColor3f(0.502, 0.000, 0.000);
  glVertex3f(7.0,-18.0,0.0); 
  glVertex3f(8.0,-28.0,0.0); 
  glVertex3f(4.0,-22.0,0.0); 
  glEnd(); 
  } 
  ///////////////////// / //***HOME Start***//// / /////////////////////
   void home1()
    {
    //1st Home / /1
 glColor3ub(102,51,0); 
 glBegin(GL_POLYGON);
  glVertex2d(3.0,14.0);
   glVertex2d(3.0,11.0);
    glVertex2d(10.0,8.0);
	 glVertex2d(10.0,12.0);
	  glVertex2d(6.0,18.0); 
	glEnd();
 glColor3ub(153,153,0); 
 glBegin(GL_POLYGON);
  glVertex2d(10.0,8.0);
   glVertex2d(10.0,12.0);
    glVertex2d(20.0,12.0); 
	glVertex2d(20.0,8.0); 
	glEnd(); 
 glColor3ub(0,100,200);
  glBegin(GL_POLYGON);
   glVertex2d(10.0,12.0); 
   glVertex2d(6.0,18.0);
    glVertex2d(17.0,18.0);
	 glVertex2d(21.0,12.0);
glEnd(); 
 glColor3ub(255,255,0); 
 glBegin(GL_POLYGON);
  glVertex2d(5.0,11.0);
   glVertex2d(5.0,12.0);
    glVertex2d(8.0,11.0); 
	glVertex2d(8.0,10.0); 
	glEnd();  
	glColor3ub(50,50,50); 
	glBegin(GL_POLYGON);
	 glVertex2d(14.0,8.0); 
	 glVertex2d(14.0,10.0); 
	 glVertex2d(17.0,10.0); 
	 glVertex2d(17.0,8.0);
	  glEnd();  
 
}
 void house() {
 glColor3ub(240,150,100);
  glBegin(GL_POLYGON);
   glVertex2d(33.0,23.0);
    glVertex2d(44.0,23.0);
	 glVertex2d(44.0,30.0);
	  glVertex2d(33.0,30.0);
	   glEnd();
	     glColor3ub(0,105,105); 
		 glBegin(GL_POLYGON); 
		 glVertex2d(31.0,30.0);
		  glVertex2d(46.0,30.0); 
		  glVertex2d(38.5,38.0);
		   glEnd(); 
		    } 
			//HOME END/// 
			void well()
{
    glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.9f,-0.55f);
    glVertex2f(-0.85f,-0.575f);
    glVertex2f(-0.8f,-0.59f);
    glVertex2f(-0.7f,-0.59f);
    glVertex2f(-0.65f,-0.575f);
    glVertex2f(-0.6f,-0.55f);
    glVertex2f(-0.6f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(255, 102, 51);
    glColor3ub(38, 154, 214);
    glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.85f,-0.375f);
    glVertex2f(-0.8f,-0.38f);
    glVertex2f(-0.7f,-0.38f);
    glVertex2f(-0.65f,-0.375f);
    glVertex2f(-0.6f,-0.35f);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.7f,-0.325f);
     glVertex2f(-0.8f,-0.325f);
     glVertex2f(-0.85f,-0.33f);
    glEnd();

    glLineWidth(5);
     glBegin(GL_LINES);
    glColor3ub(204, 51, 0);
     glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.85f,-0.33f);//
    glVertex2f(-0.85f,-0.33f);
    glVertex2f(-0.8f,-0.325f);//
    glVertex2f(-0.8f,-0.325f);
    glVertex2f(-0.7f,-0.325f);//
    glVertex2f(-0.7f,-0.325f);
    glVertex2f(-0.65f,-0.33f);//
     glVertex2f(-0.65f,-0.33f);
     glVertex2f(-0.6f,-0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(194, 194, 163);
    glVertex2f(-0.59f,-0.43f);
    glVertex2f(-0.57f,-0.5f);
    glVertex2f(-0.52f,-0.5f);
    glVertex2f(-0.5f,-0.43f);
    glVertex2f(-0.52f,-0.42f);
    glVertex2f(-0.57f,-0.42f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(38, 154, 214);
    glVertex2f(-0.585f,-0.43f);
    glVertex2f(-0.568f,-0.44f);
    glVertex2f(-0.528f,-0.44f);
    glVertex2f(-0.505f,-0.43f);
    glVertex2f(-0.528f,-0.425f);
    glVertex2f(-0.57f,-0.425f);
    glEnd();

    glLineWidth(3);
     glBegin(GL_LINES);
    glColor3ub(194, 194, 163);
    glVertex2f(-0.59f,-0.43f);
    glVertex2f(-0.57f,-0.39f);//
    glVertex2f(-0.57f,-0.39f);
    glVertex2f(-0.55f,-0.39f);//
    glVertex2f(-0.55f,-0.39f);
    glVertex2f(-0.52f,-0.39f);//
    glVertex2f(-0.52f,-0.39f);
    glVertex2f(-0.5f,-0.43f);//
    glEnd();

    glLineWidth(2);
     glBegin(GL_LINES);
    glColor3ub(230, 172, 0);
    glVertex2f(-0.545f,-0.385f);
    glVertex2f(-0.57f,-0.45f);//
    glVertex2f(-0.57f,-0.45f);
    glVertex2f(-0.575f,-0.5f);//
    glVertex2f(-0.575f,-0.5f);
    glVertex2f(-0.58f,-0.53f);//
    glVertex2f(-0.58f,-0.53f);
    glVertex2f(-0.57f,-0.55f);//
    glVertex2f(-0.57f,-0.55f);
    glVertex2f(-0.48f,-0.53f);//
    glEnd();
}
void bird()
{
	//bird1//
       int i;
GLfloat a=0.175f,b=0.8f,c=0.15f,d=0.8f,e=0.14f,f1=0.84f,f2=0.1f,f3=0.11f,f4=0.79f,f5=0.12f,f6=0.78f,f7=0.16f,f8=0.77f,f9=0.19f,f10=0.201f,f11=0.83f,f12=0.144f;
	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3f(0.0,0.0,0.0);
	//	glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    //glColor3ub(225, 225, 208 );
    glVertex2f(f2,b);
    glVertex2f(f3,f4);
    glVertex2f(f5,f6);
    glVertex2f(f7,f8);
    glVertex2f(f9,f4);
    glVertex2f(f10,d);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0,0.0,0.0);
    //glColor3ub(217, 217, 217);                                                  
    glVertex2f(a,b);
    glVertex2f(c,d);
    glVertex2f(e,f1);
  /*  for(i=0;i<=30;i++)
    {
      glVertex2f(a+=0.175f,b);
      glVertex2f(c+=0.15f,d);
      glVertex2f(e+=0.14f,f1);
	}*/
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,0.0);
  //  glColor3ub(242, 242, 242 );
    glVertex2f(a,b);
    glVertex2f(f12,d);
    glVertex2f(f5,f11);
    /*for(i=0;i<=0;i++)
    {
      glVertex2f(a+=0.175f,b);
      glVertex2f(f12+=0.144f,d);
      glVertex2f(f5+=0.12f,f11);
	}*/
	
    glEnd();
    
	/////2nd bird////
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
    //glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3f(0.0,0.0,0.0);
   // glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,0.0);
    //glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0,0.0,0.0);
	    //glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	/////3rd bird/////
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
   // glColor3ub(225, 225, 208 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    	glColor3f(0.0,0.0,0.0);
   // glColor3ub(217, 217, 217);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    	glColor3f(0.0,0.0,0.0);
  //  glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

	GLfloat mmmm=-0.638f; GLfloat nnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
		glColor3f(0.0,0.0,0.0);
	  //  glColor3ub(225, 225, 208);
		glVertex2f(mmmm,nnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	////4th bird////
	GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	  glColor3f(0.0,0.0,0.0);
	    //glColor3ub(225, 225, 208);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
	//glColor3ub(225, 225, 208 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,0.0);
   // glColor3ub(217, 217, 217);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,0.0);
   // glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();
	// glutPostRedisplay();

}	
void backgroundtree()
{
    //pamtrees
  	glBegin(GL_POLYGON);
	glColor3ub(102,51,30);
	glVertex2f(-1.0f,0.45f);
	glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.93f, 0.56);
    glVertex2f(-0.9f,0.6f);
    glVertex2f(-0.82f, 0.64);
    glVertex2f(-0.75f, 0.67);
    glVertex2f(-0.68f, 0.64);
     glVertex2f(-0.6f,0.6f);
     glVertex2f(-0.57f, 0.56);
     glVertex2f(-0.52f, 0.5f);
     glVertex2f(-0.5f,0.45f);
     glVertex2f(-1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(102,51,0);
	glVertex2f(1.0f,0.45f);
	glVertex2f(0.98f, 0.5f);
    glVertex2f(0.93f, 0.56);
    glVertex2f(0.9f,0.6f);
    glVertex2f(0.82f, 0.64);
    glVertex2f(0.75f, 0.67);
    glVertex2f(0.68f, 0.64);
     glVertex2f(0.6f,0.6f);
     glVertex2f(0.57f, 0.56);
     glVertex2f(0.52f, 0.5f);
     glVertex2f(0.5f,0.45f);
     glVertex2f(1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(102,51,0);
	glVertex2f(-0.5f,0.45f);
	glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.45f, 0.56);
    glVertex2f(-0.42f,0.6f);
    glVertex2f(-0.37f, 0.62);
    glVertex2f(-0.32f, 0.6);
    glVertex2f(-0.29f, 0.56f);
     glVertex2f(-0.27f, 0.5f);
    glVertex2f(-0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(102,51,0);
	glVertex2f(0.5f,0.45f);
	glVertex2f(0.48f, 0.5f);
    glVertex2f(0.45f, 0.56);
    glVertex2f(0.42f,0.6f);
    glVertex2f(0.37f, 0.62);
    glVertex2f(0.32f, 0.6);
    glVertex2f(0.29f, 0.56f);
     glVertex2f(0.27f, 0.5f);
    glVertex2f(0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(102,51,0);
	glVertex2f(-.25f,0.45f);
	glVertex2f(-0.23f, 0.5f);
    glVertex2f(-0.18f, 0.56);
    glVertex2f(-0.15f,0.6f);
    glVertex2f(-0.07f, 0.64);
    glVertex2f(-0.00f, 0.67);
    glVertex2f(0.07f, 0.64);
    glVertex2f(0.15f,0.6f);
    glVertex2f(0.18f, 0.56);
    glVertex2f(0.23f, 0.5f);
    glVertex2f(.25f,0.45f);
	glEnd();

}
 void triangle1(void) 
  {
 glColor3f(1.0,1.0,1.0);
  glBegin(GL_POLYGON);  
  glVertex3f(0.0, 0.0, 0.0);
   glVertex3f(9.0, 13.0, 0.0);
   
glVertex3f(18.0, 0.0, 0.0);
  glEnd(); 
  } 
 
void grass1()
{
     glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void flower()
{
	
	 int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 182, 203);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 182, 203);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 182, 203);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
void flower1()
{
	
	 int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3f(1.0,1.0,0.0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
          glColor3f(1.0,1.0,0.0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0,1.0,0.0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void apple()
{

int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
void fence()
{
     glLineWidth(4);
     glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(-2.0f,-0.1f);
    glVertex2f(-1.6f,-0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(-2.0f,-0.05f);
    glVertex2f(-1.6f,-0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(-2.0f,0.0f);
    glVertex2f(-1.6f,0.0f);

     glColor3ub(255, 255, 102);
    glVertex2f(-2.0f,0.05f);
    glVertex2f(-1.6f,0.05f);

     glColor3ub(255, 255, 102);
    glVertex2f(-2.0f,0.1f);
    glVertex2f(-1.6f,0.1f);

     glColor3ub(255, 255, 102);
    glVertex2f(-1.95f,0.13f);
    glVertex2f(-1.95f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.9f,0.13f);
    glVertex2f(-1.9f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.85f,0.13f);
    glVertex2f(-1.85f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.8f,0.13f);
    glVertex2f(-1.8f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.75f,0.13f);
    glVertex2f(-1.75f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.7f,0.13f);
    glVertex2f(-1.7f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.65f,0.13f);
    glVertex2f(-1.65f,-0.12f);

    glEnd();
}

void Display(void)
{
    //std::cout<<"Display 1 called"<<std::endl;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0,0,-20);
   // glScalef(30.0,30.0,0.0);
     glutPostRedisplay();
   //glutSwapBuffers();
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
  //  glutPostRedisplay();
}


GLfloat xw=-40.0;
GLfloat yw,f1,f2,f3,f4,f5,f6;		
void disp() 
{
    glClear(GL_COLOR_BUFFER_BIT); 
    glPushMatrix();
   day();
    glPopMatrix();  
	///ground///
 glPushMatrix(); 
 glTranslatef(0.0,-35.0,0.0);
  glScalef(3.5,3.0,0.0);
 glColor3f(0.0, 0.5, 0.0);
  rect();
   glPopMatrix();
   
    glPushMatrix(); 
 glTranslatef(30.0,-5.0,0.0);
  glScalef(80.0,40.0,0.0);
// glColor3f(0.0, 0.5, 0.0);
  backgroundtree();
   glPopMatrix();
   
glPushMatrix();
 glColor3f (1.0,1.0,1.0);
   	glScalef(40.0,40.0,0.0);
  	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
   
   glPushMatrix();
  glTranslatef(cx,17.0,0.0);
   	glScalef(40.0,40.0,0.0);
 //  glTranslatef(cx,17.0,0.0);
   bird(); 
   glPopMatrix(); 

    glPushMatrix();
 glColor3f (1.0,1.0,1.0);
 // glTranslatef(cx,20.0,0.0);
  // cloudB();
    glPopMatrix();  

//tree1
 glPushMatrix();
  glColor3ub(248, 188, 203);
 //glColor3f(0.133, 0.545, 0.133);
  glTranslatef(-49.0,9.5,0.0);
   glScalef(0.4,0.5,0.0); 
   tree();
    glPopMatrix(); 
	 glPushMatrix(); 
	 glTranslatef(-40.4,15.4,0.0); 
	 glScalef(0.4,0.5,0.0);
	  treebody();
	   glPopMatrix();  //  ///
	   
 glPushMatrix(); 
 moon();
  glPopMatrix();  ///
 glPushMatrix();
  glTranslatef(cx,0.0,0.0);
   glScalef(0.8,1.0,0.0);
    cloud();
	 glPopMatrix();  //***/// / //home 2///
 glPushMatrix(); 
 glTranslatef(-65.0,-20.0,0.0); 
 house(); 
 glPopMatrix();  //***/// / //home 1///
 glPushMatrix();
  glTranslatef(-45.0,-10.0,0.0);
   home1();
    glPopMatrix();
///home 2///
 glPushMatrix();
  glTranslatef(20.0,-15.0,0.0);
   home1();
    glPopMatrix();
	  //***/// / //tree typeA 1///
	   glPushMatrix(); 
	   glTranslatef(-5.0,-5.0,0.0); 
	   glScalef(0.5,1.0,0.0); 
	   tree2(); 
	   glPopMatrix(); 
	    //***/// / //tree typeB 1/// 
		glPushMatrix(); 
		glTranslatef(35.0,-5.0,0.0); 
		glScalef(0.5,1.0,0.0); 
		tree2();
		 glPopMatrix(); 
		  //***/// / //tree typeC 1/// 
		  glPushMatrix();
		   glTranslatef(30.0,-15.0,0.0);
		    glScalef(0.5,1.0,0.0); 
			tree2();
			 glPopMatrix(); 
			  //***///  
 
 
///tree2///
 glPushMatrix();
  glColor3ub(250, 182, 203);
// glColor3f(0.133, 0.545, 0.133);
  glTranslatef(-44.0,-1.0,0.0); 
  glScalef(0.4,0.5,0.0); tree();
   glPopMatrix();
 glPushMatrix();
  glTranslatef(-35.0,5.0,0.0);
   glScalef(0.4,0.5,0.0); 
   treebody(); 
   glPopMatrix(); 
    //***/// / //********home 4********/// 
	glPushMatrix();
	 glTranslatef(-10.0,-10.0,0.0); 
	 home1(); 
	 glPopMatrix();
	 glPopMatrix(); 
	   //***/// / //********road********///
	     glPushMatrix(); 
		glTranslatef(-10.0,15.0,0.0);
		 ground();
		  glPopMatrix();
glPopMatrix();
  glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  ground(); 
  glPopMatrix(); 
  glPopMatrix();
  //divider ///
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider(); 
  glPopMatrix(); 
    glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider1(); 
  glPopMatrix();
    glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider2(); 
  glPopMatrix(); 
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider3(); 
  glPopMatrix(); 
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider4(); 
  glPopMatrix();
    //************/// / //BUS///
 glPushMatrix();
  glTranslatef(cx, -18.0, 0.0);
   glScalef(30.0, 8.0, 0.0);
    bus();
	 glPopMatrix(); 
	  //***///  ///BUS2///
 glPushMatrix(); 
 glTranslatef(cx, -8.0, -15.0);
  glScalef(30.0, 8.0, 0.0); 
  bus();
   glPopMatrix(); 
    glPushMatrix();
	glTranslatef(160.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	 glPopMatrix();

    //***///  ///tree3///
     glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(100.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();

    //***///  ///tree3///
 glPushMatrix();
  glColor3ub(255, 182, 203);
 //glColor3f(0.133, 0.545, 0.133);
  glTranslatef(22.0,-32.5,0.0);
   glScalef(0.4,0.5,0.0);
    tree();
	 glPopMatrix(); 
	 glPopMatrix();	 
 glPushMatrix(); 
 glTranslatef(30.5,-26.5,0.0);
  glScalef(0.4,0.5,0.0); 
  treebody();
   glPopMatrix();  //***///  ///home 3///
 glPushMatrix();
  glTranslatef(-5.0,-70.0,0.0); 
  house(); 
  glPopMatrix(); glPopMatrix(); 
   //***///  ///tree typeD 1///
    glPushMatrix(); 
	glTranslatef(-10.0,-50.0,0.0); 
	glScalef(.5,1,0);
	 tree2(); 
	 glPopMatrix(); ///***///
	 //well
	 glPushMatrix();
	glTranslatef(-12.0,-20.0,0.0); 
	glScalef(40.0,40.0,0.0);
	 well(); 
	 glPopMatrix(); ///***///
     	glPushMatrix();
//	glTranslatef(-12.0,-20.0,0.0); 
	glScalef(40.0,40.0,0.0);
	// bird(); 
	 glPopMatrix(); ///***///
	glPushMatrix();
	glTranslatef(-15.0,10.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
    	glPushMatrix();
	glTranslatef(-18.0,8.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	glPushMatrix();
	glTranslatef(-23.0,6.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();   
	glPushMatrix();
	glTranslatef(-29.0,1.0,0.0); 
	glScalef(25.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();  
	 glPushMatrix();
	glTranslatef(-40.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(20.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();   
	 	 glPushMatrix();
	glTranslatef(24.0,-2.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
    	 glPushMatrix();
	glTranslatef(45.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(20.0,-1.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();
	 	 glPushMatrix();
	glTranslatef(-9.0,5.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(4.0,1.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(12.0,5.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///flower/// 
 	 glPushMatrix();
	glTranslatef(-33.5,20.1,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower(); 
	 glPopMatrix(); 
	 glPushMatrix();
	glTranslatef(-36.5,20.1,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower(); 
	 glPopMatrix(); 
	

	  glPushMatrix();
	glTranslatef(-39.0,20.3,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower(); 
	 glPopMatrix(); 
	 glPushMatrix();
	glTranslatef(-44.5,20.3,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower(); 
	 glPopMatrix(); 
	
	 glPushMatrix();
	glTranslatef(-41.5,13.0,0.0); //down
	glScalef(15.0,15.0,0.0);
	 flower(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(-41.5,20.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower(); 
	 glPopMatrix();
	 glPushMatrix(); 
	glTranslatef(-42.5,14.0,0.0);//down 
	glScalef(15.0,15.0,0.0);
	 flower(); 
	 glPopMatrix(); 

	 //2ndtree
	glPushMatrix();
	glTranslatef(-39.0,9.9,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	  glPopMatrix(); 
	  	 	 	glPushMatrix();
	glTranslatef(-36.0,9.9,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	  glPopMatrix(); 
	glPushMatrix();
	glTranslatef(-32.0,9.9,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	  glPopMatrix();  
	  	 	 	glPushMatrix();
	glTranslatef(-29.0,9.9,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	  glPopMatrix();  
	  //3rd tree
	  	 	 	glPushMatrix();
	glTranslatef(29.0,-22.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	  glPopMatrix();  
	glPushMatrix();
	glTranslatef(32.0,-22.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	  glPopMatrix(); 
	glPushMatrix();
	glTranslatef(36.0,-22.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	  glPopMatrix(); 
	  
	  glPushMatrix();
	glTranslatef(xw,yw,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix();  
	 //fallflowertree1
	   glPushMatrix();
	glTranslatef(-36.0,yw,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix();    
	  glPushMatrix();
	glTranslatef(-39.0,f1,0.0); //2tree
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix();  
	 glPushMatrix();  
		glTranslatef(-32.0,f2,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix();
	 glPushMatrix();
	 	glTranslatef(-29.0,f1,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix();    
     glPushMatrix();
	 	glTranslatef(-36.0,f3,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix();    
    

	glPushMatrix();
	glTranslatef(-29.0,-1.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();//downflower 2tree
	 glPopMatrix(); 
	 	glPushMatrix();
	glTranslatef(-27.0,-1.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();//downflower 2tree
	 glPopMatrix(); 

	glPushMatrix();
	glTranslatef(-38.0,-1.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix(); 
	glPushMatrix();
	glTranslatef(-38.0,0.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix(); 
	
	 glPushMatrix();
	glTranslatef(-36.0,-9.5,0.0); 
	glScalef(15.0,15.0,0.0);
	flower();
	 glPopMatrix(); 
	glPushMatrix();
	glTranslatef(38.0,-28.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();//downflower 3tree
	 glPopMatrix(); 
	 	glPushMatrix();
	glTranslatef(36.0,-28.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();//downflower 3tree
	 glPopMatrix(); 
	glPushMatrix();
	glTranslatef(30.0,-28.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();//downflower tree
	 glPopMatrix(); 
	glPushMatrix();
	glTranslatef(30.0,-26.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();//downflower 2tree
	 glPopMatrix(); 

 glPushMatrix();
	 	glTranslatef(29.0,f4,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();//falling3
	 glPopMatrix();    
    glPushMatrix();
	 	glTranslatef(36.0,f5,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower();
	 glPopMatrix();
	 glPushMatrix();  
	 	glTranslatef(-3.0,f6,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();
	 glPopMatrix();  
	 
	  glPushMatrix();
	glTranslatef(1.0,-40.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();//downflowery 3tree
	 glPopMatrix(); 
	 	glPushMatrix();
	glTranslatef(-10.0,-42.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();//downflower 3tree
	 glPopMatrix(); 
	glPushMatrix();
	glTranslatef(1.0,-42.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();//downflower tree
	 glPopMatrix(); 
	glPushMatrix();
	glTranslatef(-10.0,-40.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();//downflower 2tree
	 glPopMatrix(); 
	 
	 glPushMatrix();
	glTranslatef(-1.0,-32.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();//downflower 3tree
	 glPopMatrix(); 
	 	glPushMatrix();
	glTranslatef(-4.0,-35.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();//downflower 3tree
	 glPopMatrix(); 
	glPushMatrix();
	glTranslatef(-3.0,-28.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();//downflower tree
	 glPopMatrix(); 
	glPushMatrix();
	glTranslatef(-6.0,-30.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 flower1();//downflower 2tree
	 glPopMatrix(); 

 
    
	glPushMatrix();
	glTranslatef(75.0,-9.5,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); glPushMatrix();
	glTranslatef(75.0,-9.5,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(100.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
  glPushMatrix();
	glTranslatef(160.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	  	  glPushMatrix();
	glTranslatef(75.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	  
	   glPushMatrix();
	glTranslatef(100.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
  glPushMatrix();
	glTranslatef(160.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	  	  glPushMatrix();
	glTranslatef(75.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	   
	   glPushMatrix();
	glTranslatef(0.0,-0.0,0.0); 
	glScalef(2.0,3.0,0.0);
	 fence();
	  glPopMatrix();
	   
	  
	
 glFlush();
}
void bird1(){
	//bird1//
       int i;

	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//	glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
//    glColor3f(0.0,0.0,0.0);
    //glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
//	glColor3f(0.0,0.0,0.0);
    
    //glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
  //  glColor3f(0.0,0.0,0.0);
  //  glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
}

void display1()
{
	glClear(GL_COLOR_BUFFER_BIT); 
    glPushMatrix();
   day();
    glPopMatrix();  
	///ground///
 glPushMatrix(); 
 glTranslatef(0.0,-35.0,0.0);
  glScalef(3.5,3.0,0.0);
 glColor3f(0.0, 0.5, 0.0);
  rect();
   glPopMatrix();
   
    glPushMatrix(); 
 glTranslatef(30.0,-5.0,0.0);
  glScalef(80.0,40.0,0.0);
// glColor3f(0.0, 0.5, 0.0);
  backgroundtree();
   glPopMatrix();
   
glPushMatrix();
 glColor3f (1.0,1.0,1.0);
   	glScalef(40.0,40.0,0.0);
   	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
   
   glPushMatrix();
   glTranslatef(cx,17.0,0.0);
   	glScalef(40.0,40.0,0.0);
     bird();
   glPopMatrix(); 

   
    glPushMatrix();
 glColor3f (1.0,1.0,1.0);
 // glTranslatef(cx,20.0,0.0);
  // cloudB();
    glPopMatrix();  

//tree1
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(-49.0,9.5,0.0);
   glScalef(0.4,0.5,0.0); 
   tree();
    glPopMatrix(); 
	 glPushMatrix(); 
	 glTranslatef(-40.4,15.4,0.0); 
	 glScalef(0.4,0.5,0.0);
	  treebody();
	   glPopMatrix();  //  ///
	   
 glPushMatrix(); 
 moon();
  glPopMatrix();  ///
 glPushMatrix();
  glTranslatef(cx,0.0,0.0);
   glScalef(0.8,1.0,0.0);
    cloud();
	 glPopMatrix();  //***/// / //home 2///
 glPushMatrix(); 
 glTranslatef(-65.0,-20.0,0.0); 
 house(); 
 glPopMatrix();  //***/// / //home 1///
 glPushMatrix();
  glTranslatef(-45.0,-10.0,0.0);
   home1();
    glPopMatrix();
///home 2///
 glPushMatrix();
  glTranslatef(20.0,-15.0,0.0);
   home1();
    glPopMatrix();
	  //***/// / //tree typeA 1///
	   glPushMatrix(); 
	   glTranslatef(-5.0,-5.0,0.0); 
	   glScalef(0.5,1.0,0.0); 
	   tree2(); 
	   glPopMatrix(); 
	    //***/// / //tree typeB 1/// 
		glPushMatrix(); 
		glTranslatef(35.0,-5.0,0.0); 
		glScalef(0.5,1.0,0.0); 
		tree2();
		 glPopMatrix(); 
		  //***/// / //tree typeC 1/// 
		  glPushMatrix();
		   glTranslatef(30.0,-15.0,0.0);
		    glScalef(0.5,1.0,0.0); 
			tree2();
			 glPopMatrix(); 
			  //***///  
 
 
///tree2///
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(-44.0,-1.0,0.0); 
  glScalef(0.4,0.5,0.0); tree();
   glPopMatrix();
 glPushMatrix();
  glTranslatef(-35.0,5.0,0.0);
   glScalef(0.4,0.5,0.0); 
   treebody(); 
   glPopMatrix(); 
    //***/// / //********home 4********/// 
	glPushMatrix();
	 glTranslatef(-10.0,-10.0,0.0); 
	 home1(); 
	 glPopMatrix();
	 glPopMatrix(); 
	   //***/// / //********road********///
	     glPushMatrix(); 
		glTranslatef(-10.0,15.0,0.0);
		 ground();
		  glPopMatrix();
glPopMatrix();
  glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  ground(); 
  glPopMatrix(); 
  glPopMatrix();
  //divider ///
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider(); 
  glPopMatrix(); 
    glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider1(); 
  glPopMatrix();
    glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider2(); 
  glPopMatrix(); 
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider3(); 
  glPopMatrix(); 
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider4(); 
  glPopMatrix();
    //************/// / //BUS///
 glPushMatrix();
  glTranslatef(cx, -19.0, 0.0);
   glScalef(30.0, 8.0, 0.0);
    bus();
	 glPopMatrix(); 
	  //***///  ///BUS2///
 glPushMatrix(); 
 glTranslatef(cx, -8.0, -15.0);
  glScalef(30.0, 8.0, 0.0); 
  bus();
   glPopMatrix(); 
   glPushMatrix();
	glTranslatef(160.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	 glPopMatrix();

    //***///  ///tree3///
     glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(100.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	 
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(22.0,-32.5,0.0);
   glScalef(0.4,0.5,0.0);
    tree();
	 glPopMatrix(); 
	 glPopMatrix();	 
 glPushMatrix(); 
 glTranslatef(30.5,-26.5,0.0);
  glScalef(0.4,0.5,0.0); 
  treebody();
   glPopMatrix();  //***///  ///home 3///
 glPushMatrix();
  glTranslatef(-5.0,-70.0,0.0); 
  house(); 
  glPopMatrix(); glPopMatrix(); 
   //***///  ///tree typeD 1///
    glPushMatrix(); 
	glTranslatef(-10.0,-50.0,0.0); 
	glScalef(.5,1,0);
	 tree2(); 
	 glPopMatrix(); ///***///
	 //well
	 glPushMatrix();
	glTranslatef(-12.0,-20.0,0.0); 
	glScalef(40.0,40.0,0.0);		
	 well(); 
	 glPopMatrix(); ///***///
     	glPushMatrix();
//	glTranslatef(-12.0,-20.0,0.0); 
	glScalef(40.0,40.0,0.0);
	// bird(); 
	 glPopMatrix(); ///***///
	glPushMatrix();
	glTranslatef(-15.0,10.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
    	glPushMatrix();
	glTranslatef(-18.0,8.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	glPushMatrix();
	glTranslatef(-23.0,6.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();   
	glPushMatrix();
	glTranslatef(-29.0,1.0,0.0); 
	glScalef(25.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();  
	 glPushMatrix();
	glTranslatef(-40.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(20.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();   
	 	 glPushMatrix();
	glTranslatef(24.0,-2.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
    	 glPushMatrix();
	glTranslatef(45.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(20.0,-1.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();
	 	 glPushMatrix();
	glTranslatef(-9.0,5.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(4.0,1.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(12.0,5.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();  
	  glPushMatrix();
	glTranslatef(75.0,-9.5,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(100.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
  glPushMatrix();
	glTranslatef(160.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	  	  glPushMatrix();
	glTranslatef(75.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	  
	glPushMatrix();
     	glTranslatef(-20.4,6.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-20.4,8.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-26.0,1.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-25.0,1.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 
	 
	 
	 //right grass
    glPushMatrix();
     	glTranslatef(28.5,-3.5,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
    glPushMatrix();
     	glTranslatef(30.0,-4.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
 glPushMatrix();
     	glTranslatef(10.0,-40.0,0.0);
	glScalef(25.0,22.0,0.0);
	 bird1(); //wood
	 glPopMatrix(); 
    glPushMatrix();
     	glTranslatef(-10.0,-33.5,0.0);
     	glColor3f(0.0,0.0,0.0);
	glScalef(20.0,25.0,0.0);
	 bird1(); //btree
	 glPopMatrix(); 

      glPushMatrix();
     	glTranslatef(-30.0,-0.5,0.0);
	glScalef(20.0,20.0,0.0);
	 bird1(); 
	 glPopMatrix(); 
 glPushMatrix();
             glColor3f(1.0,1.0,0.9);
	 	glTranslatef(-39.0,1.0,0.0);
	glScalef(20.0,20.0,0.0);
	 bird1(); 
	 glPopMatrix(); 
 glPushMatrix();
   glTranslatef(-30.0,5.0,0.0);
	glScalef(20.0,10.0,0.0);
	 fence(); 
	 glPopMatrix(); 

	 	 glPushMatrix();
	glTranslatef(-40.0,27.2,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(-35.5,27.2,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(-39.0,32.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(-42.0,27.3,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();  
 	 
 glPushMatrix();
	glTranslatef(0.0,0.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();  
	 glPushMatrix();
	glTranslatef(-35.5,22.2,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(-30.0,22.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(-28.0,17.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();  
 	 
 glPushMatrix();
	glTranslatef(-30.5,17.2,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();
	 glPushMatrix();
	glTranslatef(-38.0,17.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix(); 
 	  glPushMatrix();
	glTranslatef(-35.5,17.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix(); 
	 
	 glPushMatrix();
	glTranslatef(30.5,-15.3,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();
	 glPushMatrix();
	glTranslatef(38.0,-15.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix(); 
 	  glPushMatrix();
	glTranslatef(35.5,-15.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix(); 
	 
  glPushMatrix();
	glTranslatef(35.0,-10.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix(); 
 	  glPushMatrix();
	glTranslatef(29.5,-12.0,0.0); 
	glScalef(20.0,35.0,0.0);
	 apple(); 
	 glPopMatrix();
	  
		  
 glFlush();
}

 void day2()
 {
 	 glBegin(GL_POLYGON); 
 // blue sky 
// glColor3f(0.0,0.0,0.9); 
// glColor3ub(211,211,217);
 //glColor3ub(177,156,217);
glColor3ub(177,211,217); //snowfall
 glVertex3f(-50,-3,0.0); 
 glVertex3f(-50,50,0.0);
  glVertex3f(80.0,50.0,0.0); 
  glVertex3f(80.0,-3.0,0.0);
   glEnd();

 }
 void bubbles()
 {
 	glColor3f(1.0,1.0,1.0);
 	glutSolidSphere(0.5,8,10);
 }
 GLfloat q1,q2,q3,q4,q5;


void display2()
{
glClear(GL_COLOR_BUFFER_BIT); 
    
    glPushMatrix();
   day2();
    glPopMatrix();  
	///ground///
 glPushMatrix(); 
 glTranslatef(0.0,-35.0,0.0);
  glScalef(3.5,3.0,0.0);
 glColor3f(1.0, 1.0, 1.0);
  rect();
   glPopMatrix();
   
    glPushMatrix(); 
 glTranslatef(30.0,-5.0,0.0);
  glScalef(80.0,40.0,0.0);
// glColor3f(0.0, 0.5, 0.0);
  backgroundtree();
   glPopMatrix();
   
    glPushMatrix();
    glColor3f (1.0,1.0,1.0);
    glTranslatef(-20.0,44.0,0.0);
   	glScalef(0.9,0.8,0.0);
   //	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
   
   glPushMatrix();
    glColor3f (1.0,1.0,1.0);
    glTranslatef(10.5,44.0,0.0);
   	glScalef(0.9,0.8,0.0);
   //	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
   
 glPushMatrix();
    glColor3f (1.0,1.0,1.0);
    glTranslatef(45.0,44.0,0.0);
   	glScalef(0.9,0.8,0.0);
   //	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
  

glPushMatrix();
 glColor3f (1.0,1.0,1.0);
  glTranslatef(cx,17.0,0.0);
   	glScalef(40.0,40.0,0.0);
   //	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
    glPushMatrix();
 glColor3f (1.0,1.0,1.0);
  glTranslatef(cx,20.0,0.0);
  // cloudB();
    glPopMatrix();    
//tree1
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(-49.0,9.5,0.0);
   glScalef(0.4,0.5,0.0); 
   tree();
    glPopMatrix(); 
	 glPushMatrix(); 
	 glTranslatef(-40.4,15.4,0.0); 
	 glScalef(0.4,0.5,0.0);
	  treebody();
	   glPopMatrix();  //  ///
	   
 glPushMatrix();
 // glTranslatef(cx,0.0,0.0);
   glScalef(0.8,1.0,0.0);
    cloud();
	 glPopMatrix();  //***/// / //home 2///
 glPushMatrix(); 
 glTranslatef(-65.0,-20.0,0.0); 
 house(); 
 glPopMatrix();  //***/// / //home 1///
 glPushMatrix();
  glTranslatef(-45.0,-10.0,0.0);
   home1();
    glPopMatrix();
///home 2///
 glPushMatrix();
  glTranslatef(20.0,-15.0,0.0);
   home1();
    glPopMatrix();
	  //***/// / //tree typeA 1///
	   glPushMatrix(); 
	   glTranslatef(-5.0,-5.0,0.0); 
	   glScalef(0.5,1.0,0.0); 
	   tree2(); 
	   glPopMatrix(); 
	    //***/// / //tree typeB 1/// 
		glPushMatrix(); 
		glTranslatef(35.0,-5.0,0.0); 
		glScalef(0.5,1.0,0.0); 
		tree2();
		 glPopMatrix(); 
		  //***/// / //tree typeC 1/// 
		  glPushMatrix();
		   glTranslatef(30.0,-15.0,0.0);
		    glScalef(0.5,1.0,0.0); 
			tree2();
			 glPopMatrix(); 
			  //***///  
 
 
///tree2///
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(-44.0,-1.0,0.0); 
  glScalef(0.4,0.5,0.0); tree();
   glPopMatrix();
 glPushMatrix();
  glTranslatef(-35.0,5.0,0.0);
   glScalef(0.4,0.5,0.0); 
   treebody(); 
   glPopMatrix(); 
    //***/// / //********home 4********/// 
	glPushMatrix();
	 glTranslatef(-10.0,-10.0,0.0); 
	 home1(); 
	 glPopMatrix();
	 glPopMatrix(); 
	   //***/// / //********road********///
	     glPushMatrix(); 
		glTranslatef(-10.0,15.0,0.0);
		 ground();
		  glPopMatrix();
glPopMatrix();
  glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  ground(); 
  glPopMatrix(); 
  glPopMatrix();
  //divider ///
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider(); 
  glPopMatrix(); 
    glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider1(); 
  glPopMatrix();
    glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider2(); 
  glPopMatrix(); 
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider3(); 
  glPopMatrix(); 
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider4(); 
  glPopMatrix();
    //************/// / //BUS///
 glPushMatrix();
  glTranslatef(cx, -19.0, 0.0);
   glScalef(30.0, 8.0, 0.0);
    bus();
	 glPopMatrix(); 
	  //***///  ///BUS2///
 glPushMatrix(); 
 glTranslatef(cx, -8.0, -15.0);
  glScalef(30.0, 8.0, 0.0); 
  bus();
   glPopMatrix(); 
   glPushMatrix();
	glTranslatef(160.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	 glPopMatrix();

    //***///  ///tree3///
     glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(100.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	 
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(22.0,-32.5,0.0);
   glScalef(0.4,0.5,0.0);
    tree();
	 glPopMatrix(); 
	 glPopMatrix();	 
 glPushMatrix(); 
 glTranslatef(30.5,-26.5,0.0);
  glScalef(0.4,0.5,0.0); 
  treebody();
   glPopMatrix();  //***///  ///home 3///
 glPushMatrix();
  glTranslatef(-5.0,-70.0,0.0); 
  house(); 
  glPopMatrix(); glPopMatrix(); 
   //***///  ///tree typeD 1///
    glPushMatrix(); 
	glTranslatef(-10.0,-50.0,0.0); 
	glScalef(.5,1,0);
	 tree2(); 
	 glPopMatrix(); ///***///
	 //well
	 glPushMatrix();
	glTranslatef(-12.0,-20.0,0.0); 
	glScalef(40.0,40.0,0.0);		
	 well(); 
	 glPopMatrix(); ///***///
     	glPushMatrix();
//	glTranslatef(-12.0,-20.0,0.0); 
	glScalef(40.0,40.0,0.0);
	// bird(); 
	 glPopMatrix(); ///***///
	glPushMatrix();
	glTranslatef(-15.0,10.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
    	glPushMatrix();
	glTranslatef(-18.0,8.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	glPushMatrix();
	glTranslatef(-23.0,6.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();   
	glPushMatrix();
	glTranslatef(-29.0,1.0,0.0); 
	glScalef(25.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();  
	 glPushMatrix();
	glTranslatef(-40.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(20.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();   
	 	 glPushMatrix();
	glTranslatef(24.0,-2.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
    	 glPushMatrix();
	glTranslatef(45.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(20.0,-1.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();
	 	 glPushMatrix();
	glTranslatef(-9.0,5.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(4.0,1.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(12.0,5.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();  
	  glPushMatrix();
	glTranslatef(75.0,-9.5,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(100.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
  glPushMatrix();
	glTranslatef(160.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	  	  glPushMatrix();
	glTranslatef(75.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	  
	glPushMatrix();
     	glTranslatef(-20.4,6.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-20.4,8.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-26.0,1.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-25.0,1.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 
	 
	 
	 //right grass
    glPushMatrix();
     	glTranslatef(28.5,-3.5,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
    glPushMatrix();
     	glTranslatef(30.0,-4.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
 glPushMatrix();
     	glTranslatef(10.0,-40.0,0.0);
	glScalef(25.0,22.0,0.0);
	 bird1(); //wood
	 glPopMatrix(); 
    glPushMatrix();
     	glTranslatef(-10.0,-33.5,0.0);
     	glColor3f(0.0,0.0,0.0);
	glScalef(20.0,25.0,0.0);
	 bird1(); //btree
	 glPopMatrix(); 

      glPushMatrix();
     	glTranslatef(-30.0,-0.5,0.0);
	glScalef(20.0,20.0,0.0);
	 bird1(); 
	 glPopMatrix(); 
 glPushMatrix();
             glColor3f(1.0,1.0,0.9);
	 	glTranslatef(-39.0,1.0,0.0);
	glScalef(20.0,20.0,0.0);
	 bird1(); 
	 glPopMatrix(); 
 glPushMatrix();
   glTranslatef(-30.0,5.0,0.0);
	glScalef(20.0,10.0,0.0);
	 fence(); 
	 glPopMatrix();  
	  glPushMatrix();
   glTranslatef(0.0,0.0,0.0);
	glScalef(20.0,20.0,0.0);
	 apple(); 
	 glPopMatrix();  	 
	 // 1 cloud
 	  glPushMatrix();
	glTranslatef(-25.0,q1,0.0); 
	 bubbles(); 
	  glPopMatrix(); 
	    glPushMatrix();
	glTranslatef(-23.0,q5,0.0); 
	 bubbles(); 
	  glPopMatrix(); 
	
	   glPushMatrix();
	glTranslatef(-28.0,q2,0.0); 
	 bubbles();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(-31.0,q3,0.0); 
	 bubbles(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(-33.0,q4,0.0); 
	 bubbles(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(-36.0,q1,0.0); 
	 bubbles(); 
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(-39.0,q2,0.0); 
	 bubbles();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(-41.0,q3,0.0); 
	 bubbles(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(-15.0,q5,0.0); 
	 bubbles(); 
	 glPopMatrix();
	 glPushMatrix();
	  	glTranslatef(-20.0,q4,0.0); 
	 bubbles(); 
	 glPopMatrix();
	 
	   glPushMatrix();
	glTranslatef(-39.0,21.0,0.0);
	 glScalef(1.0,1.0,0.0);
	 cloud(); 
	  glPopMatrix(); 
	

 	 //2 cloud
 	    glPushMatrix();
	glTranslatef(-5.0,q1,0.0); 
	 bubbles(); 
	  glPopMatrix(); 
	   glPushMatrix();
 	  glPushMatrix();
	glTranslatef(-0.5,q4,0.0); 
	 bubbles(); 
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(-10.0,q2,0.0); 
	 bubbles();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(1.0,q3,0.0); 
	 bubbles(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(3.0,q1,0.0); 
	 bubbles(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(6.0,q1,0.0); 
	 bubbles(); 
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(9.0,q2,0.0); 
	 bubbles();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(12.0,q3,0.0); 
	 bubbles(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(14.0,q5,0.0); 
	 bubbles(); 
	 glPopMatrix(); 
	 //3 cloud
	  glPushMatrix();
	glTranslatef(20.0,q4,0.0); 
	 bubbles(); 
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(22.0,q2,0.0); 
	 bubbles();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(25.0,q3,0.0); 
	 bubbles(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(28.0,q1,0.0); 
	 bubbles(); 
	 glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(30.0,q2,0.0); 
	 bubbles();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(33.0,q3,0.0); 
	 bubbles(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(36.0,q1,0.0); 
	 bubbles(); 
	 glPopMatrix(); 
	 	 glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(38.0,q2,0.0); 
	 bubbles();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(40.0,q3,0.0); 
	 bubbles(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(45.0,q5,0.0); 
	 bubbles(); 
	 glPopMatrix(); 

 	 	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(35.0,-26.5,0.0); 
	glScalef(0.5,0.3,0.0);
	 cloudB(); 
	 glPopMatrix(); 
  glPushMatrix();
	glTranslatef(-0.5,5.5,0.0); 
	glScalef(0.5,0.3,0.0);
	 cloudB(); 
	 glPopMatrix(); 
glPushMatrix();
	glTranslatef(-37.0,19.5,0.0); 
	glScalef(0.5,0.3,0.0);
	 cloudB(); 
	 glPopMatrix(); 
glPushMatrix();
	glTranslatef(-26.0,2.5,0.0); 
	glScalef(0.3,0.2,0.0);
	 cloudB(); 
	 glPopMatrix(); 
 glPushMatrix(); 
 glTranslatef(-1.5,21.3,0.0);
 glScalef(0.25,0.55,0.0);
  triangle1();
   glPopMatrix(); 
 glPushMatrix(); 
 glTranslatef(-8.0,-30.0,0.0);
 glScalef(0.1,0.1,0.0);
  triangle1();
   glPopMatrix(); 
 glPushMatrix(); 
 glTranslatef(10.0,22.0,0.0);
 glScalef(4.0,4.7,0.0);
  bubbles();
   glPopMatrix(); 
    glPushMatrix(); 
 glTranslatef(10.0,16.0,0.0);
 glScalef(5.0,10.0,0.0);
 bubbles();
   glPopMatrix(); 
 glPushMatrix(); 
 glColor3f(0.0,0.0,0.0);
 glTranslatef(10.0,22.0,0.0);
 //glScalef(0.8,0.8,0.0);
 glutSolidSphere(0.5,8,11);
   glPopMatrix(); 
 glPushMatrix(); 
 glColor3f(0.0,0.0,0.0);
 glTranslatef(8.3,22.0,0.0);
 //glScalef(1.0,1.0,0.0);
  glutSolidSphere(0.5,8,11);
   glPopMatrix(); 
glPushMatrix(); 
 glTranslatef(15.0,30.0,0.0);
 glScalef(100.0,30.0,0.0);
  apple();
   glPopMatrix(); 
glPushMatrix(); 
 glTranslatef(8.3,21.0,0.0);
 glScalef(0.09,0.09,0.0);
   triangle();
   glPopMatrix(); 




 	 	  
 glFlush();	
}
void rain(){
 // Draw particles
      glColor3f(0.5, 0.5, 1.0);
      glBegin(GL_LINES);
        glVertex2f(10.0,10.8);
        glVertex2f(10.0,12.8);
      glEnd();
}
void display3()
{
	glClear(GL_COLOR_BUFFER_BIT); 
    
    glPushMatrix();
   day2();
    glPopMatrix();  
	///ground///
 glPushMatrix(); 
 glTranslatef(0.0,-35.0,0.0);
  glScalef(3.5,3.0,0.0);
  rect();
   glPopMatrix();
   
    glPushMatrix(); 
 glTranslatef(30.0,-5.0,0.0);
  glScalef(80.0,40.0,0.0);
// glColor3f(0.0, 0.5, 0.0);
  backgroundtree();
   glPopMatrix();
   
    glPushMatrix();
    glColor3f (1.0,1.0,1.0);
    glTranslatef(-20.0,44.0,0.0);
   	glScalef(0.9,0.8,0.0);
   //	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
   
   glPushMatrix();
    glColor3f (1.0,1.0,1.0);
    glTranslatef(10.5,44.0,0.0);
   	glScalef(0.9,0.8,0.0);
   //	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
   
 glPushMatrix();
    glColor3f (1.0,1.0,1.0);
    glTranslatef(45.0,44.0,0.0);
   	glScalef(0.9,0.8,0.0);
   //	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
  

glPushMatrix();
 glColor3f (1.0,1.0,1.0);
  glTranslatef(cx,17.0,0.0);
   	glScalef(40.0,40.0,0.0);
   //	glTranslatef(cx,17.0,0.0);
     cloudB();
   glPopMatrix(); 
    glPushMatrix();
 glColor3f (1.0,1.0,1.0);
  glTranslatef(cx,20.0,0.0);
  // cloudB();
    glPopMatrix();    
//tree1
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(-49.0,9.5,0.0);
   glScalef(0.4,0.5,0.0); 
   tree();
    glPopMatrix(); 
	 glPushMatrix(); 
	 glTranslatef(-40.4,15.4,0.0); 
	 glScalef(0.4,0.5,0.0);
	  treebody();
	   glPopMatrix();  //  ///
	   
 glPushMatrix();
 // glTranslatef(cx,0.0,0.0);
   glScalef(0.8,1.0,0.0);
    cloud();
	 glPopMatrix();  //***/// / //home 2///
 glPushMatrix(); 
 glTranslatef(-65.0,-20.0,0.0); 
 house(); 
 glPopMatrix();  //***/// / //home 1///
 glPushMatrix();
  glTranslatef(-45.0,-10.0,0.0);
   home1();
    glPopMatrix();
///home 2///
 glPushMatrix();
  glTranslatef(20.0,-15.0,0.0);
   home1();
    glPopMatrix();
	  //***/// / //tree typeA 1///
	   glPushMatrix(); 
	   glTranslatef(-5.0,-5.0,0.0); 
	   glScalef(0.5,1.0,0.0); 
	   tree2(); 
	   glPopMatrix(); 
	    //***/// / //tree typeB 1/// 
		glPushMatrix(); 
		glTranslatef(35.0,-5.0,0.0); 
		glScalef(0.5,1.0,0.0); 
		tree2();
		 glPopMatrix(); 
		  //***/// / //tree typeC 1/// 
		  glPushMatrix();
		   glTranslatef(30.0,-15.0,0.0);
		    glScalef(0.5,1.0,0.0); 
			tree2();
			 glPopMatrix(); 
			  //***///  
 
 
///tree2///
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(-44.0,-1.0,0.0); 
  glScalef(0.4,0.5,0.0); tree();
   glPopMatrix();
 glPushMatrix();
  glTranslatef(-35.0,5.0,0.0);
   glScalef(0.4,0.5,0.0); 
   treebody(); 
   glPopMatrix(); 
    //***/// / //********home 4********/// 
	glPushMatrix();
	 glTranslatef(-10.0,-10.0,0.0); 
	 home1(); 
	 glPopMatrix();
	 glPopMatrix(); 
	   //***/// / //********road********///
	     glPushMatrix(); 
		glTranslatef(-10.0,15.0,0.0);
		 ground();
		  glPopMatrix();
glPopMatrix();
  glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  ground(); 
  glPopMatrix(); 
  glPopMatrix();
  //divider ///
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider(); 
  glPopMatrix(); 
    glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider1(); 
  glPopMatrix();
    glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider2(); 
  glPopMatrix(); 
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider3(); 
  glPopMatrix(); 
   glPushMatrix(); 
  glTranslatef(-10.0,20.0,0.0); 
  divider4(); 
  glPopMatrix();
    //************/// / //BUS///
 glPushMatrix();
  glTranslatef(cx, -19.0, 0.0);
   glScalef(30.0, 8.0, 0.0);
    bus();
	 glPopMatrix(); 
	  //***///  ///BUS2///
 glPushMatrix(); 
 glTranslatef(cx, -8.0, -15.0);
  glScalef(30.0, 8.0, 0.0); 
  bus();
   glPopMatrix(); 
   glPushMatrix();
	glTranslatef(160.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	 glPopMatrix();

    //***///  ///tree3///
     glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(100.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	 
 glPushMatrix();
 glColor3f(0.133, 0.545, 0.133);
  glTranslatef(22.0,-32.5,0.0);
   glScalef(0.4,0.5,0.0);
    tree();
	 glPopMatrix(); 
	 glPopMatrix();	 
 glPushMatrix(); 
 glTranslatef(30.5,-26.5,0.0);
  glScalef(0.4,0.5,0.0); 
  treebody();
   glPopMatrix();  //***///  ///home 3///
 glPushMatrix();
  glTranslatef(-5.0,-70.0,0.0); 
  house(); 
  glPopMatrix(); glPopMatrix(); 
   //***///  ///tree typeD 1///
    glPushMatrix(); 
	glTranslatef(-10.0,-50.0,0.0); 
	glScalef(.5,1,0);
	 tree2(); 
	 glPopMatrix(); ///***///
	 //well
	 glPushMatrix();
	glTranslatef(-12.0,-20.0,0.0); 
	glScalef(40.0,40.0,0.0);		
	 well(); 
	 glPopMatrix(); ///***///
     	glPushMatrix();
//	glTranslatef(-12.0,-20.0,0.0); 
	glScalef(40.0,40.0,0.0);
	// bird(); 
	 glPopMatrix(); ///***///
	glPushMatrix();
	glTranslatef(-15.0,10.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
    	glPushMatrix();
	glTranslatef(-18.0,8.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	glPushMatrix();
	glTranslatef(-23.0,6.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();   
	glPushMatrix();
	glTranslatef(-29.0,1.0,0.0); 
	glScalef(25.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();  
	 glPushMatrix();
	glTranslatef(-40.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(20.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();   
	 	 glPushMatrix();
	glTranslatef(24.0,-2.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
    	 glPushMatrix();
	glTranslatef(45.0,3.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(20.0,-1.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();
	 	 glPushMatrix();
	glTranslatef(-9.0,5.0,0.0); 
	glScalef(20.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(4.0,1.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
	 	 glPushMatrix();
	glTranslatef(12.0,5.0,0.0); 
	glScalef(15.0,15.0,0.0);
	 grass1(); 
	 glPopMatrix();  
	  glPushMatrix();
	glTranslatef(75.0,-9.5,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(100.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(125.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
  glPushMatrix();
	glTranslatef(160.0,-10.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix();
	  	  glPushMatrix();
	glTranslatef(75.0,-25.0,0.0); 
	glScalef(65.0,15.0,0.0);
	 fence();
	  glPopMatrix(); 
	  
	glPushMatrix();
     	glTranslatef(-20.4,6.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-20.4,8.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-26.0,1.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 	glPushMatrix();
     	glTranslatef(-25.0,1.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
	 
	 
	 
	 //right grass
    glPushMatrix();
     	glTranslatef(28.5,-3.5,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); ///***///
    glPushMatrix();
     	glTranslatef(30.0,-4.0,0.0);
	glScalef(12.0,12.0,0.0);
	 grass1(); 
	 glPopMatrix(); 
 glPushMatrix();
     	glTranslatef(10.0,-40.0,0.0);
	glScalef(25.0,22.0,0.0);
	 bird1(); //wood
	 glPopMatrix(); 
    glPushMatrix();
     	glTranslatef(-10.0,-33.5,0.0);
     	glColor3f(0.0,0.0,0.0);
	glScalef(20.0,25.0,0.0);
	 bird1(); //btree
	 glPopMatrix(); 

      glPushMatrix();
     	glTranslatef(-30.0,-0.5,0.0);
	glScalef(20.0,20.0,0.0);
	 bird1(); 
	 glPopMatrix(); 
 glPushMatrix();
             glColor3f(1.0,1.0,0.9);
	 	glTranslatef(-39.0,1.0,0.0);
	glScalef(20.0,20.0,0.0);
	 bird1(); 
	 glPopMatrix(); 
 glPushMatrix();
   glTranslatef(-30.0,5.0,0.0);
	glScalef(20.0,10.0,0.0);
	 fence(); 
	 glPopMatrix();  
	  glPushMatrix();
   glTranslatef(0.0,0.0,0.0);
	glScalef(20.0,20.0,0.0);
	 apple(); 
	 glPopMatrix();  	 
	 // 1 cloud
 	  glPushMatrix();
	glTranslatef(-25.0,q1,0.0);
	glScalef(-0.01,1.9,0.0); 
       rain(); 
	  glPopMatrix(); 
	    glPushMatrix();
	glTranslatef(-23.0,q5,0.0); 
	 rain(); 
	  glPopMatrix(); 
	
	   glPushMatrix();
	glTranslatef(-28.0,q2,0.0);
	glScalef(-0.01,1.9,0.0); 
	rain();
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(-31.0,q3,0.0); 
	rain(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(-33.0,q4,0.0);
	glScalef(-0.01,1.9,0.0); 
	 rain(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(-36.0,q1,0.0); 
	 rain(); 
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(-39.0,q2,0.0);
	glScalef(-0.01,1.9,0.0); 
	 rain();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(-41.0,q3,0.0); 
	 rain(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(-15.0,q5,0.0);
	glScalef(-0.01,1.9,0.0); 
	rain(); 
	 glPopMatrix();
	 glPushMatrix();
	  	glTranslatef(-20.0,q4,0.0); 
	 rain(); 
	 glPopMatrix();
	 
	   glPushMatrix();
	glTranslatef(-39.0,21.0,0.0);
	 glScalef(1.0,1.0,0.0);
	 cloud(); 
	  glPopMatrix(); 
	

 	 //2 cloud
 	    glPushMatrix();
	glTranslatef(-5.0,q1,0.0);
	glScalef(-0.01,1.9,0.0); 
	rain(); 
	  glPopMatrix(); 
	   glPushMatrix();
 	  glPushMatrix();
	glTranslatef(-0.5,q4,0.0); 
	 rain(); 
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(-10.0,q2,0.0);
	glScalef(-0.01,1.9,0.0); 
	 rain();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(1.0,q3,0.0); 
	 rain(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(3.0,q1,0.0);
	glScalef(-0.01,1.9,0.0); 
	 rain(); 
	 glPopMatrix();  
 	 
 	  glPushMatrix();
	glTranslatef(6.0,q1,0.0); 
	 rain(); 
	  glPopMatrix(); 
	   glPushMatrix();
	glTranslatef(9.0,q2,0.0);
	glScalef(-0.01,1.9,0.0); 
	 rain();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(12.0,q3,0.0); 
	 rain(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(14.0,q5,0.0); 
	glScalef(-0.01,1.9,0.0);
	 rain(); 
	 glPopMatrix(); 
	 //3 cloud
	  glPushMatrix();
	glTranslatef(20.0,q4,0.0); 
	 rain(); 
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(22.0,q2,0.0);
	glScalef(-0.01,1.9,0.0); 
	 rain();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(25.0,q3,0.0);
	 rain(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(28.0,q1,0.0);
	glScalef(-0.01,1.9,0.0); 
	 rain(); 
	 glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(30.0,q2,0.0); 
	 rain();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(33.0,q3,0.0); 
	glScalef(-0.01,1.9,0.0);
	 rain(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(36.0,q1,0.0); 
	 rain(); 
	 glPopMatrix(); 
	 	 glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(38.0,q2,0.0);
	glScalef(-0.01,1.9,0.0); 
	 rain();
	  glPopMatrix(); 
	  glPushMatrix();
	glTranslatef(40.0,q3,0.0);
	 rain(); 
	 glPopMatrix();
	  glPushMatrix();
	glTranslatef(45.0,q5,0.0); 
	glScalef(-0.01,1.9,0.0);
	 rain(); 
	 glPopMatrix(); 
	  
	 glPushMatrix();
	glTranslatef(-26.0,2.5,0.0); 
	glScalef(-0.01,1.9,0.0);
	 rain(); 
	 glPopMatrix();  	  
	 

 glFlush();	

}



 void init(void) 
 {
 glClearColor (0.0, 0.749, 1.0, 0.0); 
 glOrtho(-50.0,50.0, -50.0, 50.0, -1.0, 1.0);
}
 
 void spinDisplay() {
 cx = cx +0.07; 
 if(cx>70) {
 cx = -70; 
}
 	yw=yw-0.03;
   	if(yw<13.0){
   	yw=22.0;
   }
   f1-=0.05;
   if(f1<-1.0)
    {
        f1=9.9;
    }
     f2-=0.08;
if(f2<-1.0){
        f2=9.9;
}
    f3-=0.08;
if(f3<-1.0)
    {
        f3=9.9;
}
     f4-=0.05;
if(f4<-28.0)
    {
        f4=-22.2;
}
 f5-=0.08;
if(f5<-28.0)
    {
        f5=-22.2;
}
   f6-=0.08;
if(f6<-40.0)
    {
        f6=-35.0;
}
 
   
    q1-=0.1;
    if(q1<0.9)
    {
        q1=32.4;//y
    }

    q2-=0.09;
    if(q2<-25.0)
    {
       // p2=0.0;
        q2=32.4;
    }
    q3-=0.25;
    if(q3<-28.0)
    {
       // p3=0.0;
        q3=32.4;
    }
    q4-=0.3;
if(q4<-30.0)
    {
       // p3=0.0;
        q4=32.4;
    }
       q5-=0.09;
if(q5<13.0)
    {
       // p3=0.0;
        q5=40.5;
        
    }    
 
  glutPostRedisplay();
   }
   
   
   
 void mouse(int key, int state, int x, int y) {
 switch(key) {
 case GLUT_LEFT_BUTTON: if (state == GLUT_DOWN) {
 glutIdleFunc(spinDisplay);
  }
 break;
 case GLUT_MIDDLE_BUTTON: case GLUT_RIGHT_BUTTON: if (state == GLUT_DOWN) {
 glutIdleFunc(NULL); }
 break;
 default: break; } }
 void keyDisplayAnimationDay() {
 str=500.0;
  sr=0.0;
 sg=0.749;
  sb=1.0;
 ss=0.0;
	  mn=500.0;
	//  glPushMatrix();
	//disp(); 
	//glPopMatrix();
	   glutPostRedisplay(); 
	   }
 void keyDisplayAnimationNight() {
 str = 0.0; sr=0.0;
 sg=0.0; sb=0.0; ss=500.0;
 mn = 0.0;
 glutPostRedisplay();
  }
 /*void keyboard(unsigned char key, int x, int y) {
 switch(key) {
 case 'd': keyDisplayAnimationDay(); 
 break; 
  case 'n': night();
//	glutPostRedisplay();
   keyDisplayAnimationNight();
    break; 
	 default: break;
	  } }*/
	  
	  void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  's':
	       // glutDestroyWindow(1);
	         glutInitWindowSize (1350, 690);
             glutInitWindowPosition (0, 0); 
	        glutCreateWindow("village scenario");
	        init();
	        glutKeyboardFunc(handleKeypress);
	         glutMouseFunc(mouse);
            glutDisplayFunc(display1);
             glutPostRedisplay();
            break;
        
        case 'w':
            glutDestroyWindow(1);
            glutInitWindowSize (1350, 690);
             glutInitWindowPosition (0, 0); 
	        glutCreateWindow("village scenario");
            init();
            glutKeyboardFunc(handleKeypress);
	         glutMouseFunc(mouse);    
            glutDisplayFunc(display2);
            glutPostRedisplay();
            break;
        case 'p':
        	 glutDestroyWindow(1);
            glutInitWindowSize (1350, 690);
             glutInitWindowPosition (0, 0); 
	        glutCreateWindow("village scenario");
            init();
            glutKeyboardFunc(handleKeypress);
	         glutMouseFunc(mouse);    
            glutDisplayFunc(disp);
            glutPostRedisplay();
            break;
               
        case 'r':
        	 glutDestroyWindow(1);
            glutInitWindowSize (1350, 690);
             glutInitWindowPosition (0, 0); 
	        glutCreateWindow("village scenario");
            init();
            glutKeyboardFunc(handleKeypress);
	         glutMouseFunc(mouse);    
            glutDisplayFunc(display3);
            glutPostRedisplay();
            break;
         
      glutPostRedisplay();
}
}
 int main( int argc,char ** argv) 
 {
 printf(">><< Press s for summer season>><< Press w for winter season >><< Press r for rainy season>><< Press p for spring season>><<\n\n");
  printf("Click Mouse Left/Right Button for cloud movement\n\n");
  glutInit(&argc,argv); 
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (1350, 690);
    glutInitWindowPosition (0, 0); 
	glutCreateWindow("My House "); 
	init();
//	 glutDisplayFunc(StartingText);
 glutDisplayFunc(disp);
  glutMouseFunc(mouse);
   glutKeyboardFunc(handleKeypress);
    glutMainLoop();
	 return 0;
}
 
