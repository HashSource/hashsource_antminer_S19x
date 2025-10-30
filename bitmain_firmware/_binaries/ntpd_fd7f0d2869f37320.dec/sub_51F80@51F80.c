int __fastcall sub_51F80(int a1, int a2, int a3, int a4)
{
  int v5; // r12
  bool v6; // cc
  int v7; // r0
  const char *v8; // r0
  int v9; // r4
  const char *v10; // lr
  int v11; // t1
  char v13; // r2
  __int16 v14; // r1
  int v15; // [sp+Ch] [bp-14h] BYREF
  int v16; // [sp+10h] [bp-10h] BYREF
  int v17; // [sp+14h] [bp-Ch] BYREF
  int v18; // [sp+18h] [bp-8h] BYREF
  int v19; // [sp+1Ch] [bp-4h]

  v5 = *(_DWORD *)(a2 + 12);
  v6 = a3 < v5;
  v7 = _stack_chk_guard;
  if ( a3 < v5 )
  {
    v5 = 0;
    *(_DWORD *)(a2 + 12) = 0;
  }
  v19 = v7;
  if ( v6 )
    v8 = *(const char **)a2;
  else
    v8 = *(const char **)(a2 + 4);
  if ( v6 )
    *(_DWORD *)(a2 + 4) = v8;
  if ( a3 > v5 )
  {
    v9 = *(unsigned __int8 *)v8;
    if ( *v8 )
    {
      v10 = v8 + 1;
      do
      {
        if ( v9 == 44 )
          ++v5;
        *(_DWORD *)(a2 + 4) = v10;
        *(_DWORD *)(a2 + 12) = v5;
        v8 = v10;
        if ( a3 <= v5 )
          break;
        v11 = *(unsigned __int8 *)v10++;
        v9 = v11;
      }
      while ( v11 );
    }
  }
  if ( a4 )
  {
    if ( a4 != 1 || sscanf(v8, "%2u,%2u,%4u%n", &v17, &v16, &v15, &v18) != 3 || v18 != 10 )
      return 0;
  }
  else if ( sscanf(v8, "%2u%2u%2u%n", &v17, &v16, &v15, &v18) != 3 || v18 != 6 )
  {
    return 0;
  }
  if ( (unsigned int)(v17 - 1) > 0x1E )
    return 0;
  v13 = v16;
  if ( (unsigned int)(v16 - 1) > 0xB )
    return 0;
  v14 = v15;
  *(_BYTE *)(a1 + 5) = v17;
  *(_BYTE *)(a1 + 4) = v13;
  *(_WORD *)a1 = v14;
  return 1;
}
