int __fastcall sub_2ABFAC(int a1)
{
  FILE *v2; // r0

  if ( !a1 )
    sub_2A6BBC("opncls.c", 1354);
  v2 = sub_2A8794(a1, (int)"r");
  if ( !v2 )
    return 0;
  fclose(v2);
  return 1;
}
