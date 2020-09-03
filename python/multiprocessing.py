# Process class is used for starting several processes at the same time
from multiprocessing import Process 

def print_cube(num):
    """Function to print cube of given num."""
    print("Cube: {}".format(num * num * num) )

def print_square(num):
    """Function to print square of given num."""
    print("Square: {}".format(num * num) )

if __name__ == "__main__": # Implies that this module is run as standalone, 
                           # not as an imported module
    # Creating processes
    p1 = Process(target=print_cube, args=(10, ) )
    p2 = Process(target=print_square, args=(10, ) )
    
    # Starting process 1
    p1.start()

    # Starting process 2
    p2.start()

    # Wait until process 1 is finished
    # If we don't use .join(), "Done!" will be printed before the function outputs
    p1.join()

    # Wait until process 2 is finished
    p2.join()

    # Both processes finished
    print("Done!")