import java.util.Scanner;

class User
{
	String usernames,passwords,emails,aadharno,panno,mobileno,genders,homeAddress,accounttype;
	int ages;
	double balances;
}

public class BankManagementSystem1
{
	
	static Scanner obj=new Scanner(System.in);


	 	static User [] user = new User [100];

	static int count=0;
	static int currentUser = -1;

	public static void main(String v[])
	{
		
	while(true){

		System.out.println("\n======Bank Management System=======");

		System.out.println();
		System.out.println("1.Register");
		System.out.println("2.Login");
		System.out.println("3.Exit");
	
		System.out.println();
		System.out.print("Enter choice:");
		int choice=obj.nextInt();
		obj.nextLine();
		System.out.println();

		switch(choice)
			{
				case 1:
					 Register();
					break;
			
				case 2:
					 Login();
					break;
	
				case 3:
					 System.exit(0);
					break;
			
				default:
					System.out.println("Invalid choice");
			

			}
		
	 	 }

	}
	
	 static void Register(){
	
		System.out.println();
		System.out.print("Enter name:");
		String name = obj.nextLine().trim();
	
		for(int i=0;i<count;i++)
		{
			if(user[i].usernames.equals(name))
			{
				System.out.println("name Already Exists.");
                		return;		
			}
		}

		System.out.print("Enter Age: ");
		int age=obj.nextInt();
		obj.nextLine();

			if(age < 18){
				System.out.println("Registration Failed!");
    			System.out.println("Minimum Age Must Be 18 Years.");
    				return;
			}
		while(true)
			{
				System.out.println("Enter Account Type(Saving/Current)");
				String accounttype=obj.nextLine().trim();

					if(accounttype.equalsIgnoreCase("Saving") || accounttype.equalsIgnoreCase("Current"))
				    {
				        break;
				    }
				    else
				    {
				        System.out.println("Please Enter Correct Account Type!");
				    }

			}	
		
		String email;
		while(true)
					{
					
					System.out.print("Enter Email:");
					System.out.print("Use @ : ");
					email=obj.nextLine().trim();

					if(validateEmail(email))
					{
						System.out.println("Valid Email-address..");
						break;
					}

					else{
						 System.out.println("Invalid Email!");
					}

					}
      
		String password;

					while(true)
					{

					System.out.print("Enter Password:");
					System.out.print("Minimum 8 characters,Uppercase and lowercase letters,At least one digit: ");
					password=obj.nextLine().trim();

					if (validatepassword(password))
					{
						System.out.println("Valid Password");
						break;
					}

					else
					{
						System.out.println("Invalid Password!");
    					System.out.print("Password must contain:");
    					System.out.print("- Minimum 8 characters");
    					System.out.print("- Uppercase and lowercase letters");
   						System.out.print("- At least one digit");
					}
				}

		
		System.out.print("Enter Mobile number: ");
		String Mobilenumber= obj.nextLine().trim();
		
		System.out.print("Enter Aadhar Number (unique 12-digit): ");
		String Aadharnumber= obj.nextLine().trim();

		System.out.print("Enter Pan Number: ");
		String PanNumber= obj.nextLine().trim();
		
		System.out.print("Enter Gender(M/F): ");
		String Gender= obj.next().trim();
		obj.nextLine();

		System.out.print("Enter HomeAddress: ");
		String homeAddres= obj.nextLine().trim();
		

		user[count] = new User();
		user[count].usernames=name;
		user[count].ages=age;
		user[count].passwords=password;
		user[count].mobileno=Mobilenumber;
		user[count].emails=email;
		user[count].aadharno=Aadharnumber;
		user[count].panno=PanNumber;
		user[count].genders=Gender;
		user[count].homeAddress=homeAddres;
		user[count].balances=0;

		count++;
		 

		System.out.println("Registration Successful...");
	
	}
	static boolean validatepassword(String password)
		{
			if(password.length() < 8)
			{
				return false;
			}

			boolean upper = false;
			boolean lower = false;
			boolean num = false;

			for(int i=0; i<password.length() ; i++)
			{
				char ch = password.charAt(i);

				if(Character.isUpperCase(ch))
				{
					upper = true;
				}

				else if(Character.isLowerCase(ch))
				{
					lower = true;
				}

				else if(Character.isDigit(ch))
				{
					num = true;
				}
			}

			return upper && lower && num;		
	}
												// EMAIL VALIDATION //
	static boolean validateEmail(String email)
	{
		boolean at = false;

		for(int i=0; i<email.length(); i++)
		{
			char ch = email.charAt(i);

			if(ch=='@')
			{
				at = true;
				break;
			}
		}

		return at;
	}
	
	 static void Login(){
	
		System.out.print("Enter name:");
		String name = obj.nextLine().trim();
		
		System.out.print("Enter Password:");
		String Password = obj.nextLine().trim();
		
		for(int i=0;i<count;i++)
		{
			
			if(user[i].usernames.equals(name) && user[i].passwords.equals(Password))
			{
				currentUser=i;
				System.out.println("Login Successful...");
				 
			}
		}
			
			if (currentUser == -1) {
        			System.out.println("Invalid Username or Password.");
        			    			 
			}	


		while(true){
		
			 System.out.println("\n=====MENU =====");
		
		System.out.println("4.Deposit Money");
		System.out.println("5.Withdraw Money");
		System.out.println("6.Show Balance");
		System.out.println("7.View Account Details");
		System.out.println("8. Logout");
		
		System.out.println();
		System.out.print("Enter choice:");
		int choice=obj.nextInt();
		obj.nextLine();
		System.out.println();

			switch(choice)
			     {
				case 4:
					 DepositMoney();
					break;
			
				case 5:
					 WithdrawMoney();
					break;
	
				case 6:
					 showBalance();
					break;

				case 7:
					 ViewAccountdetails();
					break;

				case 8:
					 currentUser = -1;
    					System.out.println("Logout Successful...");
    						return;
					
				default:
					System.out.println("Invalid choice");	
				
			     }	
			  }
			}

	static void DepositMoney(){

		System.out.println();
		System.out.print("Enter Deposit Money:");
		double amount=obj.nextDouble();
		obj.nextLine();
	
		if(amount <= 0){
			 System.out.println("Invalid Amount.");
            		return;
		 }

		user[currentUser].balances+=amount;

		System.out.println("Deposit Successful...");	
	}

	static void WithdrawMoney(){

		System.out.println();
		System.out.print("Enter Withdraw Money:");
		double amount=obj.nextDouble();	
		obj.nextLine();

		if(amount <= 0){
			 System.out.println("Invalid Amount.");
            		return;
		 }

		if(amount > user[currentUser].balances){
			 System.out.println("Insufficient Balance.");
            		return;
		
		}

		user[currentUser].balances-=amount;

		System.out.println("Withdraw Successful...");
	
	} 

	static void showBalance(){
		
		System.out.println();
		System.out.println("Current Balance :Rs" +user[currentUser].balances);

	}

	static void ViewAccountdetails(){

		 System.out.println();
		 System.out.println("Username : " + user[currentUser].usernames);
		 System.out.println("Age : " + user[currentUser].ages);
       	 System.out.println("Password : " + user[currentUser].passwords);
		 System.out.println("email: " + user[currentUser].emails);
		 System.out.println("Mobilenumber: " + user[currentUser].mobileno);
		 System.out.println("Aadharnumber: " + user[currentUser].aadharno);
		 System.out.println("PanNumber: " + user[currentUser].panno);
		 System.out.println("Gender: " + user[currentUser].genders);
		 System.out.println("homeAddres: " + user[currentUser].homeAddress);


	}

				
}


