package mypack;

public class NhanVien extends CanBo {
	private String congViec;

	
	public NhanVien(String hoVaTen, int tuoi, String gioiTinh, String diaChi, String congViec) {
		super(hoVaTen, tuoi, gioiTinh, diaChi);
		this.congViec = congViec;
	}

	public String getCongViec() {
		return congViec;
	}

	public void setCongViec(String congViec) {
		this.congViec = congViec;
	}
}
