bool __fastcall sub_195CC4(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r4
  char *v2; // r0

  v1 = a1;
  if ( strchr("\"'", *a1) )
    ++v1;
  v2 = sub_935D0(v1);
  return !*v2 || sub_195BDC(v2) != 0;
}
