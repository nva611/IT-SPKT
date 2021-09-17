package mypack;

public class TaiLieu {
	private String maTaiLieu;
	private String tenNXB;
	private int soBanPhatHanh;
	
	
	public TaiLieu()
	{
		
	}
	
	/**
	 * @param maTaiLieu
	 * @param tenNXB
	 * @param soBanPhatHanh
	 */
	public TaiLieu(String maTaiLieu, String tenNXB, int soBanPhatHanh) {
		super();
		this.maTaiLieu = maTaiLieu;
		this.tenNXB = tenNXB;
		this.soBanPhatHanh = soBanPhatHanh;
	}
	
	
	public String getMaTaiLieu() {
		return maTaiLieu;
	}
	public void setMaTaiLieu(String maTaiLieu) {
		this.maTaiLieu = maTaiLieu;
	}
	public String gettenNXB() {
		return tenNXB;
	}
	public void settenNXB(String tenNXB) {
		this.tenNXB = tenNXB;
	}
	public int getSoBanPhatHanh() {
		return soBanPhatHanh;
	}
	public void setSoBanPhatHanh(int soBanPhatHanh) {
		this.soBanPhatHanh = soBanPhatHanh;
	}
	
	@Override
	public String toString() {
		return "Ma tai lieu = " + this.maTaiLieu + ", ten NXB = " + this.tenNXB + ", so ban phat hanh = " + this.soBanPhatHanh;
	}

}
