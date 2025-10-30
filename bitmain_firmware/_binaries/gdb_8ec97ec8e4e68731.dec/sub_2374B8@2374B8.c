int __fastcall sub_2374B8(int a1, __int64 *a2, unsigned int a3, char *s2)
{
  int v6; // r7
  __int64 i; // r2
  int v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+4h] [bp-8h] BYREF

  v6 = sub_234B1C(a1, s2);
  if ( !v6 )
    return 0;
  for ( i = *a2; a3 >= (HIDWORD(i) - (int)i) >> 3; i = *a2 )
  {
    v9 = 0;
    v10 = 0;
    ((void (__fastcall *)(__int64 *, int *, int *))sub_23AD74)(a2, &v9, &v10);
  }
  *(_DWORD *)(i + 8 * a3) = v6;
  *(_DWORD *)(i + 8 * a3 + 4) = 0;
  return 1;
}
