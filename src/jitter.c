#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main() {
    
    system("cmd wifi set-wifi-enabled disabled");
    
    while (1) {
      
        system("cmd wifi set-scan-always-available disabled");
        system("cmd wifi set-verbose-logging disabled");
        system("cmd wifi remove-all-suggestions");
        system("cmd wifi reset-connected-score");
        system("cmd wifi set-one-shot-screen-on-delay-ms 1");
        system("cmd wifi set-ipreach-disconnect disabled");
        system("cmd wifi interface-priority-interactive-mode disable");
        system("cmd wifi set-network-selection-config disabled disabled -a 0");
        system("settings put global wifi_power_save 0");
        system("settings put global wifi_display_power_saving_delay 0");
        system("settings put global wifi_display_power_saving_option 0");
    }
    
    return 0;
}
