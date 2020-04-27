# fs_project2
this proect is about student management system.
this system maintian the usn ,name,sem,dept of the student.
this is then store into the system using b+tree.
for saving it move the data into the rft file(a kind of text file).
for opening file it takes all the value from the file and insert into the tree.
the insert process work using three fuction :-
1.creation of the node (if not exiting)
2.finding the level and leaf of btree where the element should be inserted
3.rearranging element in the node in ascending order
after a value is inserted I check if size as exerted the limit of node if yes then we go for split function
the split function rearranging in such a way that the tree is balanced equally and all nodes are of proper size
for display first child node which is smallest in the order or size and start display it
the tree working is similar to this link:-
https://www.cs.usfca.edu/~galles/visualization/BPlusTree.html
