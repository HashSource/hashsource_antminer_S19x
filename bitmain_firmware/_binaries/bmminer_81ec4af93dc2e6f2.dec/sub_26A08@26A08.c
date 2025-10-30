int __fastcall sub_26A08(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = (unsigned int)a1 >> 31;
  if ( dword_5BA924 <= a1 )
    v1 = 1;
  if ( v1 )
    return -2147482623;
  if ( dword_5BA980 )
  {
    result = 0;
LABEL_7:
    ++*(_BYTE *)(dword_5BA988 + 528 * a1 + 1);
    return result;
  }
  result = sub_24DB0(&dword_5BA920);
  if ( result >= 0 )
    goto LABEL_7;
  return result;
}
