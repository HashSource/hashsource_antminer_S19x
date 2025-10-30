int __fastcall sub_4A9A4(int result)
{
  int *v1; // r4
  char *v2; // r0

  v1 = (int *)result;
  if ( result )
  {
    sub_CDAE0();
    v2 = sub_4A8C4(v1);
    return sub_D8084(v2);
  }
  return result;
}
