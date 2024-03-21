#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Vector2 {
    public: 
        int x,y;
        Vector2 add(Vector2 coordinate1, Vector2 coordinate2){
            Vector2 output;
            output.x = coordinate1.x + coordinate2.x;
            output.y = coordinate1.y + coordinate2.y;
            return output;
        }
        Vector2 subtract(Vector2 coordinate1, Vector2 coordinate2){
            Vector2 output;
            output.x = coordinate1.x - coordinate2.x;
            output.y = coordinate1.y - coordinate2.y;
            return output;
        }
        Vector2 multiply(Vector2 coordinate1, int number){
            Vector2 output;
            output.x = coordinate1.x * number;
            output.y = coordinate1.y * number;
            return output;
        }
        Vector2 divide(Vector2 coordinate1, int number){
            Vector2 output;
            output.x = coordinate1.x / number;
            output.y = coordinate1.y / number;
            return output;
        }
        int taxicab_distance(Vector2 coordinate1, Vector2 coordinate2){
            int deltax = abs(coordinate1.x - coordinate2.x);
            int deltay = abs(coordinate1.y - coordinate2.y);
            int output = deltax + deltay;
            return output;
        }
};
struct cmp {
    bool operator()(Vector2 a, Vector2 b) const { 
        if (a.x > b.x){
            return true;
        } else if (a.x < b.x) {
            return false;
        } else {
            if (a.y > b.y) {
                return true;
            } else {
                return false;
            }
        }
    }
};
Vector2 gmath;
map<Vector2,int,cmp> make_map_for_coords(vector<Vector2> coord_list){
    map<Vector2,int,cmp> output = {};
    int count = 0;
    for (int i=0; i<(coord_list.size()-1); i++){
        Vector2 first_coord = coord_list[i];
        Vector2 last_coord = coord_list[i+1];
        int number = gmath.taxicab_distance(first_coord, last_coord);
        Vector2 direction = gmath.divide(gmath.subtract(last_coord, first_coord), number);
        for (int j=0; j<number; j++){
            Vector2 location = gmath.add(gmath.multiply(direction,number), first_coord);
            output[location] = count;
            count++;
        }
    }
    Vector2 first_coord = *(coord_list.end()-1);
    Vector2 last_coord = coord_list[0];
    int number = gmath.taxicab_distance(first_coord, last_coord);
    Vector2 direction = gmath.divide(gmath.subtract(last_coord, first_coord), number);
    for (int j=0; j<number; j++){
        Vector2 location = gmath.add(gmath.multiply(direction,number), first_coord);
        output[location] = count;
        count++;
    }
    return output;
}
int main(){
    int number_of_cow_queries;
    int post_number;
    cin >> number_of_cow_queries >> post_number;
    vector<Vector2> coords_preliminary = {};
    for (int i=0; i<post_number; i++){
        Vector2 coordinate;
        cin >> coordinate.x >> coordinate.y;
        coords_preliminary.push_back(coordinate);
    }
    map<Vector2,int,cmp> mymap = make_map_for_coords(coords_preliminary);
    int total_length = mymap.size();
    for (int i=0; i<number_of_cow_queries; i++){
        Vector2 start; Vector2 end;
        cin >> start.x >> start.y;
        cin >> end.y >> end.y;
        int length_forward = abs(mymap[start] - mymap[end]);
        int length_backward = abs(total_length - length_forward);
        cout << min(length_forward, length_backward) << endl;
    }
}