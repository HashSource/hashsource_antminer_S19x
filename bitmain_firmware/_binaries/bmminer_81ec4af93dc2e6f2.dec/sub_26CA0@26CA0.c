int __fastcall sub_26CA0(int a1, int a2, char a3)
{
  int v3; // r3
  int result; // r0

  v3 = (unsigned int)a1 >> 31;
  if ( dword_5BA924 <= a1 )
    v3 = 1;
  if ( v3 )
    return -2147482623;
  if ( dword_5BA980 )
  {
    result = 0;
LABEL_7:
    *(_BYTE *)(dword_5BA988 + 528 * a1 + a2 + 16) = a3;
    return result;
  }
  result = sub_24DB0(&dword_5BA920);
  if ( result >= 0 )
    goto LABEL_7;
  return result;
}
