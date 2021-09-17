package mypack;

public class Date {
	private int ngay;
	private int thang;
	private int nam;
	
	public Date()
	{
		
	}
	
	/**
	 * @param ngay
	 * @param thang
	 * @param nam
	 */
	public Date(int ngay, int thang, int nam) {
		super();
		this.ngay = ngay;
		this.thang = thang;
		this.nam = nam;
	}
	
	public int getNgay() {
		return ngay;
	}
	public void setNgay(int ngay) {
		this.ngay = ngay;
	}
	public int getThang() {
		return thang;
	}
	public void setThang(int thang) {
		this.thang = thang;
	}
	public int getNam() {
		return nam;
	}
	public void setNam(int nam) {
		this.nam = nam;
	}
	public void nhapDate()
	{
		System.out.print("Ngay: ");
		
	}
	@Override
	public String toString()
	{
		return String.valueOf(ngay) + "/" + String.valueOf(thang) + "/" + String.valueOf(nam);
	}
	
}
