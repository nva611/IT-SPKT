using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPDemo
{
	public class LopHV : LopDG
	{
		public LopHV() : base(1)
		{
			Console.Write("Nhap chieu dai canh hinh vuong: ");
			cdCanh[0] = Double.Parse(Console.ReadLine());
		}

		public override double tinhChuVi()
		{
			return 4 * cdCanh[0];
		}

		public override double tinhDienTich()
		{
			return cdCanh[0] * cdCanh[0];
		}
		public override void inThongTin()
		{
			base.inThongTin();
			Console.WriteLine("Lop dan xuat: <<LopHV>>");
			Console.WriteLine("Canh hinh vuong: {0:0.00}", cdCanh[0]);
			Console.WriteLine("Chu vi: {0:0.00}", tinhChuVi());
			Console.WriteLine("Dien tich: {0:0.00}", tinhDienTich());
		}
	}
}
