int __fastcall sub_26920(int a1)
{
  __int64 v1; // d0
  int v2; // r3
  int result; // r0

  v2 = (unsigned int)a1 >> 31;
  if ( dword_5BA924 <= a1 )
    v2 = 1;
  if ( v2 )
    return -2147482623;
  if ( dword_5BA980 )
  {
    result = 0;
LABEL_7:
    *(_QWORD *)(dword_5BA988 + 528 * a1 + 8) = v1;
    return result;
  }
  result = sub_24DB0(&dword_5BA920);
  if ( result >= 0 )
    goto LABEL_7;
  return result;
}
