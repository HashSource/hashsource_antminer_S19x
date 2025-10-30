int sub_4192C()
{
  int result; // r0

  result = setitimer(0, (const struct itimerval *)&itimer, 0);
  if ( result == -1 )
  {
    sub_65D40(3, "interval timer %s failed, %m", "setitimer");
    exit(1);
  }
  return result;
}
