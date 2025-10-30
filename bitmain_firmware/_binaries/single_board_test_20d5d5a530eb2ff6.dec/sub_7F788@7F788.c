int __fastcall sub_7F788(int a1, int a2, int a3)
{
  unsigned int v3; // r2
  unsigned int v4; // r4
  int v6; // r5
  unsigned int v7; // r2
  int v8; // r6
  int v9; // [sp+0h] [bp-Ch]

  v3 = a3 + 1;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v3 > v4 )
    return 0;
  v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 20) + v4 - 1);
  v7 = v3 + v6++;
  v8 = (a2 - v6) ^ v6;
  v9 = ~((int)((v4 ^ v7 | v7 ^ (v4 - v7)) ^ v4) >> 31) & ~((a2 ^ (v6 ^ a2 | v8)) >> 31);
  *(_DWORD *)(a1 + 8) = v4 - (v9 & v6);
  return (unsigned __int8)~((int)((v4 ^ v7 | v7 ^ (v4 - v7)) ^ v4) >> 31)
       & (unsigned __int8)~((a2 ^ (v6 ^ a2 | v8)) >> 31)
       & 1
       | ~v9;
}
