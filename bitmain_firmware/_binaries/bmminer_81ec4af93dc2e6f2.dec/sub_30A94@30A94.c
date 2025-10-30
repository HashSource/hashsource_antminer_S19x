int sub_30A94()
{
  int result; // r0

  result = sub_229C0();
  if ( (double)result * 0.95 > dbl_9C8A40 )
  {
    result = sub_2F3C0();
    if ( result )
      return sub_43B4C(13, "Unbalance happened, reboot!\n");
  }
  return result;
}
