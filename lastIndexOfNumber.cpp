---- this is a function to the problem , write int main() code yourself----

int lastIndex(int input[], int size, int x) {
  if(input[size-1]==x)
  {
    return size-1;
  }
  if(size==0)
  {
    return -1;
  }
return lastIndex(input,  size-1,  x);
}
