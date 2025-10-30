unsigned int __fastcall sub_3481C(int a1, unsigned int a2)
{
  unsigned int result; // r0
  unsigned int *v4; // [sp+Ch] [bp-8h]

  v4 = (unsigned int *)(a1 + 68);
  result = sub_2CD98(a2);
  *v4 = result;
  if ( *(_DWORD *)(a1 + 308) )
  {
    free(*(void **)(a1 + 308));
    result = (unsigned int)sub_1FE6C((int)v4, 4);
    *(_DWORD *)(a1 + 308) = result;
  }
  return result;
}
