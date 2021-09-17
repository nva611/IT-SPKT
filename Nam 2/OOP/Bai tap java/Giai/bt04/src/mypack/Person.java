package mypack;

public class Person {
	private String name;
	private int age;
	private String career;
	private String idNumber;
	
	
	
	/**
	 * @param name
	 * @param age
	 * @param career
	 * @param idNumber
	 */
	public Person(String name, int age, String career, String idNumber) {
		super();
		this.name = name;
		this.age = age;
		this.career = career;
		this.idNumber = idNumber;
	}
	
	
	
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getCareer() {
		return career;
	}
	public void setCareer(String career) {
		this.career = career;
	}
	public String getIdNumber() {
		return idNumber;
	}
	public void setIdNumber(String idNumber) {
		this.idNumber = idNumber;
	}
	
	@Override
	public String toString()
	{
		return "Ten: " + this.getName() + ", Tuoi: " + this.getAge() + ", Nghe nghiep: " + this.getCareer() + ", CMND: " + this.getIdNumber();
	}
}
