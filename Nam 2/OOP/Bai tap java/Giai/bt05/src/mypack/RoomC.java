package mypack;

public class RoomC extends Room{

	/**
	 * @param category
	 * @param price
	 */
	public RoomC() {
		super("C", 100);
	}

	@Override
	public String toString() {
		return "Room " + super.toString();
	}
	
}
