int sub_310AC()
{
  int result; // r0

  result = sub_22F0C();
  if ( (double)result * 0.95 > dbl_9CD8F8 )
  {
    result = sub_2F9E4();
    if ( result )
      return sub_458A0(13, "Unbalance happened, reboot!\n");
  }
  return result;
}
