using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPDemo
{
	public class LopTG : LopDG
	{
		public LopTG() : base(3)
		{
			for(int i=0; i<3; i++)
			{
				Console.Write("Nhap chieu dai canh thu {0}: ", i + 1);
				cdCanh[i] = Double.Parse(Console.ReadLine());
			}
		}

		public override double tinhChuVi()
		{
			return cdCanh[0] + cdCanh[1] + cdCanh[2];
		}

		public override double tinhDienTich()
		{
			double p = (cdCanh[0] + cdCanh[1] + cdCanh[2]) / 2;
			return Math.Sqrt(p * (p - cdCanh[0]) * (p - cdCanh[1]) * (p - cdCanh[2]));
		}
		public override void inThongTin()
		{
			base.inThongTin();
			Console.WriteLine("Lop dan xuat: <<LopHCN>>");
			Console.WriteLine("Chieu dai 3 canh la: {0:0.00}, {1:0.00}, {2:0.00}", cdCanh[0], cdCanh[1], cdCanh[2]);
			Console.WriteLine("Chu vi: {0:0.00}", tinhChuVi());
			Console.WriteLine("Dien tich: {0:0.00}", tinhDienTich());
		}
	}
}
