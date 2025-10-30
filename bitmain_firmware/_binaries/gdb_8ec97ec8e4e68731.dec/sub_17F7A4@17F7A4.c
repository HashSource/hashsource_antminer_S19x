void __fastcall sub_17F7A4(int a1, int a2)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r0

  v2 = (char *)a1;
  if ( a1 )
  {
    v3 = sub_183688(a1);
    sub_93E70(v3 + 60, v2);
  }
  else if ( !a2 || (a1 = sub_25A3E4("Delete all environment variables? ")) != 0 )
  {
    v4 = sub_183688(a1);
    sub_93A50((int *)(v4 + 60));
  }
}
