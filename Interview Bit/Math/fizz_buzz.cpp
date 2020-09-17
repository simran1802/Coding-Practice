vector<string> Solution::fizzBuzz(int A) {
    vector<string>k(A);
    for(int i = 1; i <=A; i++) {
        k[i-1] = (i%3==0&&i%5==0?"FizzBuzz":i%3==0?"Fizz":i%5==0?"Buzz":to_string(i));
    }
    return k;
}
