#include<iostream>
using namespace std;
#include<vector>

class sort{
	public:
		void insertSort(vector<int>& m)
		{
			int begin = 0;
			int i = 0;
			for(;i<m.size();i++)
			{
				int end = i;
				int tmp = m[end+1];
				while(end>=0)
				{
					if(m[end]>tmp)
					{
						m[end+1]=m[end];
						end--;
					}
					else
					  break;
				}
			}
		}
		void selectSort(vector<int>& v)
		{
			int left = 0;
			int right = v.size()-1;
			int max = right;
			int min = 0;
			while(left<=right)
			{
				max = right;
				min = left;
				for(int i = left;i<=right;i++)
				{
					if(v[i]<v[min])
					  min = i;
					if(v[i]>v[max])
					  max = i;
				}
				if(v[max]>v[right])
				  swap(v[max],v[right]);
				if(v[min]<v[left])
				  swap(v[min],v[left]);

				left++;
				right--;
			}
		}
		void BubbleSort(vector<int>& v)
		{
			int i = 0;
			for(;i<v.size();i++)
			{
				for(int j = 0;j<v.size()-i-1;j++)
				{
					if(v[j]>v[j+1])
					{
						swap(v[j],v[j+1]);
					}
				}

			}
		}
		void heapSort(vector<int>& v)
		{
			int n = v.size();
			for(int i = (n-2)/2;i>=0;i--)
			{
				AdjustDown(v,n,i);
			}
			int end = v.size()-1;
			while(end>0)
			{
				swap(v[end],v[0]);
				AdjustDown(v,end,0);
				end--;
			}
			
		}
		void AdjustDown(vector<int>& ve,int size,int n)
		{
			int parent = n;
			int child = parent*2+1;
			while(child<size)
			{
				if(child+1<size && ve[child+1]>ve[child])
				  child++;
				if(ve[child]>ve[parent])
				{
					swap(ve[child],ve[parent]);
					parent = child;
					child = 2*parent+1;
				}
				else
				  break;
			}

		}
		void shellSort(vector<int>& v)
		{
			int gap = 1;
			int n = v.size();
			for(int i = 0;i<n;i++)
			{

			}
		}
};

int main()
{
	vector<int> t;
	t.push_back(1);
	t.push_back(2);
	t.push_back(1);
	t.push_back(1);
	t.push_back(2);
	t.push_back(2);

	sort s;
//	s.insertSort(t);
	//s.selectSort(t);
	//s.BubbleSort(t);
	s.heapSort(t);
	for(int i = 0;i<t.size();i++)
	{
		std::cout<<t[i]<<std::endl;
	}
	return 0;
}
