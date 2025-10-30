bool __fastcall sub_12D9A4(int a1, int a2, int a3, const char *a4, int *a5)
{
  int i; // r4
  int v10; // r3
  bool v11; // r3
  int v12; // r3

  for ( i = a2; i > 20; i -= 20 )
  {
    if ( sub_B69CC(a1, (int)"                    ", 20) != 20 )
      return 0;
  }
  if ( sub_B69CC(a1, (int)"                    ", i) != i )
    return 0;
  v10 = *a5;
  if ( (*a5 & 0x100) != 0 )
  {
    a4 = (const char *)(*a5 & 0x40);
    if ( (v10 & 0x40) != 0 )
      return 1;
    v11 = 1;
  }
  else
  {
    if ( (v10 & 0x40) != 0 )
    {
      if ( a4 )
        goto LABEL_10;
      return 1;
    }
    v11 = a4 == 0;
  }
  if ( a3 )
    v12 = 0;
  else
    v12 = v11;
  if ( !v12 )
  {
    if ( a3 )
    {
      if ( sub_B6C30(a1, a3) <= 0 || a4 && sub_B550C(a1, " (%s)", a4) <= 0 )
        return 0;
    }
    else if ( a4 )
    {
LABEL_10:
      if ( sub_B6C30(a1, (int)a4) <= 0 )
        return 0;
    }
    return sub_B69CC(a1, (int)": ", 2) == 2;
  }
  return 1;
}
