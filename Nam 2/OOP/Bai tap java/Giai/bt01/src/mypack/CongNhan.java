package mypack;

public class CongNhan extends CanBo{
	private int bac;
	

	/**
	 * @param hoVaTen
	 * @param tuoi
	 * @param gioiTinh
	 * @param diaChi
	 * @param bac
	 */
	public CongNhan(String hoVaTen, int tuoi, String gioiTinh, String diaChi, int bac) {
		super(hoVaTen, tuoi, gioiTinh, diaChi);
		this.bac = bac;
	}
	
	
	public int getBac() {
		return bac;
	}
	public void setBac(int bac) {
		this.bac = bac;
	}

	@Override
	public String toString()
	{
		return "Cong nhan: ten = " + this.getHoVaTen() + " tuoi = " + this.getTuoi() + " gioi tinh = " + this.getGioiTinh() +" dia chi = " + this.getDiaChi() + " bac = " + this.getBac();
	}
	
	
}
