package mypack;

public class KySu extends CanBo {
	private String nganhDaoTao;


	public KySu(String hoVaTen, int tuoi, String gioiTinh, String diaChi, String nganhDaoTao) {
		super(hoVaTen, tuoi, gioiTinh, diaChi);
		this.nganhDaoTao = nganhDaoTao;
	}

	public String getNganhDaoTao() {
		return nganhDaoTao;
	}

	public void setNganhDaoTao(String nganhDaoTao) {
		this.nganhDaoTao = nganhDaoTao;
	}
	
	@Override
	public String toString()
	{
		return "Ky su: ten = " + this.getHoVaTen() + " tuoi = " + this.getTuoi() + " gioi tinh = " + this.getGioiTinh() + " dia chi = " + this.getDiaChi() + " nganh = " + this.getNganhDaoTao();
	}
}
