int sub_40B88()
{
  int result; // r0

  result = setitimer(0, (const struct itimerval *)&itimer, 0);
  if ( result == -1 )
  {
    sub_64E00(3, "interval timer %s failed, %m", "setitimer");
    exit(1);
  }
  return result;
}
