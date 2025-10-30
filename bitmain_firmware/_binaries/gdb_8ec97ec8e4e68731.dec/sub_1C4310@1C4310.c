char **__fastcall sub_1C4310(char **a1, _BYTE *a2, int a3)
{
  char *v4; // r5

  v4 = off_46D5A4[0][2];
  if ( v4 == (char *)a3 )
  {
    sub_1C42A8(a1, a2);
  }
  else
  {
    sub_194204(a3);
    sub_1C42A8(a1, a2);
    sub_194204((int)v4);
  }
  return a1;
}
