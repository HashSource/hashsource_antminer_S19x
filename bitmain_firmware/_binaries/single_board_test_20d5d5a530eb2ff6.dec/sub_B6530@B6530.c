int __fastcall sub_B6530(int a1, char *s)
{
  signed int v4; // r2

  v4 = strlen(s);
  if ( v4 > 0 )
    return sub_B6414(a1, s, v4);
  else
    return 0;
}
