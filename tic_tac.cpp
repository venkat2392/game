#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int i,j,k,l,m,n,p,q;
	string first,second;
	int a[3][3]={	2,2,2,
			2,2,2,
			2,2,2,};
	system("clear");
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@(WELCOME TO TIC TAC GAME)@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"first person name:";
	cin>>first;
	cout<<"second person name:";
	cin>>second;
	for(l=0;l<=2;l++)
	{
	cout<<"first person["<<first<<"]chance (1,2,3,4,5,6,7,8,9) with zero(0)"<<endl;
	cin>>k;
	switch(k)
	{
		case 1:
			a[0][0]=0;
			break;
		case 2:
			a[0][1]=0;
			break;
		case 3:
			a[0][2]=0;
			break;
		case 4:
			a[1][0]=0;
			break;
		case 5:
			a[1][1]=0;
			break;
		case 6:
			a[1][2]=0;
			break;
		case 7:
			a[2][0]=0;
			break;
		case 8:
			a[2][1]=0;
			break;
		case 9:
			a[2][2]=0;
			break;
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
				switch(a[i][j])
				{
					case 0:
						cout<<"\t0\t";
						break;
					case 1:
						cout<<"\t1\t";
						break;
					default:
						cout<<"\t*\t";
				}
		}
		cout<<endl<<endl;
	}
	
	if(((a[0][0]==0)&&(a[0][1]==0)&&(a[0][2]==0))||((a[0][0]==0)&&(a[1][0]==0)&&(a[2][0]==0))||((a[0][0]==0)&&(a[1][1]==0)&&(a[2][2]==0))||((a[0][1]==0)&&(a[1][1]==0)&&(a[2][1]==0))||((a[0][2]==0)&&(a[1][2]==0)&&(a[2][2]==0))||((a[0][2]==0)&&(a[1][1]==0)&&(a[2][0]==0))||((a[1][0]==0)&&(a[1][1]==0)&&(a[1][2]==0))||((a[2][0]==0)&&(a[2][1]==0)&&(a[2][2]==0))||((a[2][0]==0)&&(a[1][1]==0)&&(a[0][2]==0)))
	{
		cout<<"\t*********(GAME OVER)*********"<<endl;
		cout<<"\t@@@@@(winner is ["<<first<<"]@@@@@"<<endl;
		exit(0);
	}

	tab:	cout<<"second person["<<second<<"]chance (1,2,3,4,5,6,7,8,9) one(1)"<<endl;
		cin>>m;
		if((k==m==1)||(k==m==2)||(k==m==3)||(k==m==4)||(k==m==5)||(k==m==6)||(k==m==7)||(k==m==8)||(k==m==9))
		{
			cout<<"already selected this option,please reselect"<<endl<<endl;
			goto tab;
		}
	switch(m)
	{
		case 1:
			a[0][0]=1;
			break;
		case 2:
			a[0][1]=1;
			break;
		case 3:
			a[0][2]=1;
			break;
		case 4:
			a[1][0]=1;
			break;
		case 5:
			a[1][1]=1;
			break;
		case 6:
			a[1][2]=1;
			break;
		case 7:
			a[2][0]=1;
			break;
		case 8:
			a[2][1]=1;
			break;
		case 9:
			a[2][2]=1;
			break;
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
				switch(a[i][j])
				{
					case 0:
						cout<<"\t0\t";
						break;
					case 1:
						cout<<"\t1\t";
						break;
					default:
						cout<<"\t*\t";
				}
		}
		cout<<endl<<endl;
	}

      if(((a[0][0]==1)&&(a[0][1]==1)&&(a[0][2]==1))||((a[0][0]==1)&&(a[1][0]==1)&&(a[2][0]==1))||((a[0][0]==1)&&(a[1][1]==1)&&(a[2][2]==1))||((a[0][1]==1)&&(a[1][1]==1)&&(a[2][1]==1))||((a[0][2]==1)&&(a[1][2]==1)&&(a[2][2]==1))||((a[0][2]==1)&&(a[1][1]==1)&&(a[2][0]==1))||((a[1][0]==1)&&(a[1][1]==1)&&(a[1][2]==1))||((a[2][0]==1)&&(a[2][1]==1)&&(a[2][2]==1))||((a[2][0]==1)&&(a[1][1]==1)&&(a[0][2]==1)))
        {
		cout<<"\t*********(GAME OVER)*********"<<endl;
		cout<<"\t@@@@(winer is["<<second<<"]@@@@"<<endl;
		exit(0);
	}
  }

	for(n=0;n<=30;n++)
	{
	    fst:cout<<"first person["<<first<<"]move (1->2(12),1->4(14),1->5(15),2->1(21),2->3(23),2->5(25),3->2(32),3->5(35),3->6(36),4->1(41),4->5(45),4->7(47),5->1(51),5->2(52),5->3(53),5->4(54),5->6(56),5->7(57),5->8(58),5->9(59),7->4(74),7->5(75),7->8(78),8->7(87),8->5(85),8->9(89),9->5(95),9->6(96),9->8(98)) with zero(0)"<<endl;
		cin>>p;
		switch(p)
		{
			case 12://1->2
				if((a[0][1]==0)||(a[0][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][1]=a[0][0];
					a[0][0]=2;
					break;
				}
			case 14://1->4
				if((a[1][0]==0)||(a[1][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][0]=a[0][0];
					a[0][0]=2;
					break;
				}
			case 15://1->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][1]=a[0][0];
					a[0][0]=2;
					break;
				}
			case 21://2->1
				if((a[0][0]==0)||(a[0][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][0]=a[0][1];
					a[0][1]=2;
					break;
				}
			case 23://2->3
				if((a[0][2]==0)||(a[0][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][2]=a[0][1];
					a[0][1]=2;
					break;
				}
			case 25://2->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][1]=a[0][1];
					a[0][1]=2;
					break;
				}
			case 32://3->2
				if((a[0][1]==0)||(a[0][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][1]=a[0][2];
					a[0][2]=2;
					break;
				}
			case 36://3->6
				if((a[1][2]==0)||(a[1][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][2]=a[0][2];
					a[0][2]=2;
					break;
				}
			case 35://3->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][1]=a[0][2];
					a[0][2]=2;
					break;
				}
			case 41://4->1
				if((a[0][0]==0)||(a[0][0]==0))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][0]=a[1][0];
					a[1][0]=2;
					break;
				}
			case 47://4->7
				if((a[2][0]==0)||(a[2][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][0]=a[1][0];
					a[1][0]=2;
					break;
				}
			case 45://4->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][1]=a[1][0];
					a[1][0]=2;
					break;
				}
			case 51://5->1
				if((a[0][0]==0)||(a[0][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][0]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 52://5->2
				if((a[0][1]==0)||(a[0][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][1]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 53://5->3
				if((a[0][2]==0)||(a[0][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][2]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 54://5->4
				if((a[1][0]==0)||(a[1][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][0]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 56://5->6
				if((a[1][2]==0)||(a[1][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][2]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 57://5->7
				if((a[2][0]==0)||(a[2][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][0]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 58://5->8
				if((a[2][1]==0)||(a[2][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][1]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 59://5->9
				if((a[2][2]==0)||(a[2][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][2]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 63://6->3
				if((a[0][2]==0)||(a[0][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[0][2]=a[1][2];
					a[1][2]=2;
					break;
				}
			case 65://6->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][1]=a[1][2];
					a[1][2]=2;
					break;
				}
			case 69://6->9
				if((a[2][2]==0)||(a[2][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][2]=a[1][2];
					a[1][2]=2;
					break;
				}
			case 74://7->4
				if((a[1][0]==0)||(a[1][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][0]=a[2][0];
					a[2][0]=2;
					break;
				}
			case 75://7->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][1]=a[2][0];
					a[2][0]=2;
					break;
				}
			case 78://7->8
				if((a[2][1]==0)||(a[2][1]==0))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][1]=a[2][0];
					a[2][0]=2;
					break;
				}
			case 87://8->7
				if((a[2][0]==0)||(a[2][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][0]=a[2][1];
					a[2][1]=2;
					break;
				}
			case 85://8->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][1]=a[2][1];
					a[2][1]=2;
					break;
				}
			case 89://8->9
				if((a[2][2]==0)||(a[2][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][2]=a[2][1];
					a[2][1]=2;
					break;
				}
			case 98://9->8
				if((a[2][1]==0)||(a[2][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[2][1]=a[2][2];
					a[2][2]=2;
					break;
				}
			case 95://9->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][1]=a[2][2];
					a[2][2]=2;
					break;
				}
			case 96://9->6
				if((a[1][2]==0)||(a[1][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto fst;
				}
				else
				{
					a[1][2]=a[2][2];
					a[2][2]=2;
					break;
				}
		}


	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
				switch(a[i][j])
				{
					case 0:
						cout<<"\t0\t";
						break;
					case 1:
						cout<<"\t1\t";
						break;
					default:
						cout<<"\t*\t";
				}
		}
		cout<<endl<<endl;
	}
	
	if(((a[0][0]==0)&&(a[0][1]==0)&&(a[0][2]==0))||((a[0][0]==0)&&(a[1][0]==0)&&(a[2][0]==0))||((a[0][0]==0)&&(a[1][1]==0)&&(a[2][2]==0))||((a[0][1]==0)&&(a[1][1]==0)&&(a[2][1]==0))||((a[0][2]==0)&&(a[1][2]==0)&&(a[2][2]==0))||((a[0][2]==0)&&(a[1][1]==0)&&(a[2][0]==0))||((a[1][0]==0)&&(a[1][1]==0)&&(a[1][2]==0))||((a[2][0]==0)&&(a[2][1]==0)&&(a[2][2]==0))||((a[2][0]==0)&&(a[1][1]==0)&&(a[0][2]==0)))
	{
		cout<<"\t*********(GAME OVER)*********"<<endl;
		cout<<"\t@@@@(winner is["<<first<<"]@@@@"<<endl;
		exit(0);
	}
		
		scn:cout<<"second person["<<second<<"]move (1->2(12),1->4(14),1->5(15),2->1(21),2->3(23),2->5(25),3->2(32),3->5(35),3->6(36),4->1(41),4->5(45),4->7(47),5->1(51),5->2(52),5->3(53),5->4(54),5->6(56),5->7(57),5->8(58),5->9(59),7->4(74),7->5(75),7->8(78),8->7(87),8->5(85),8->9(89),9->5(95),9->6(96),9->8(98)) with one(1)"<<endl;
		cin>>q;
		switch(q)
		{
			case 12://1->2
				if((a[0][1]==0)||(a[0][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][1]=a[0][0];
					a[0][0]=2;
					break;
				}
			case 14://1->4
				if((a[1][0]==0)||(a[1][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][0]=a[0][0];
					a[0][0]=2;
					break;
				}
			case 15://1->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][1]=a[0][0];
					a[0][0]=2;
					break;
				}
			case 21://2->1
				if((a[0][0]==0)||(a[0][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][0]=a[0][1];
					a[0][1]=2;
					break;
				}
			case 23://2->3
				if((a[0][2]==0)||(a[0][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][2]=a[0][1];
					a[0][1]=2;
					break;
				}
			case 25://2->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][1]=a[0][1];
					a[0][1]=2;
					break;
				}
			case 32://3->2
				if((a[0][1]==0)||(a[0][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][1]=a[0][2];
					a[0][2]=2;
					break;
				}
			case 36://3->6
				if((a[1][2]==0)||(a[1][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][2]=a[0][2];
					a[0][2]=2;
					break;
				}
			case 35://3->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][1]=a[0][2];
					a[0][2]=2;
					break;
				}
			case 41://4->1
				if((a[0][0]==0)||(a[0][0]==0))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][0]=a[1][0];
					a[1][0]=2;
					break;
				}
			case 47://4->7
				if((a[2][0]==0)||(a[2][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][0]=a[1][0];
					a[1][0]=2;
					break;
				}
			case 45://4->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][1]=a[1][0];
					a[1][0]=2;
					break;
				}
			case 51://5->1
				if((a[0][0]==0)||(a[0][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][0]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 52://5->2
				if((a[0][1]==0)||(a[0][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][1]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 53://5->3
				if((a[0][2]==0)||(a[0][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][2]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 54://5->4
				if((a[1][0]==0)||(a[1][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][0]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 56://5->6
				if((a[1][2]==0)||(a[1][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][2]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 57://5->7
				if((a[2][0]==0)||(a[2][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][0]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 58://5->8
				if((a[2][1]==0)||(a[2][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][1]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 59://5->9
				if((a[2][2]==0)||(a[2][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][2]=a[1][1];
					a[1][1]=2;
					break;
				}
			case 63://6->3
				if((a[0][2]==0)||(a[0][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[0][2]=a[1][2];
					a[1][2]=2;
					break;
				}
			case 65://6->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][1]=a[1][2];
					a[1][2]=2;
					break;
				}
			case 69://6->9
				if((a[2][2]==0)||(a[2][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][2]=a[1][2];
					a[1][2]=2;
					break;
				}
			case 74://7->4
				if((a[1][0]==0)||(a[1][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][0]=a[2][0];
					a[2][0]=2;
					break;
				}
			case 75://7->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][1]=a[2][0];
					a[2][0]=2;
					break;
				}
			case 78://7->8
				if((a[2][1]==0)||(a[2][1]==0))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][1]=a[2][0];
					a[2][0]=2;
					break;
				}
			case 87://8->7
				if((a[2][0]==0)||(a[2][0]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][0]=a[2][1];
					a[2][1]=2;
					break;
				}
			case 85://8->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][1]=a[2][1];
					a[2][1]=2;
					break;
				}
			case 89://8->9
				if((a[2][2]==0)||(a[2][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][2]=a[2][1];
					a[2][1]=2;
					break;
				}
			case 98://9->8
				if((a[2][1]==0)||(a[2][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[2][1]=a[2][2];
					a[2][2]=2;
					break;
				}
			case 95://9->5
				if((a[1][1]==0)||(a[1][1]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][1]=a[2][2];
					a[2][2]=2;
					break;
				}
			case 96://9->6
				if((a[1][2]==0)||(a[1][2]==1))
				{
					cout<<"take other than this move"<<endl;
					goto scn;
				}
				else
				{
					a[1][2]=a[2][2];
					a[2][2]=2;
					break;
				}
		}
	

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
				switch(a[i][j])
				{
					case 0:
						cout<<"\t0\t";
						break;
					case 1:
						cout<<"\t1\t";
						break;
					default:
						cout<<"\t*\t";
				}
		}
		cout<<endl<<endl;
	}
      if(((a[0][0]==1)&&(a[0][1]==1)&&(a[0][2]==1))||((a[0][0]==1)&&(a[1][0]==1)&&(a[2][0]==1))||((a[0][0]==1)&&(a[1][1]==1)&&(a[2][2]==1))||((a[0][1]==1)&&(a[1][1]==1)&&(a[2][1]==1))||((a[0][2]==1)&&(a[1][2]==1)&&(a[2][2]==1))||((a[0][2]==1)&&(a[1][1]==1)&&(a[2][0]==1))||((a[1][0]==1)&&(a[1][1]==1)&&(a[1][2]==1))||((a[2][0]==1)&&(a[2][1]==1)&&(a[2][2]==1))||((a[2][0]==1)&&(a[1][1]==1)&&(a[0][2]==1)))
        {
		cout<<"\t*********(GAME OVER)*********"<<endl;
		cout<<"\t@@@@(winer is["<<second<<"]@@@@"<<endl;
		exit(0);
	}
    }
}

