int __fastcall sub_686FC(int a1, unsigned int a2, __int64 a3, int a4)
{
  int v5; // r2
  int v8; // [sp+8h] [bp-5Ch]
  _DWORD v10[17]; // [sp+14h] [bp-50h] BYREF
  unsigned int j; // [sp+58h] [bp-Ch]
  unsigned int i; // [sp+5Ch] [bp-8h]

  v8 = a2;
  memset(v10, 0, 65);
  if ( a4 <= 1 || (unsigned int)a4 > 0x24 || !a2 )
    return 0;
  if ( a2 > 0x41 )
    v8 = 65;
  for ( i = 0; v8 - 1 > i; ++i )
  {
    sub_8FE20(a3, HIDWORD(a3), a4, a4 >> 31);
    *((_BYTE *)v10 + i) = a0123456789abcd[v5];
    a3 = sub_8FE20(a3, HIDWORD(a3), a4, a4 >> 31);
  }
  if ( a3 )
    return 0;
  for ( j = 0; v8 - 1 > j; ++j )
    *(_BYTE *)(a1 + j) = *((_BYTE *)v10 + v8 - j - 2);
  *(_BYTE *)(a1 + v8 - 1) = 0;
  return 1;
}
