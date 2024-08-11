1. **Bank Account Security**:
   - **Scenario**: You are designing a banking system. You need to ensure that the balance of a bank account can only be accessed and modified through specific methods to prevent unauthorized changes.
   - **Question**: How would you use access modifiers to protect the account balance in the `BankAccount` class, ensuring that only methods within the class can modify the balance, but other classes can read it?

2. **Library System**:
   - **Scenario**: In a library management system, you have a `Book` class with properties such as `title`, `author`, and `ISBN`. You want to ensure that the `ISBN` is only set by the library system when a new book is added, but it should be visible to library staff when displaying book details.
   - **Question**: What access modifiers would you use to control the visibility and modification of the `ISBN` property in the `Book` class?

3. **Employee Management**:
   - **Scenario**: You are developing an employee management system. Each `Employee` object has a `salary` field that should only be set by the HR department and not modified by other parts of the application. However, other departments should be able to view the salary for reporting purposes.
   - **Question**: How would you design the `Employee` class with appropriate access modifiers to ensure that the `salary` can only be modified by authorized methods but can be accessed for reporting?

4. **Product Inventory**:
   - **Scenario**: You are building an inventory management system for a retail store. The `Product` class has a `price` attribute that should be updated only by authorized personnel, such as the store manager, and should be hidden from public access to avoid tampering.
   - **Question**: How would you implement access modifiers in the `Product` class to ensure the `price` is protected from unauthorized modification while allowing controlled access?

5. **Vehicle Registration**:
   - **Scenario**: In a vehicle registration system, the `Vehicle` class has a `registrationNumber` attribute. This number should be assigned when a vehicle is registered and should not be changed afterward. However, the registration number needs to be accessible for verification purposes.
   - **Question**: What access modifiers would you use for the `registrationNumber` in the `Vehicle` class to ensure it can be set once but accessed freely?