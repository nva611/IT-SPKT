package mypack;

public class Person {
	private String name;
	private int age;
	private String idNumber;
	private int numberOfRentalDays;
	private Room room;
	
	public Person()
	{
		
	}
	/**
	 * @param name
	 * @param age
	 * @param idNumber
	 * @param numberOfRentalDays
	 * @param room
	 */
	public Person(String name, int age, String idNumber, int numberOfRentalDays, Room room) {
		super();
		this.name = name;
		this.age = age;
		this.idNumber = idNumber;
		this.numberOfRentalDays = numberOfRentalDays;
		this.room = room;
	}
	
	
	
	public int getNumberOfRentalDays() {
		return numberOfRentalDays;
	}
	public void setNumberOfRentalDays(int numberOfRentalDays) {
		this.numberOfRentalDays = numberOfRentalDays;
	}
	public Room getRoom() {
		return room;
	}
	public void setRoom(Room room) {
		this.room = room;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
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
		return "Ho ten: " + this.getName() + ", tuoi: " + this.getAge() + ", CMND: " + this.getIdNumber() + ", so ngay thue: " + this.getNumberOfRentalDays() + this.getRoom().toString();
	}
}
