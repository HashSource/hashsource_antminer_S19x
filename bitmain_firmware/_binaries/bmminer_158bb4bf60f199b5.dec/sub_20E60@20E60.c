int sub_20E60()
{
  int result; // r0
  int v1; // r1
  int v2; // r2
  int v3; // r3

  result = sub_16940();
  if ( result > 7 )
  {
    result = sub_3047C(result, v1, v2, v3);
    if ( (double)result * 0.95 > dbl_241D48 )
    {
      result = sub_205BC();
      if ( result )
        return sub_226C0(10, "Unbalance happened, reboot!\n");
    }
  }
  return result;
}
