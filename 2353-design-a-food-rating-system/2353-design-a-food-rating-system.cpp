class FoodRatings {
public:

    unordered_map<string, set<pair<int, string>>> cuisineRatings; // cusinse -> set({-rating, food})
    unordered_map<string, int> foodRating;
    unordered_map<string, string> foodToCuisine;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++){
            cuisineRatings[cuisines[i]].insert({-ratings[i], foods[i]});
            foodRating[foods[i]] = ratings[i];
            foodToCuisine[foods[i]] = cuisines[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        auto &cuisine = foodToCuisine[food];
        int oldRating = foodRating[food];
        cuisineRatings[cuisine].erase({ -oldRating, food });
        cuisineRatings[cuisine].insert({ -newRating, food});

        foodRating[food] = newRating;
    }
    
    string highestRated(string cuisine) {
        return (*cuisineRatings[cuisine].begin()).second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */