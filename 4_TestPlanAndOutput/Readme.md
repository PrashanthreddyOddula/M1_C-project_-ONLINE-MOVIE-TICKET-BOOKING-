# Test Plan And Test Output
| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**PASS/FAIL**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  T_01| Provide required details for login to book a ticket| pin| Successfully logined In | Successfully logined In| PASS |
|  T_02| When wrong pin is entered| pin |  Login is unsuccesfull | Login is unsuccesfull | PASS |
|  T_03|Display the  details of movie available|  Enter choice | Display list | Display list | PASS |
|  T_04| Purchase a ticket for the movie available | enter choice | Your details are recorded  | your details are recorded| PASS |
|  T_05|  Summary of a ticket for purchased movie| enter choice |Movie name,number of tickets,Price|Movie name,number of tickets,Price| PASS |
|  T_06| Cancel a ticket   |ID number|  Your ticket is cancelled | Your ticket is cancelled | PASS |
|  T_07| Change the price of ticket (only admin) | pin| Please enter new price | Please enter new price   | PASS |
|  T_08|When wrong pin is entered while Changing the price of ticket (only admin) | pin | Entered  |  Entered pin is wrong |PASS |
|  T_09|To view the reserved ticket |pin| summary of ticket|summary of ticket | PASS |
|  
