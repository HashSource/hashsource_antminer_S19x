FILE *__fastcall sub_325BDC(int a1, int fd)
{
  if ( fcntl(fd, 2, 1) < 0 )
    return 0;
  else
    return fdopen(fd, "w");
}
