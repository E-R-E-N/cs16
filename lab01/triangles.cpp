#include<iostream>
using namespace std;

//�жϺ���
bool judge(int number,int size)
{
	if (size == 0)
	{
		cout << "size must be greater than 0"<<endl;
		return false;
	}
	else if (number > 4 || number <1)
	{
		cout << "number must be between 1 and 4"<<endl;
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	while (1)
	{
		cout << "enter number and size of triangles" << endl;
		int number, size;   //number is number ,size is size
		cin >> number >> size;
		if (judge(number, size) == true)
		{
			int size_number = 1; //�ж��ǵڼ���������

			for (int i = 1; i <= size; i++)
			{
				for (int j = 1; j <= number;)
				{
					//��һ��������
					if (size_number == 1)
					{
						for (int k = 1; k <= size; k++)
						{
							if (k <= i)         //�ж������ڵڼ������
							{
								cout << "*";
							}
							else
							{
								cout << " ";
							}
						}
						cout << " ";
						if (size_number == number)
						{
							size_number = 1;
						}
						else
						{
							j++;
							size_number++;
						}
						j++;
					}

					//�ڶ���������
					if (size_number == 2)
					{
						for (int l = size; l > 0; l--)
						{
							if (l >= i)
							{
								cout << "*";
							}
							else
							{
								cout << " ";
							}
						}
						cout << " ";
						if (size_number == number)
						{
							size_number = 1;
						}
						else
						{
							j++;
							size_number++;
						}
						j++;
					}

					//������������
					if (size_number == 3)
					{
						for (int m = 1; m <= size; m++)
						{
							if (m < i)
							{
								cout << " ";
							}
							else
							{
								cout << "*";
							}
						}
						cout << " ";
						if (size_number == number)
						{
							size_number = 1;
						}
						else
						{
							j++;
							size_number++;
						}
						j++;
					}

					//���ĸ�������
					if (size_number == 4)
					{
						for (int n = size; n > 0; n--)
						{
							if (n > i)
							{
								cout << " ";
							}
							else
							{
								cout << "*";
							}
						}
						cout << " ";
						if (size_number == number)
						{
							size_number = 1;
						}
						else
						{
							j++;
							size_number++;
						}
						j++;
					}

				}
				cout << endl;
			}
		}
	}
}