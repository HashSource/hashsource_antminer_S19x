int __fastcall sub_5B940(int a1, int a2, unsigned int a3)
{
  bool v3; // zf
  unsigned int v5; // r6
  int v8; // r7
  size_t v9; // r3
  int v10; // r5
  size_t v11; // r0
  unsigned int v12; // r5
  size_t v13; // [sp+8h] [bp-Ch] BYREF
  unsigned int v14; // [sp+Ch] [bp-8h] BYREF

  v3 = a2 == 0;
  if ( a2 )
    v3 = a1 == 0;
  if ( v3 )
    return -1;
  v5 = 0;
  if ( !a3 )
    return 0;
  v8 = a2;
  v9 = *(_DWORD *)(a1 + 12);
  do
  {
    v10 = *(_DWORD *)(a1 + 16);
    v14 = a3 - v5;
    v13 = v10 - v9;
    if ( v10 == v9 )
    {
      v11 = fread(*(void **)(a1 + 8), 1u, *(_DWORD *)(a1 + 20), *(FILE **)(a1 + 4));
      if ( !v11 )
        return v5;
      v9 = 0;
      *(_DWORD *)(a1 + 16) = v11;
      v13 = v11;
      *(_DWORD *)(a1 + 12) = 0;
    }
    v12 = sub_58274(*(_DWORD *)a1, v8, &v14, (unsigned __int8 *)(v9 + *(_DWORD *)(a1 + 8)), &v13, 0);
    if ( sub_57568(v12) )
      return v12;
    v5 += v14;
    v8 += v14;
    v9 = v13 + *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v9;
  }
  while ( a3 > v5 );
  return v5;
}
