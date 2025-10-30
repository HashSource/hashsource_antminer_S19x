int __fastcall sub_50DCC(int a1, int a2, int a3, int a4)
{
  int v5; // r12
  const char *v6; // r0
  int v7; // r4
  const char *v8; // lr
  int v9; // t1
  char v11; // r2
  __int16 v12; // r1
  int v13; // [sp+Ch] [bp-14h] BYREF
  int v14; // [sp+10h] [bp-10h] BYREF
  int v15; // [sp+14h] [bp-Ch] BYREF
  int v16; // [sp+18h] [bp-8h] BYREF

  v5 = *(_DWORD *)(a2 + 12);
  if ( a3 < v5 )
  {
    v6 = *(const char **)a2;
    v5 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 4) = v6;
  }
  else
  {
    v6 = *(const char **)(a2 + 4);
    if ( a3 <= v5 )
      goto LABEL_9;
  }
  v7 = *(unsigned __int8 *)v6;
  if ( *v6 )
  {
    v8 = v6 + 1;
    do
    {
      if ( v7 == 44 )
        ++v5;
      *(_DWORD *)(a2 + 4) = v8;
      *(_DWORD *)(a2 + 12) = v5;
      v6 = v8;
      if ( a3 <= v5 )
        break;
      v9 = *(unsigned __int8 *)v8++;
      v7 = v9;
    }
    while ( v9 );
  }
LABEL_9:
  if ( a4 == 1 )
  {
    if ( sscanf(v6, "%2u,%2u,%4u%n", &v15, &v14, &v13, &v16) != 3 || v16 != 10 )
      return 0;
  }
  else if ( sscanf(v6, "%2u%2u%2u%n", &v15, &v14, &v13, &v16) != 3 || v16 != 6 )
  {
    return 0;
  }
  if ( (unsigned int)(v15 - 1) > 0x1E )
    return 0;
  v11 = v14;
  if ( (unsigned int)(v14 - 1) > 0xB )
    return 0;
  v12 = v13;
  *(_BYTE *)(a1 + 5) = v15;
  *(_BYTE *)(a1 + 4) = v11;
  *(_WORD *)a1 = v12;
  return 1;
}
