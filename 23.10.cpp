#include <iostream>
using namespace std;
struct Population {
    int year;
    int births;
};
int main() {
    Population data[51];
    for (int i = 0; i < 51; ++i) {
        data[i].year = 1920 + i;
        cout << "Nhap nam va so luong nguoi sinh ra trong nam " << data[i].year << " : ";
        cin >> data[i].births;
    }
    int max_births = data[0].births;
    int min_births = data[0].births;
    for (int i = 1; i < 51; ++i) {
        if (data[i].births > max_births) {
            max_births = data[i].births;
        }
        if (data[i].births < min_births) {
            min_births = data[i].births;
        }
    }
    cout << "Nam co so luong nguoi sinh ra nhieu nhat (" << max_births << " nguoi): ";
    for (int i = 0; i < 51; ++i) {
        if (data[i].births == max_births) {
            cout << data[i].year << " ";
        }
    }
    cout << endl;
    cout << "Nam co so luong nguoi sinh ra it nhat (" << min_births << " nguoi): ";
    for (int i = 0; i < 51; ++i) {
        if (data[i].births == min_births) {
            cout << data[i].year << " ";
        }
    }
    cout << endl;
   
    return 0;
}
