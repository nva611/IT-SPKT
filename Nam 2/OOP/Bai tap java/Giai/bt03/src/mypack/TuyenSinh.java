package mypack;
import java.util.LinkedList;
import java.util.ListIterator;
import java.util.Iterator;
public class TuyenSinh {
	private LinkedList<ThiSinh> danhSach;

	
	
	/**
	 * @param danhSach
	 */
	public TuyenSinh() {
		super();
		this.danhSach = new LinkedList<ThiSinh>();
	}



	public LinkedList<ThiSinh> getDanhSach() {
		return danhSach;
	}
	public void setDanhSach(LinkedList<ThiSinh> danhSach) {
		this.danhSach = danhSach;
	}
	
	public void themThiSinh(ThiSinh thiSinh)
	{
		this.danhSach.add(thiSinh);
	}
	
	public boolean hienThiThongTinDanhSach()
	{
		if(this.getDanhSach().isEmpty())
			return false;
		ListIterator<ThiSinh> itr = this.getDanhSach().listIterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
		return true;
	}
	
	public boolean timKiemTheoSoBaoDanh(String sBD)
	{
		Iterator<ThiSinh> itr = this.getDanhSach().iterator();
		while(itr.hasNext())
		{
			ThiSinh ts = itr.next();
			if(ts.getSoBaoDanh().equalsIgnoreCase(sBD))
			{
				System.out.println(ts);
				return true;
			}
		}
		return false;
	}
}
