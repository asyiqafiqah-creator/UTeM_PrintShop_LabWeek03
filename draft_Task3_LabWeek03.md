UTeM\_Print\_Shop-WEEK03\_TASK3



**ANALYSIS**

Input: 

* student's matric number: MatricNumber
* black and white page count: BlackAndWhiteCount
* colour page count: ColourCount
* Comb Binding choices (Y/N): CombBindingChoice



Process:

* Calculate the total pages: TotalPages = BlackAndWhiteCount + ColourCount
* Calculate the total cost without comb binding: TotalCost = (BlackAndWhiteCount\* 0.10) + (ColourCount\*0.50)  |  IF Comb binding choice is selected; TotalCost = (BlackAndWhiteCount\* 0.10) + (ColourCount\*0.50) 
* Check if it is a bulk order: IF pages=>100; TotalCostWithCB = TotalCost + 2
* Calculate the average cost per page: AverageCostPage= TotalCost / TotalPages
* Calculate the number of full stapled sets: StapledSets = TotalPages / 20
* calculate the loose pages left over: LoosePages= TotalPages % 20
* Check bulk order status: IF pages=>100; YES





Output:

* Matric number:
* Total of black and white pages:
* Total of colour pages:
* Com Binding? (Yes/No):
* Total pages:
* Stapled Pages:
* Loose Pages:
* Total (RM):
* Average cost per page:
* Bulk Order



**PSEUDOCODE**

main

CALL inputStudentMatric RETURNING StudentMatric

CALL inputBlackAndWhiteCount RETURNING BlackAndWhiteCount

CALL inputColourCount RETURNING ColourCount

CALL inputCombBindingChoice RETURNING CombBindingChoice



inputStudentMatric 

DISPLAY prompt for entering student matric number

READ StudentMatric

RETURN StudentMatric



inputBlackAndWhiteCount

DISPLAY prompt for entering total pages of print in Black and White

READ BlackAndWhiteCount

RETURN BlackAndWhite



inputColourCount

DISPLAY prompt for entering total pages of print in Colours

READ ColourCount

RETURN ColourCount



inputCombBindingChoice

DISPLAY prompt for a YES or NO selection for comb binding choice

READ CombBindingChoice

RETURN CombBindingChoice



computePrintingDetails with BlackAndWhiteCount, ColourCount and CombBindingChoice

&#x20;   COMPUTE TotalPages as BlackAndWhiteCount + ColourCount

&#x20;   

&#x20;   COMPUTE baseCost as (BlackAndWhiteCount \* 0.10) + (ColourCount \* 0.50)

&#x20;   IF CombBindingChoice is selected THEN

&#x20;       COMPUTE TotalCost as baseCost + 2.00

&#x20;   ELSE

&#x20;       COMPUTE TotalCost as baseCost

&#x20;   ENDIF

&#x20;   

&#x20;   COMPUTE AverageCostPage as TotalCost / TotalPages

&#x20;   COMPUTE StapledSets as TotalPages / 20

&#x20;   COMPUTE LoosePages as TotalPages % 20

&#x20;   

&#x20;   // Example logic for Bulk Order: set to "Yes" if TotalPages exceeds 100

&#x20;   IF TotalPages > 100 THEN

&#x20;       BulkOrder = "Yes"

&#x20;   ELSE

&#x20;       BulkOrder = "No"

&#x20;   ENDIF

&#x20;   RETURN TotalPages, TotalCost, AverageCostPage, StapledSets, LoosePages and BulkOrder



displayDetails with MatricNumber, BlackAndWhiteCount, ColourCount, CombBindingChoice, TotalPages, TotalCost, AverageCostPage, StapledSets, LoosePages and BulkOrder

&#x20;   DISPLAY "Matric number: ", MatricNumber

&#x20;   DISPLAY "Total of black and white pages: ", BlackAndWhiteCount

&#x20;   DISPLAY "Total of colour pages: ", ColourCount

&#x20;   DISPLAY "Com Binding? (Yes/No): ", CombBindingChoice

&#x20;   DISPLAY "Total pages: ", TotalPages

&#x20;   DISPLAY "Stapled Pages: ", StapledSets

&#x20;   DISPLAY "Loose Pages: ", LoosePages

&#x20;   DISPLAY "Total (RM): ", TotalCost

&#x20;   DISPLAY "Average cost per page: ", AverageCostPage

&#x20;   DISPLAY "Bulk Order: ", BulkOrder







&#x20;



