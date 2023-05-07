#include "App.h"
#include "Service/ExceptionService.h"
#include "Stack/Stack.h"
using namespace std;
int App::start() {
    try {
        DataStructs::Stack<int> Stack;
        Stack.push(5);
        Stack.push(3);
        Stack.push(10);
        this->displayService->displayInformation("%d\n", Stack.pop());
        Stack.push(15);
        for(auto &num: Stack.getAll()){
            this->displayService->displayInformation("%d\n", num);
        }
    }catch (std::exception const &e) {
        this->displayService->displayError(e);
        return -1;
    }
    return 0;
}

App::App(
        Service::DisplayServiceInterface* displayService
) {
    this->displayService = displayService;
}

App *App::create(Service::DisplayServiceInterface* displayService) {
    return new App(displayService);
}