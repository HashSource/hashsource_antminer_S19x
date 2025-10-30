int __fastcall sub_520F8(const char *a1, _DWORD *a2, int a3, int a4)
{
  const char *v5; // r5
  int v6; // r12
  int v7; // r1
  int v8; // lr
  const char *v9; // r1
  int v10; // t1
  int v11; // r0
  char v13; // r2
  char v14; // r1
  unsigned int v15; // [sp+14h] [bp-1Ch] BYREF
  unsigned int v16; // [sp+18h] [bp-18h] BYREF
  unsigned int v17; // [sp+1Ch] [bp-14h] BYREF
  int v18; // [sp+20h] [bp-10h] BYREF
  int v19; // [sp+24h] [bp-Ch] BYREF
  int v20; // [sp+28h] [bp-8h] BYREF
  int v21; // [sp+2Ch] [bp-4h]

  v5 = a1;
  v6 = *(_DWORD *)(a3 + 12);
  if ( a4 < v6 )
    a1 = *(const char **)a3;
  v7 = _stack_chk_guard;
  if ( a4 < v6 )
    *(_DWORD *)(a3 + 4) = a1;
  else
    a1 = *(const char **)(a3 + 4);
  v21 = v7;
  if ( a4 < v6 )
  {
    v6 = 0;
    *(_DWORD *)(a3 + 12) = 0;
  }
  if ( a4 > v6 )
  {
    v8 = *(unsigned __int8 *)a1;
    if ( *a1 )
    {
      v9 = a1 + 1;
      do
      {
        if ( v8 == 44 )
          ++v6;
        *(_DWORD *)(a3 + 4) = v9;
        *(_DWORD *)(a3 + 12) = v6;
        a1 = v9;
        if ( a4 <= v6 )
          break;
        v10 = *(unsigned __int8 *)v9++;
        v8 = v10;
      }
      while ( v10 );
    }
  }
  v11 = sscanf(a1, "%2u%2u%2u%n.%3lu%n", &v15, &v16, &v17, &v18, &v20, &v19);
  if ( v11 <= 2 )
    return 0;
  if ( v18 != 6 )
    return 0;
  if ( v15 > 0x17 )
    return 0;
  v13 = v16;
  if ( v16 > 0x3B )
    return 0;
  v14 = v17;
  if ( v17 > 0x3C )
    return 0;
  *((_BYTE *)v5 + 6) = v15;
  *((_BYTE *)v5 + 7) = v13;
  *((_BYTE *)v5 + 8) = v14;
  if ( v11 == 4 )
    *a2 = v20 * *(_DWORD *)&byte_9A7DC[4 * v19 - 24];
  else
    *a2 = 0;
  return 1;
}
