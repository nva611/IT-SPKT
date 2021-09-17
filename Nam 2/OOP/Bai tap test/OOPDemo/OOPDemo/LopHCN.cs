using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPDemo
{
	public class LopHCN : LopDG
	{
		public LopHCN() : base(2)
		{
			Console.Write("Nhap chieu dai: ");
			cdCanh[0] = Double.Parse(Console.ReadLine());

			Console.Write("Nhap chieu rong: ");
			cdCanh[1] = Double.Parse(Console.ReadLine());
		}

		public override double tinhChuVi()
		{
			return 2 * (cdCanh[0] + cdCanh[1]);
		}

		public override double tinhDienTich()
		{
			return cdCanh[0] * cdCanh[1];
		}
		public override void inThongTin()
		{
			base.inThongTin();
			Console.WriteLine("Lop dan xuat: <<LopHCN>>");
			Console.WriteLine("Chieu dai: {0:0.00}", cdCanh[0]);
			Console.WriteLine("Chieu rong: {0:0.00}", cdCanh[1]);
			Console.WriteLine("Chu vi: {0:0.00}", tinhChuVi());
			Console.WriteLine("Dien tich: {0:0.00}", tinhDienTich());
		}
	}
}
