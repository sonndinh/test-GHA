void handle_uranium(char *rod)
{
  *rod = 0xAB;
}

void start_reactor()
{
  char *rod = 0x00;
  handle_uranium(rod);
}

int main()
{
  start_reactor();
}
