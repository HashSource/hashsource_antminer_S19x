int __fastcall sub_25A704(int a1)
{
  int v1; // r2
  int v2; // r0
  char *v4; // r0
  char *v5; // r12
  char *v6; // r3

  v1 = dword_48A9E8;
  if ( dword_46DDF0 < a1 )
  {
    if ( dword_48A9E8 )
      free((void *)dword_48A9E8);
    v4 = (char *)sub_93028(a1 + 1);
    v5 = &v4[a1];
    v1 = (int)v4;
    dword_48A9E8 = (int)v4;
    if ( v4 != &v4[a1] )
    {
      v6 = &v4[a1];
      do
        *--v6 = 32;
      while ( v4 != v6 );
    }
    dword_46DDF0 = a1;
    v2 = 0;
    *v5 = 0;
  }
  else
  {
    v2 = dword_46DDF0 - a1;
  }
  return v1 + v2;
}
