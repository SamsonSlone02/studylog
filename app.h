struct element;
class App
{
    private:
        int userInput;
        element *userData;
        int n;
    public:
        App();
        ~App();
        void insertEntry();
        void displayEntries();
        void displayMenu();
};
