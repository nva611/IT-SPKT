using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MyClassLibString;

namespace TestString
{
	class Program
	{
		static void Main(string[] args)
		{
			string s;
			s = Console.ReadLine();
			string chuoiDao = "";
			for (int i = s.Length - 1; i >= 0; i--)
			{
				chuoiDao = chuoiDao + s[i];
			}
			Console.WriteLine(chuoiDao);
			XuLyChuoi.daoNguocChuoi(s);
			Console.WriteLine(XuLyChuoi.demSoTu(s));

			Console.WriteLine(s);
			Console.ReadKey();

		}
	}
}
