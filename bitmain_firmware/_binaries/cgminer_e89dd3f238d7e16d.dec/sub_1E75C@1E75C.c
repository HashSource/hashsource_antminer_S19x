char *__fastcall sub_1E75C(char *result, int a2, int a3)
{
  char *v3; // [sp+Ch] [bp-140h]
  int v4; // [sp+14h] [bp-138h]
  int v5; // [sp+18h] [bp-134h]
  int v6; // [sp+1Ch] [bp-130h]
  int v7; // [sp+20h] [bp-12Ch]
  int v8; // [sp+24h] [bp-128h]
  int v9; // [sp+28h] [bp-124h]
  int v10; // [sp+2Ch] [bp-120h]
  int v11; // [sp+30h] [bp-11Ch]
  _DWORD v12[64]; // [sp+34h] [bp-118h]
  int v13; // [sp+134h] [bp-18h]
  int v14; // [sp+138h] [bp-14h]
  int v15; // [sp+13Ch] [bp-10h]
  int j; // [sp+140h] [bp-Ch]
  int i; // [sp+144h] [bp-8h]
  char v18; // [sp+148h] [bp-4h] BYREF

  v3 = result;
  for ( i = 0; i < a3; ++i )
  {
    v15 = a2 + (i << 6);
    for ( j = 0; j <= 15; ++j )
      v12[j] = *(unsigned __int8 *)(v15 + 4 * j + 3)
             | (*(unsigned __int8 *)(v15 + 4 * j + 2) << 8)
             | (*(unsigned __int8 *)(v15 + 4 * j + 1) << 16)
             | (*(unsigned __int8 *)(v15 + 4 * j) << 24);
    for ( j = 16; j <= 63; ++j )
    {
      result = &v18;
      v12[j] = (__ROR4__(v12[j - 2], 17) ^ __ROR4__(v12[j - 2], 19) ^ (v12[j - 2] >> 10))
             + v12[j - 7]
             + ((v12[j - 15] >> 3) ^ __ROR4__(v12[j - 15], 7) ^ __ROR4__(v12[j - 15], 18))
             + v12[j - 16];
    }
    for ( j = 0; j <= 7; ++j )
      *(&v4 + j) = *(_DWORD *)&v3[4 * j + 136];
    for ( j = 0; j <= 63; ++j )
    {
      v14 = v11
          + (__ROR4__(v8, 25) ^ __ROR4__(v8, 6) ^ __ROR4__(v8, 11))
          + (v10 & ~v8 ^ v8 & v9)
          + dword_85808[j]
          + v12[j];
      result = (char *)v5;
      v13 = (__ROR4__(v4, 2) ^ __ROR4__(v4, 13) ^ __ROR4__(v4, 22)) + (v6 & v5 ^ v4 & (v6 ^ v5));
      v11 = v10;
      v10 = v9;
      v9 = v8;
      v8 = v7 + v14;
      v7 = v6;
      v6 = v5;
      v5 = v4;
      v4 = v14 + v13;
    }
    for ( j = 0; j <= 7; ++j )
      *(_DWORD *)&v3[4 * j + 136] += *(&v4 + j);
  }
  return result;
}
