int __fastcall sub_26D54(int a1, int a2)
{
  int v2; // r3
  int result; // r0

  v2 = (unsigned int)a1 >> 31;
  if ( dword_5BF82C[0] <= a1 )
    v2 = 1;
  if ( v2 )
    return -2147482623;
  if ( dword_5BF838 )
  {
    result = 0;
LABEL_7:
    *(_DWORD *)(dword_5BF848 + 8 * a1 + 4) = a2;
    return result;
  }
  result = sub_252C0(&dword_5BF7D8);
  if ( result >= 0 )
    goto LABEL_7;
  return result;
}
