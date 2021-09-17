using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPDemo
{
	public abstract class LopDG
	{
		private int soCanh;
		protected double[] cdCanh;
		public LopDG(int soCanh)
		{
			this.soCanh = soCanh;
			cdCanh = new double[soCanh];
		}
		public virtual void inThongTin()
		{
			Console.WriteLine("Base class: <<LopDG>>");
		}
		public abstract double tinhChuVi();
		public abstract double tinhDienTich();
	}
}
