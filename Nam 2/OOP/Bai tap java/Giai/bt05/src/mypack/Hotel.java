package mypack;
import java.util.List;
import java.util.LinkedList;
import java.util.ListIterator;

public class Hotel {
	private List<Person> persons;

	
	
	public Hotel()
	{
		this.persons = new LinkedList<Person>();
	}
	/**
	 * @param persons
	 */
	public Hotel(List<Person> persons) {
		super();
		this.persons = persons;
	}
	
	
	
	public List<Person> getPersons() {
		return persons;
	}
	public void setPersons(List<Person> persons) {
		this.persons = persons;
	}
	
	public void addPerson(Person person)
	{
		this.getPersons().add(person);
	}
	
	public boolean delete(String idNumber)
	{
		int i;
		for(i =0; i<this.getPersons().size(); i++)
		{
			if(this.getPersons().get(i).getIdNumber().equalsIgnoreCase(idNumber) == true)
			{
				this.getPersons().remove(i);
				return true;
			}		
		}
		return false;
	}
	
	public int calculator(String idNumber)
	{
		ListIterator<Person> itr = this.getPersons().listIterator();
		while(itr.hasNext())
		{
			Person ps = itr.next();
			if(ps.getIdNumber().equalsIgnoreCase(idNumber) == true)
				return ps.getNumberOfRentalDays() * ps.getRoom().getPrice();	
		}
		return -1;
	}
	
	public void show()
	{
		System.out.println("====== THONG TIN KHACH HANG ======");
		ListIterator<Person> itr = this.getPersons().listIterator();
		while(itr.hasNext())
		{
			Person ps = itr.next();
			System.out.println(ps);
		}
	}
}
