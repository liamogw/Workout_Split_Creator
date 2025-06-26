#include <iostream>
#include <string>

void welcomeMessage()
{
	std::cout << "Welcome to the Workout Split Creator! Here you will enter your current max Bench, Squat, and Deadlift weights, and this system will\n"
	          << "auto-generate workout splits with progressive overload features based on your inputs. Follow the instructions below to get started.\n"
	          << "When the system gives you your split, copy and paste the weekly breakdown into an Excel or Google spreadsheet and tailor it to your needs. Enjoy!\n" << std::endl;
	std::cout << "Enter which style of workout split you want to create:" << "\n" << std::endl;
	std::cout << "1. Push/Pull/Legs" << std::endl;
	std::cout << "2. Upper/Lower" << std::endl;
	std::cout << "3. Full Body" << "\n" << std::endl;
}

int roundToNearest5(double value)
{
	return static_cast<int> (std::round(value / 5.0) * 5);
}

void workoutSplitCreator(int workoutType, int maxBenchPress, int maxSquat, int maxDeadlift)
{	
	double weekOne_TwoBenchPress = maxBenchPress * 0.5;
	double weekThree_FourBenchPress = maxBenchPress * 0.6;
	double weekFive_SixBenchPress = maxBenchPress * 0.7;
	double weekSeven_EightBenchPress = maxBenchPress * 0.8;
	double weekNineBenchPress = maxBenchPress * 0.9;

	double weekOne_TwoSquat = maxSquat * 0.5;
	double weekThree_FourSquat = maxSquat * 0.6;
	double weekFive_SixSquat = maxSquat * 0.7;
	double weekSeven_EightSquat = maxSquat * 0.8;
	double weekNineSquat = maxSquat * 0.9;

	double weekOne_TwoDeadlift = maxDeadlift * 0.5;
	double weekThree_FourDeadlift = maxDeadlift * 0.6;
	double weekFive_SixDeadlift = maxDeadlift * 0.7;
	double weekSeven_EightDeadlift = maxDeadlift * 0.8;
	double weekNineDeadlift = maxDeadlift * 0.9;

	// Rounds week one and two calculated weights to the nearest 5 lbs
	int weekOne_TwoBenchPressRounded = roundToNearest5(weekOne_TwoBenchPress);
	int weekOne_TwoDeadliftRounded = roundToNearest5(weekOne_TwoDeadlift);
	int weekOne_TwoSquatRounded = roundToNearest5(weekOne_TwoSquat);

	//Rounds week three and four calculated weights to the nearest 5 lbs
	int weekThree_FourBenchPressRounded = roundToNearest5(weekThree_FourBenchPress);
	int weekThree_FourDeadliftRounded = roundToNearest5(weekThree_FourDeadlift);
	int weekThree_FourSquatRounded = roundToNearest5(weekThree_FourSquat);

	//Rounds week five and six calculated weights to the nearest 5 lbs
	int weekFive_SixBenchPressRounded = roundToNearest5(weekFive_SixBenchPress);
	int weekFive_SixDeadliftRounded = roundToNearest5(weekFive_SixDeadlift);
	int weekFive_SixSquatRounded = roundToNearest5(weekFive_SixSquat);

	//Rounds week seven and eight calculated weights to the nearest 5 lbs
	int weekSeven_EightBenchPressRounded = roundToNearest5(weekSeven_EightBenchPress);
	int weekSeven_EightDeadliftRounded = roundToNearest5(weekSeven_EightDeadlift);
	int weekSeven_EightSquatRounded = roundToNearest5(weekSeven_EightSquat);

	//Rounds week nine calculated weights to the nearest 5 lbs
	int weekNineBenchPressRounded = roundToNearest5(weekNineBenchPress);
	int weekNineDeadliftRounded = roundToNearest5(weekNineDeadlift);
	int weekNineSquatRounded = roundToNearest5(weekNineSquat);
	
	if (workoutType == 1)
	{
		std::cout << "Creating a Push/Pull/Legs workout split..." << "\n" << std::endl;

		std::cout << "Welcome to your Push/Pull/Legs workout split! This split is separated into 3 exercise days with 4 rest days. An example\n"
				  << "of what a week would look like is as follows: Monday - Push, Tuesday - Rest, Wednesday - Pull,\n"
				  << "Thursday - Rest, Friday - Legs, Saturday - Rest, Sunday - Rest. If the weight listed for your lifts is less than\n"
				  << "the weight of the bar (45 lbs), substitute the bar for dumbbells and work your way up.\n" << std::endl;

		std::cout << "\n" << "Week 1:" << std::endl;
		
		std::cout << "\n" << "Push Day:" << std::endl;


		std::cout << "\n" << "Barbell Bench Press: 3 x 12 reps at " << weekOne_TwoBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
					 "Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' << 
					 "Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;

		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 12 reps at " << weekOne_TwoDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
					 "Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
					 "Assisted Pullups: 3 x 10 reps"<< std::endl;

		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 12 reps at " << weekOne_TwoSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
					 "Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 2:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 12 reps at " << weekOne_TwoBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;

		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 12 reps at " << weekOne_TwoDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 12 reps at " << weekOne_TwoSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 3:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 10 reps at " << weekThree_FourBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;

		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 10 reps at " << weekThree_FourDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 10 reps at " << weekThree_FourSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 4:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 10 reps at " << weekThree_FourBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 10 reps at " << weekThree_FourDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 10 reps at " << weekThree_FourSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 5:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 8 reps at " << weekFive_SixBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 8 reps at " << weekFive_SixDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 8 reps at " << weekFive_SixSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 6:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 8 reps at " << weekFive_SixBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 8 reps at " << weekFive_SixDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 8 reps at " << weekFive_SixSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 7:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 5 reps at " << weekSeven_EightBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 5 reps at " << weekSeven_EightDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 5 reps at " << weekSeven_EightSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 8:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 5 reps at " << weekSeven_EightBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 5 reps at " << weekSeven_EightDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 5 reps at " << weekSeven_EightSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
			"Bulgarian Split Squats: 3 x 8-12 reps" << '\n' << "Lunges (Weighted optional): 3 x 8-12 reps" << '\n' << "Calf Raises: 3 x 8-12 reps" << std::endl;

		std::cout << "\n" << "Week 9:" << std::endl;

		std::cout << "\n" << "Push Day:" << std::endl;

		std::cout << "\n" << "Barbell Bench Press: 3 x 3 reps at " << weekNineBenchPressRounded << "lbs" << " " << "\n" << "Incline Dumbbell Press: 3 x 8-12 reps" << "\n" <<
			"Chest Press Machine: 3 x 8-12 reps" << "\n" << "Shoulder Press: 3 x 8-12 reps" << '\n' << "Tricep Kickbacks or Pulldowns (Hold at eccentric): 3 x 10-15 reps" << '\n' <<
			"Assisted/Non-Assisted Tricep Dips: 3 x 10 reps" << std::endl;

		std::cout << '\n' << "Pull Day: " << std::endl;
		
		std::cout << '\n' << "Conventional or Trapbar Deadlift: 3 x 3 reps at " << weekNineDeadliftRounded << "lbs" << '\n' << "Lat Pulldowns: 3 x 8-12 reps" << '\n' <<
			"Seated Rows (Full Extension on Eccentric): 3 x 8-12 reps" << '\n' << "Barbell or Dumbell Rows: 3 x 8-12 reps" << '\n' << "Shoulder Fly: 3 x 10-15 reps" << '\n' <<
			"Assisted Pullups: 3 x 10 reps" << std::endl;
		
		std::cout << "\n" << "Leg Day:" << std::endl;

		std::cout << '\n' << "Barbell Back Squat: 3 x 3 reps at " << weekNineSquatRounded << "lbs" << '\n' << "Quad Extensions: 3 x 10 reps" << '\n' << "Hamstring Curls: 3 x 10 reps" << '\n' <<
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
		
		std::cout << "Welcome to your Upper/Lower workout split! This split is separated into 4 exercise days with 3 rest days. An example\n"
		          << "of what a week would look like is as follows: Monday - Upper day 1, Tuesday - Lower day 1, Wednesday - Rest,\n"
		          << "Thursday - Upper day 2, Friday - Lower day 2, Saturday - Rest, Sunday - Rest. If the weight listed for your lifts is less than\n"
		          << "the weight of the bar (45 lbs), substitute the bar for dumbbells and work your way up.\n" << std::endl;

		std::cout << "\n" << "Week 1:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 12 for " << weekOne_TwoBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 12 for " << weekOne_TwoSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
				  << '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" 
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
				  << '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
				  << '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 2:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 12 for " << weekOne_TwoBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 12 for " << weekOne_TwoSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 3:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 10 for " << weekThree_FourBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 10 for " << weekThree_FourSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 4:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 10 for " << weekThree_FourBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 10 for " << weekThree_FourSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 5:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 8 for " << weekFive_SixBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 8 for " << weekFive_SixSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 6:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 8 for " << weekFive_SixBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 8 for " << weekFive_SixSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 7:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 5 for " << weekSeven_EightBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 5 for " << weekSeven_EightSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 8:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 5 for " << weekSeven_EightBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 5 for " << weekSeven_EightSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 9:" << std::endl;

		std::cout << "\n" << "Upper Day 1:" << std::endl;

		std::cout << '\n' << "Bench Press: 3 x 3 for " << weekNineBenchPressRounded << "lbs" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 1:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 3 for " << weekNineSquatRounded << "lbs" << '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Upper Day 2:" << std::endl;

		std::cout << '\n' << "Incline Dumbbell Bench Press: 3 x 8-12 reps" << '\n' << "Military Press: 3 x 8-12 reps" << '\n' << "Machine Chest Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Pull Ups or Machine Rows - 3 sec negative: 2 x 8-12 reps" << '\n' << "Machine Shoulder Press - 3 sec negative: 2 x 8-12 reps"
			<< '\n' << "Dumbbell Curls - 3 sec negative: 3 x 8-12 reps" << '\n' << "Machine Tricep Dip - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "Lower Day 2:" << std::endl;

		std::cout << '\n' << "Leg Press: 3 x 10-20 reps" << '\n' << "Dumbbell Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Leg Press Calf Raise: 3 x 10-15 reps" << '\n' << "Hack Squat: 2 x 8-12 reps"
			<< '\n' << "Seated Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps" << '\n' << "Planks: 3 x 60 sec" << '\n' << "Hyperextension: 3 x 10-12 reps" << std::endl;

		std::cout << '\n' << "Week 10:" << std::endl;

		std::cout << "\n" << "MAX Upper Day:" << std::endl;

		std::cout << '\n' << "Bench Press: Work towards a new Max Bench" << '\n' << "Barbell Row: 3 x 6-12 reps" << '\n' << "Seated Overhead Dumbbell Press: 3 x 8-12 reps"
			<< '\n' << "Pec Dec / Seated Chest Fly - 3 sec negative: 2 x 10-12 reps" << '\n' << "V-Bar Lat Pull Down - 3 sec negative: 2 x 10-12 reps" << '\n'
			<< "Side Lateral Raise: 2 x 10-15 reps" << '\n' << "Cable Tricep Extensions - 3 sec negative: 3 x 8-12 reps" << '\n' << "Cable Curls - 3 sec negative: 3 x 8-12 reps" << std::endl;
		
		std::cout << '\n' << "MAX Lower Day:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Work towards a new Max Squat "<< '\n' << "Stiff Leg Deadlifts: 3 x 8-12 reps" << '\n' << "Standing Calf Raise: 3 x 10-15 reps"
			<< '\n' << "Leg Extensions - 3 sec negative: 2 x 10-12 reps" << '\n' << "Leg Curl - 3 sec negative: 2 x 10-12 reps" << '\n' << "Seated Calf Raise - 3 sec negative: 2 x 10-12 reps"
			<< '\n' << "Cable Crunch - 3 sec negative: 3 x 10-12 reps" << '\n' << "Cable Pull Through with Rope: 3 x 10-12 reps" << std::endl;

	}

	else if (workoutType == 3)
	{
		std::cout << "Creating a Full Body workout split..." << "\n" << std::endl;
		
		std::cout << "Welcome to your Full Body workout split! This split is separated into 3 exercise days with 4 rest days. An example\n"
		          << "of what a week would look like is as follows: Monday - Workout A, Tuesday - Rest, Wednesday - Workout B,\n"
		          << "Thursday - Rest, Friday - Workout C, Saturday - Rest, Sunday - Rest. If the weight listed for your lifts is less than\n"
		          << "the weight of the bar (45 lbs), substitute the bar for dumbbells and work your way up.\n" << std::endl;

		std::cout << '\n' << "Week 1:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 12 reps for " << weekOne_TwoSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 12 reps for " << weekOne_TwoBenchPressRounded << "lbs" << '\n'
				  << "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
				  << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;
		
		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 12 reps for " << weekOne_TwoDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			      << "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n' 
			      << "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 2:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 12 reps for " << weekOne_TwoSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 12 reps for " << weekOne_TwoBenchPressRounded << "lbs" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 12 reps for " << weekOne_TwoDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 3:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 10 reps for " << weekThree_FourSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 10 reps for " << weekThree_FourBenchPressRounded << "lbs" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 10 reps for " << weekThree_FourDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 4:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 10 reps for " << weekThree_FourSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 10 reps for " << weekThree_FourBenchPressRounded << "lbs" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 10 reps for " << weekThree_FourDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 5:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 8 reps for " << weekFive_SixSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 8 reps for " << weekFive_SixBenchPressRounded << "lbs" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 8 reps for " << weekFive_SixDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 6:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 8 reps for " << weekFive_SixSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 8 reps for " << weekFive_SixBenchPressRounded << "lbs" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 8 reps for " << weekFive_SixDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 7:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 5 reps for " << weekSeven_EightSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 5 reps for " << weekSeven_EightBenchPressRounded << "lbs" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 5 reps for " << weekSeven_EightDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 8:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 5 reps for " << weekSeven_EightSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 5 reps for " << weekSeven_EightBenchPressRounded << "lbs" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 5 reps for " << weekSeven_EightDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 9:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: 3 x 3 reps for " << weekNineSquatRounded << "lbs" << '\n' << "Bench Press: 3 x 3 reps for " << weekNineBenchPressRounded << "lbs" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: 3 x 3 reps for " << weekNineDeadliftRounded << "lbs" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Week 10:" << std::endl;

		std::cout << '\n' << "Workout A:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Work Towards a new Max Squat" << '\n' << "Bench Press: Work towards a new Max Bench" << '\n'
			<< "Barbell Row: Ramp up 5 x 5 reps" << '\n' << "Upright Row: 3 x 10 reps" << '\n' << "Skullcrushers: 3 x 10 reps" << '\n' << "Dumbbell Curls: 3 x 10 reps" << '\n'
			<< "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;

		std::cout << '\n' << "Workout B:" << std::endl;

		std::cout << '\n' << "Conventional (or Trap Bar) Deadlift: Work towards a new Max Deadlift" << '\n' << "Romanian Deadlift: 2 x 8-12 reps" << '\n'
			<< "Seated Overhead Press: 3 x 8-10 reps" << '\n' << "Pull Ups or Inverted Rows: 3 x 8-12 reps" << '\n' << "Dips: 3 x 10-20 reps" << '\n'
			<< "Barbell Shrugs: 3 x 10 reps" << '\n' << "Calf Raises: 3 x 12-15 reps" << '\n' << "Planks: 3 x 60 sec" << std::endl;

		std::cout << '\n' << "Workout C:" << std::endl;

		std::cout << '\n' << "Barbell Backsquat: Ramp up 3 x 5 reps" << '\n' << "Air Squats: 1 x 20 reps" << '\n' << "Incline Dumbbell Bench Press: 3 x 10 reps" << '\n'
			<< "One arm Dumbbell Row: 3 x 10 reps" << '\n' << "Seated Arnold Press: 3 x 10-15 reps" << '\n' << "Cabel Tricep Extensions: 3 x 10 reps" << '\n'
			<< "Barbell Curls: 3 x 10 reps" << '\n' << "Leg Curls: 3 x 12-15 reps" << '\n' << "Ab Wheel Rollouts: 3 x 10-15 reps" << std::endl;
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
	std::cout << "\n" << "Please enter your max bench press weight (in lbs). If you do not know, put 45: ";
	std::cin >> maxBenchPress;

	std::cout << "Please enter your max squat weight (in lbs). If you do not know, put 45: ";
	std::cin >> maxSquat;

	std::cout << "Please enter your max deadlift weight (in lbs). If you do not know, put 45: ";
	std::cin >> maxDeadlift;

	// Tells the user what they selected for a workout type
	std::cout << "\n" << "You selected option " << workoutType << "." << "\n" << std::endl; 

	//Go to workoutSplitCreator Function
	workoutSplitCreator(workoutType, maxBenchPress, maxSquat, maxDeadlift);

	std::cout << "\n" << "Before exiting this window, copy and paste your workout split into an Excel/Google Sheets workbook. Thank you for using the Workout Split Creator!" << "\n" << std::endl;

	return 0;
}