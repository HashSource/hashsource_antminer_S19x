int __fastcall sub_1CCAB0(const char *a1)
{
  int v2; // [sp+0h] [bp-Ch] BYREF
  char v3[8]; // [sp+4h] [bp-8h] BYREF

  if ( !sub_1CCA00(a1, &v2, v3) || v2 <= 3 )
    return -1;
  if ( v2 == 4 )
    return *(_DWORD *)v3;
  return 0x7FFFFFFF;
}
