int __fastcall sub_1D3B78(int a1, unsigned int a2, int *a3)
{
  int result; // r0
  int v7; // r0
  int v8; // r3
  bool v9; // zf

  result = sub_CF680(a1, a2);
  if ( result )
  {
    v7 = sub_CF7C8(a1, a2);
    v9 = v7 == 0;
    if ( v7 )
      v8 = 2;
    result = 1;
    if ( v9 )
      *a3 = 1;
    else
      *a3 = v8;
  }
  else
  {
    *a3 = 0;
  }
  return result;
}
