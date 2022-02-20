#include <string>

int main(int argc, char *argv[]) {
    std::string finalCommand = "su -c '";

    for(int i = 1; i < argc; i++) {
        finalCommand += argv[i];
        finalCommand += ' ';
    }
    finalCommand += "'";

    system(finalCommand.c_str());

    return 0;
}
