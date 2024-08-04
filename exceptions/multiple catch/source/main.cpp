#include <iostream>

// There isn't convertion 
// if type doesn't fit any catch exactly

struct Mom {};
struct Son: private Mom {
    friend int main();
};

int main(){
    try {
        Son s;
        throw s;
    } catch (Mom){
        std::cout << "caught Mom";
    } catch (Son) {
        std::cout << "caught Son";
    } catch (...) {
        std::cout << "other";
    }
    return 0;
}