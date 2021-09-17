package mypack;
import java.util.LinkedList;
import java.util.ListIterator;

public class QuanLyTaiLieu {
	private LinkedList<TaiLieu> quanLy;

	
	public QuanLyTaiLieu()
	{
		this.quanLy = new LinkedList<TaiLieu>(); 
	}
	

	public LinkedList<TaiLieu> getQuanLy() {
		return quanLy;
	}

	public void setQuanLy(LinkedList<TaiLieu> quanLy) {
		this.quanLy = quanLy;
	}
	
	
	
	public void themTaiLieu(TaiLieu taiLieu)
	{
		this.getQuanLy().add(taiLieu);
	}
	
	public boolean xoaTaiLieuTheoMa(String ma)
	{
		ListIterator<TaiLieu> itr = this.getQuanLy().listIterator();
		boolean xoa = false;
		while(itr.hasNext())
		{
			TaiLieu taiLieuSoSanh = itr.next();
			if(taiLieuSoSanh.getMaTaiLieu().equalsIgnoreCase(ma))
			{
				this.getQuanLy().remove(taiLieuSoSanh);
				xoa = true;
				break;
			}
		}
		return xoa;
	}
	
	public void hienThiThongTin()
	{
		ListIterator<TaiLieu> itr = this.getQuanLy().listIterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
	}
	
	public void timKiemTheoLoai(String loai)
	{
		// a la Sach
		// b la Tap Chi
		// c la Bao

		ListIterator<TaiLieu> itr = this.getQuanLy().listIterator();
		while(itr.hasNext())
		{
			TaiLieu taiLieu = itr.next();
			
			if(loai.equals("a") && taiLieu instanceof Sach)
				System.out.println(taiLieu);
			else if(loai.equals("b") && taiLieu instanceof TapChi)
				System.out.println(taiLieu);
			else if(loai.equals("c") && taiLieu instanceof Bao)
				System.out.println(taiLieu);
		}
	}
}
