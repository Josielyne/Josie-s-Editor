# Josie-s-Editor
Text editor made in C++ using linked lists.
A class is used to create the nodes of a linked list. Deleting a letter in a word is made possible by deleting a node. The linked
lists also give the opportunity to delete or insert a letter at any given location. Each new line in the editor creates a new linked
list, so every row has its own linked list. An array of size 10 is used to point to these linked lists as a way of storing
them, meaning the editor only has a max of 10 rows. The user can traverse these rows and delete letters or words if needed.
Files can be created, edited, and read, and are saved to the user's desktop as long as they provide the name of their user folder. 
A path for the file is created using concatenation. For the menu, a switch is used with 5 cases, which depend on what arrow key the
user pressed to navigate to an option. The menu is put inside of a do while loop to allow the user to traverse the menu with the 
arrow keys until they hit enter on an option. 
