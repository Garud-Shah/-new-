#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Position2D {
    public: 
        int x,y;
        Position2D add(Position2D coordinate1, Position2D coordinate2){
            Position2D output;
            output.x = coordinate1.x + coordinate2.x;
            output.y = coordinate1.y + coordinate2.y;
            return output;
        }
        Position2D subtract(Position2D coordinate1, Position2D coordinate2){
            Position2D output;
            output.x = coordinate1.x - coordinate2.x;
            output.y = coordinate1.y - coordinate2.y;
            return output;
        }
        Position2D multiply(Position2D coordinate1, int number){
            Position2D output;
            output.x = coordinate1.x * number;
            output.y = coordinate1.y * number;
            return output;
        }
        Position2D divide(Position2D coordinate1, int number){
            Position2D output;
            output.x = coordinate1.x / number;
            output.y = coordinate1.y / number;
            return output;
        }
        int taxicab_distance(Position2D coordinate1, Position2D coordinate2){
            int deltax = abs(coordinate1.x - coordinate2.x);
            int deltay = abs(coordinate1.y - coordinate2.y);
            int output = deltax + deltay;
            return output;
        }
};
struct cmp {
    bool operator()(Position2D a, Position2D b) const { 
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
Position2D gmath;
map<Position2D,int,cmp> make_map_for_coords(vector<Position2D> coord_list){
    map<Position2D,int,cmp> output = {};
    int count = 0;
    for (int i=0; i<(coord_list.size()-1); i++){
        Position2D first_coord = coord_list[i];
        Position2D last_coord = coord_list[i+1];
        int number = gmath.taxicab_distance(first_coord, last_coord);
        Position2D direction = gmath.divide(gmath.subtract(last_coord, first_coord), number);
        for (int j=0; j<number; j++){
            Position2D location = gmath.add(gmath.multiply(direction,number), first_coord);
            output[location] = count;
            count++;
        }
    }
    Position2D first_coord = *(coord_list.end()-1);
    Position2D last_coord = coord_list[0];
    int number = gmath.taxicab_distance(first_coord, last_coord);
    Position2D direction = gmath.divide(gmath.subtract(last_coord, first_coord), number);
    for (int j=0; j<number; j++){
        Position2D location = gmath.add(gmath.multiply(direction,number), first_coord);
        output[location] = count;
        count++;
    }
    return output;
}
int main(){
    int number_of_cow_queries;
    int post_number;
    cin >> number_of_cow_queries >> post_number;
    vector<Position2D> coords_preliminary = {};
    for (int i=0; i<post_number; i++){
        Position2D coordinate;
        cin >> coordinate.x >> coordinate.y;
        coords_preliminary.push_back(coordinate);
    }
    map<Position2D,int,cmp> mymap = make_map_for_coords(coords_preliminary);
    int total_length = mymap.size();
    for (int i=0; i<number_of_cow_queries; i++){
        Position2D start; Position2D end;
        cin >> start.x >> start.y;
        cin >> end.y >> end.y;
        int length_forward = abs(mymap[start] - mymap[end]);
        int length_backward = abs(total_length - length_forward);
        cout << min(length_forward, length_backward) << endl;
    }
}