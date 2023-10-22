class MovingAverage {
public:   
    int maximumSize;
    vector<int> window;

    MovingAverage(int size) {
        maximumSize = size;
    }
    
    double next(int val) {
      window.push_back(val);
      double sum = 0;
      if(window.size() <= maximumSize){
       for(int i : window){
        sum+=i;
      }
      return sum/window.size();
    }

     for(int i = window.size() - maximumSize; i < window.size(); i++){
       sum+=window[i];
    }
    return sum/maximumSize;
      
    }
};

