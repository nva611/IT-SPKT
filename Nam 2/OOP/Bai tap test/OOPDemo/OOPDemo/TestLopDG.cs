using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPDemo
{
	class TestLopDG
	{
		static void Main(string[] args)
		{
			LopHV hv = new LopHV();
			hv.inThongTin();

			Console.WriteLine();

			LopHCN hcn = new LopHCN();
			hcn.inThongTin();

			Console.WriteLine();

			LopTG tg = new LopTG();
			tg.inThongTin();

			Console.ReadKey();
		}
	}
}
