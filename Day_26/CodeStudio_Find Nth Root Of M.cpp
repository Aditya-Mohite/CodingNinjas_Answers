int NthRoot(int n, int m) 
{
  if (n <= 0 || m < 0) 
    {
        return -1;
    }

    // Calculate the nth root using the pow function
    double result = pow(m, 1.0 / n);

    // Check if the result is close to an integer within a tolerance
    double roundedResult = round(result);
    double tolerance = 1e-9;

    if (abs(result - roundedResult) < tolerance) 
    {
        return static_cast<int>(roundedResult);
    } 
    else 
    {
        return -1;
    }
}
