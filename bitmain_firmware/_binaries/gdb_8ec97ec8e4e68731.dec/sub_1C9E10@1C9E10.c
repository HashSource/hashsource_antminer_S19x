bool __fastcall sub_1C9E10(int *a1, int *a2)
{
  int v3; // r7
  int v5; // r6
  unsigned int v6; // r5
  unsigned int v7; // r4
  size_t v8; // r2
  unsigned int v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r4
  size_t v12; // r2
  unsigned int v13; // r2
  unsigned int v14; // r3
  const char *v16; // r4
  const char *v17; // r0

  v3 = *a1;
  v5 = *a2;
  v6 = *(_DWORD *)(*a1 + 32);
  v7 = *(_DWORD *)(*a2 + 32);
  if ( v6 >= v7 )
    v8 = *(_DWORD *)(*a2 + 32);
  else
    v8 = *(_DWORD *)(*a1 + 32);
  if ( !v8 || (v9 = memcmp(*(const void **)(v3 + 28), *(const void **)(v5 + 28), v8)) == 0 )
  {
    v9 = v6 - v7;
    if ( v6 == v7 )
    {
      v10 = *(_DWORD *)(v3 + 8);
      v11 = *(_DWORD *)(v5 + 8);
      v12 = v10 >= v11 ? *(_DWORD *)(v5 + 8) : *(_DWORD *)(v3 + 8);
      if ( !v12 || (v9 = memcmp(*(const void **)(v3 + 4), *(const void **)(v5 + 4), v12)) == 0 )
      {
        v9 = v10 - v11;
        if ( v10 == v11 )
        {
          v13 = *(_DWORD *)(v3 + 52);
          v14 = *(_DWORD *)(v5 + 52);
          if ( v13 != v14 )
            return v13 < v14;
          v16 = (const char *)sub_1B87A8(a1[1]);
          v17 = (const char *)sub_1B87A8(a2[1]);
          v9 = strcmp(v16, v17);
        }
      }
    }
  }
  return v9 >> 31;
}
