#include <iostream>
#include <string>

void welcomeMessage()
{
	std::cout << "Welcome to the Workout Split Creator!" << "\n" << std::endl;
	std::cout << "Enter which style of workout split you want to create:" << "\n" << std::endl;
	std::cout << "1. Push/Pull/Legs" << std::endl;
	std::cout << "2. Upper/Lower" << std::endl;
	std::cout << "3. Full Body" << "\n" << std::endl;
}

void workoutSplitCreator(int workoutType, int maxBenchPress, int maxSquat, int maxDeadlift)
{
	int weekOne_TwoBenchPress = maxBenchPress * 0.5;
	int weekThree_FourBenchPress = maxBenchPress * 0.6;
	int weekFive_SixBenchPress = maxBenchPress * 0.7;
	int weekSeven_EightBenchPress = maxBenchPress * 0.8;
	int weekNineBenchPress = maxBenchPress * 0.9;

	int weekOne_TwoSquat = maxSquat * 0.5;
	int weekThree_FourSquat = maxSquat * 0.6;
	int weekFive_SixSquat = maxSquat * 0.7;
	int weekSeven_EightSquat = maxSquat * 0.8;
	int weekNineSquat = maxSquat * 0.9;

	int weekOne_TwoDeadlift = maxDeadlift * 0.5;
	int weekThree_FourDeadlift = maxDeadlift * 0.6;
	int weekFive_SixDeadlift = maxDeadlift * 0.7;
	int weekSeven_EightDeadlift = maxDeadlift * 0.8;
	int weekNineDeadlift = maxDeadlift * 0.9;

	// Rounds week one and two calculated weights to the nearest 5 lbs
	int weekOneTwoBenchRemainder = weekOne_TwoBenchPress % 5;

	if (weekOneTwoBenchRemainder != 0)
	{
		weekOne_TwoBenchPress -= weekOneTwoBenchRemainder;
	}

	int weekOneTwoDeadliftRemainder = weekOne_TwoDeadlift % 5;

	if (weekOneTwoDeadliftRemainder != 0)
	{
		weekOne_TwoDeadlift -= weekOneTwoDeadliftRemainder;
	}

	int weekOneTwoSquatRemainder = weekOne_TwoSquat % 5;

	if (weekOneTwoSquatRemainder != 0)
	{
		weekOne_TwoSquat -= weekOneTwoSquatRemainder;
	}

	//Rounds week three and four calculated weights to the nearest 5 lbs
	int weekThreeFourBenchRemainder = weekThree_FourBenchPress % 5;

	if (weekThreeFourBenchRemainder != 0)
	{
		weekThree_FourBenchPress -= weekThreeFourBenchRemainder;
	}

	int weekThreeFourDeadliftRemainder = weekThree_FourDeadlift % 5;

	if (weekThreeFourDeadliftRemainder != 0)
	{
		weekThree_FourDeadlift -= weekThreeFourDeadliftRemainder;
	}

	int weekThreeFourSquatRemainder = weekThree_FourSquat % 5;

	if (weekThreeFourSquatRemainder != 0)
	{
		weekThree_FourSquat -= weekThreeFourSquatRemainder;
	}

	//Rounds week five and six calculated weights to the nearest 5 lbs
	int weekFiveSixBenchRemainder = weekFive_SixBenchPress % 5;

	if (weekFiveSixBenchRemainder != 0)
	{
		weekFive_SixBenchPress -= weekFiveSixBenchRemainder;
	}

	int weekFiveSixDeadliftRemainder = weekFive_SixDeadlift % 5;

	if (weekFiveSixDeadliftRemainder != 0)
	{
		weekFive_SixDeadlift -= weekFiveSixDeadliftRemainder;
	}

	int weekFiveSixSquatRemainder = weekFive_SixSquat % 5;

	if (weekFiveSixSquatRemainder != 0)
	{
		weekFive_SixSquat -= weekFiveSixSquatRemainder;
	}

	//Rounds week seven and eight calculated weights to the nearest 5 lbs
	int weekSevenEightBenchRemainder = weekSeven_EightBenchPress % 5;

	if (weekSevenEightBenchRemainder != 0)
	{
		weekSeven_EightBenchPress -= weekSevenEightBenchRemainder;
	}

	int weekSevenEightDeadliftRemainder = weekSeven_EightDeadlift % 5;

	if (weekSevenEightDeadliftRemainder != 0)
	{
		weekSeven_EightDeadlift -= weekSevenEightDeadliftRemainder;
	}

	int weekSevenEightSquatRemainder = weekSeven_EightSquat % 5;
	if (weekSevenEightSquatRemainder != 0)
	{
		weekSeven_EightSquat -= weekSevenEightSquatRemainder;
	}

	//Rounds week nine calculated weights to the nearest 5 lbs
	int weekNineBenchRemainder = weekNineBenchPress % 5;

	if (weekNineBenchRemainder != 0)
	{
		weekNineBenchPress -= weekNineBenchRemainder;
	}

	int weekNineDeadliftRemainder = weekNineDeadlift % 5;

	if (weekNineDeadliftRemainder != 0)
	{
		weekNineDeadlift -= weekNineDeadliftRemainder;
	}

	int weekNineSquatRemainder = weekNineSquat % 5;

	if (weekNineSquatRemainder != 0)
	{
		weekNineSquat -= weekNineSquatRemainder;
	}
	
	if (workoutType == 1)
	{
		std::cout << "Creating a Push/Pull/Legs workout split..." << "\n" << std::endl;

		std::cout << "Welcome to your Push/Pull/Legs workout split! This split is seperated into 3 exercise days with 4 rest days. An example" << '\n' 
				  << "of what a week would what a week would look like is as fallows: Monday - Push, Tuesday - Rest, Wednesday - Pull," << '\n' 
				  << "Thursday - Rest, Friday - Legs, Saturday - Rest, Sunday - Rest." << '\n' << std::endl;

		std::cout << "\n" << "Week 1:" << std::endl;
		
		std::cout << "\n" << "Push Day:" << std::endl;


		std::cout << "\n" << "Barbell Bench Press: 3 x 12 reps at " << weekOne_TwoBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
					 "Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' << 
					 "Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;

		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 12 reps at " << weekOne_TwoDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
					 "Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
					 "Assisted Pullups: 3 x 10 reps"<< std::endl;

		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 12 reps at " << weekOne_TwoSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
					 "Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 2:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 12 reps at " << weekOne_TwoBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;

		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 12 reps at " << weekOne_TwoDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 12 reps at " << weekOne_TwoSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 3:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 10 reps at " << weekThree_FourBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;

		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 10 reps at " << weekThree_FourDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 10 reps at " << weekThree_FourSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 4:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 10 reps at " << weekThree_FourBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 10 reps at " << weekThree_FourDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 10 reps at " << weekThree_FourSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 5:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 8 reps at " << weekFive_SixBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 8 reps at " << weekFive_SixDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 8 reps at " << weekFive_SixSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 6:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 8 reps at " << weekFive_SixBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 8 reps at " << weekFive_SixDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 8 reps at " << weekFive_SixSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 7:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 5 reps at " << weekSeven_EightBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 5 reps at " << weekSeven_EightDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 5 reps at " << weekSeven_EightSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 8:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 5 reps at " << weekSeven_EightBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 5 reps at " << weekSeven_EightDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 5 reps at " << weekSeven_EightSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 9:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 3 reps at " << weekNineBenchPress << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 3 reps at " << weekNineDeadlift << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 3 reps at " << weekNineSquat << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 10:" << std::endl;

		std::cout << "\n" << "MAX Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: Work towards a new Max Bench Press" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "MAX Pull Day: " << std::endl;

		std::cout << '\n' << "Conventional or Trapbar Deadlift: Work towards a new Max Deadlift" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "MAX Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: Work towards a new Max Squat" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;
	}

	else if (workoutType == 2)
	{
		std::cout << "Creating an Upper/Lower workout split..." << "\n" << std::endl;
		
		std::cout << "Welcome to your Upper/Lower workout split! This split is seperated into 4 exercise days with 3 rest days. An example" << '\n' 
				  << "of what a week would what a week would look like is as fallows: Monday - Upper day 1, Tuesday - Lower day 1, Wednesday - Rest," << '\n' 
				  << "Thursday - Upper day 2, Friday - Lower day 2, Saturday - Rest, Sunday - Rest." << '\n' << std::endl;

		std::cout << "\n" << "Week 1:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 12 for " << weekOne_TwoBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 2:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 12 for " << weekOne_TwoBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 3:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 10 for " << weekThree_FourBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 4:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 10 for " << weekThree_FourBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 5:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 8 for " << weekFive_SixBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 6:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 8 for " << weekFive_SixBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 7:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 5 for " << weekSeven_EightBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 8:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 5 for " << weekSeven_EightBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 9:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 3 for " << weekNineBenchPress << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2

		std::cout << '\n' << "Week 10:" << std::endl;

		std::cout << "\n" << "MAX Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: Work towards a new Max Bench\\" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		//Add Lower day 1, Upper day 2, Lower day 2
	}

	else if (workoutType == 3)
	{
		std::cout << "Creating a Full Body workout split..." << "\n" << std::endl;
		// Add logic for Full Body split
	}

	else
	{
		std::cout << "Unexpected error. Please restart the program." << "\n" << std::endl;
	}
}

int main()
{
	welcomeMessage();

	int workoutType{};
	int maxBenchPress{};
	int maxSquat{};
	int maxDeadlift{};

	// Get user input for workout type and max weights
	std::cout << "Please enter your choice: ";
	std::cin >> workoutType;

	//Rounds the inputted max bench press weight to the nearest 5 lbs for calculations
	std::cout << "\n" << "Please enter your max bench press weight (in lbs): ";
	std::cin >> maxBenchPress;

	std::cout << "Please enter your max squat weight (in lbs): ";
	std::cin >> maxSquat;

	std::cout << "Please enter your max deadlift weight (in lbs): ";
	std::cin >> maxDeadlift;

	// Tells the user what they selected for a workout type
	std::cout << "\n" << "You selected option " << workoutType << "." << "\n" << std::endl; 

	//Go to workoutSplitCreator Function
	workoutSplitCreator(workoutType, maxBenchPress, maxSquat, maxDeadlift);

	std::cout << "\n" << "Before exiting this window, copy and paste your workout split into an Excel/Google Sheets workbook. Thank you for using the Workout Split Creator!" << "\n" << std::endl;

	return 0;
}
