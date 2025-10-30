bool sub_10C610()
{
  return pthread_once(&dword_6E1C50, (void (*)(void))sub_10C4EC) == 0;
}
