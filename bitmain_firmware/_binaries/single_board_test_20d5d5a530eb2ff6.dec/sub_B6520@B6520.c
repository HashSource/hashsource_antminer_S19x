int __fastcall sub_B6520(int a1, char *a2, signed int a3)
{
  bool v3; // zf
  bool v4; // nf

  v3 = a2 == 0;
  v4 = (int)a2 < 0;
  if ( a2 )
  {
    v3 = a3 == 0;
    v4 = a3 < 0;
  }
  if ( v4 || v3 )
    return 0;
  else
    return sub_B6414(a1, a2, a3);
}
