package mypack;

public class TapChi extends TaiLieu{
	private int soPhatHanh;
	private int thangPhatHanh;
	
	public TapChi()
	{
		super();
	}
	/**
	 * @param maTaiLieu
	 * @param tenNXB
	 * @param soBanPhatHanh
	 * @param soPhatHanh
	 * @param thangPhatHanh
	 */
	public TapChi(String maTaiLieu, String tenNXB, int soBanPhatHanh, int soPhatHanh, int thangPhatHanh) {
		super(maTaiLieu, tenNXB, soBanPhatHanh);
		this.soPhatHanh = soPhatHanh;
		this.thangPhatHanh = thangPhatHanh;
	}
	
	
	public int getSoPhatHanh() {
		return soPhatHanh;
	}
	public void setSoPhatHanh(int soPhatHanh) {
		this.soPhatHanh = soPhatHanh;
	}
	public int getThangPhatHanh() {
		return thangPhatHanh;
	}
	public void setThangPhatHanh(int thangPhatHanh) {
		this.thangPhatHanh = thangPhatHanh;
	}
	
	@Override
	public String toString()
	{
		return super.toString() + ", so phat hanh = " + this.soPhatHanh + ", thang phat hanh = " + this.thangPhatHanh;
	}
}
