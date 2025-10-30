int __fastcall sub_2682C(int a1, int a2)
{
  int v2; // r3
  int result; // r0

  v2 = (unsigned int)a1 >> 31;
  if ( dword_5BA974 <= a1 )
    v2 = 1;
  if ( v2 )
    return -2147482623;
  if ( dword_5BA980 )
  {
    result = 0;
LABEL_7:
    *(_DWORD *)(dword_5BA990 + 8 * a1 + 4) = a2;
    return result;
  }
  result = sub_24DB0(&dword_5BA920);
  if ( result >= 0 )
    goto LABEL_7;
  return result;
}
