__int64 __fastcall sub_2B8404(int a1, int a2, unsigned int a3, unsigned int *a4, int a5)
{
  unsigned int *v5; // r4
  unsigned int *v9; // r7
  __int64 v10; // r2
  unsigned int v11; // t1
  __int64 result; // r0

  v5 = a4;
  v9 = &a4[a5];
  do
  {
    v11 = *v5++;
    v10 = __PAIR64__(a3, v11);
    a3 += 4;
    if ( *(_DWORD *)(a1 + 376) == 1 && (v10 & 0xFFFFFF0) == 0x12FFF10 )
      LODWORD(v10) = v10 & 0xF000000F | 0x1A0F000;
    result = sub_2B73D0(*(_DWORD *)(a1 + 364), *(_DWORD *)(a2 + 4), v10);
  }
  while ( v5 != v9 );
  return result;
}
