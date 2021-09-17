using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyClassLibString
{
    public class XuLyChuoi
    {
        public static int demSoTu(string s)
		{
            int dem = 0;
            s = s.Trim() + ' ';
            for (int i = 0; i < s.Length; i++)
                if (s[i] != ' ' && s[i + 1] == ' ') 
                    dem++;
            return dem;
		}
        public static string daoNguocChuoi(string s)
		{
            string chuoiDao = "";
            for(int i =s.Length - 1; i>=0; i--)
			{
                chuoiDao = chuoiDao + s[i];
			}
            return chuoiDao;
		}
    }
}
