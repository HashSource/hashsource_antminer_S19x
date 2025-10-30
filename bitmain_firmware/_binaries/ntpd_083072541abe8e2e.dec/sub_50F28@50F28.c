int __fastcall sub_50F28(_BYTE *a1, unsigned int *a2, int a3, int a4)
{
  int v6; // r12
  const char *v7; // r0
  int v8; // lr
  const char *v9; // r1
  int v10; // t1
  int v11; // r0
  unsigned int v13; // r3
  char v14; // r2
  char v15; // r1
  unsigned int v16; // [sp+14h] [bp-1Ch] BYREF
  unsigned int v17; // [sp+18h] [bp-18h] BYREF
  unsigned int v18; // [sp+1Ch] [bp-14h] BYREF
  int v19; // [sp+20h] [bp-10h] BYREF
  int v20; // [sp+24h] [bp-Ch] BYREF
  int v21; // [sp+28h] [bp-8h] BYREF

  v6 = *(_DWORD *)(a3 + 12);
  if ( a4 < v6 )
  {
    v7 = *(const char **)a3;
    v6 = 0;
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 4) = v7;
  }
  else
  {
    v7 = *(const char **)(a3 + 4);
    if ( a4 <= v6 )
      goto LABEL_9;
  }
  v8 = *(unsigned __int8 *)v7;
  if ( *v7 )
  {
    v9 = v7 + 1;
    do
    {
      if ( v8 == 44 )
        ++v6;
      *(_DWORD *)(a3 + 4) = v9;
      *(_DWORD *)(a3 + 12) = v6;
      v7 = v9;
      if ( a4 <= v6 )
        break;
      v10 = *(unsigned __int8 *)v9++;
      v8 = v10;
    }
    while ( v10 );
  }
LABEL_9:
  v11 = sscanf(v7, "%2u%2u%2u%n.%3lu%n", &v16, &v17, &v18, &v19, &v21, &v20);
  if ( v11 <= 2 )
    return 0;
  if ( v19 != 6 )
    return 0;
  v13 = v16;
  if ( v16 > 0x17 )
    return 0;
  v14 = v17;
  if ( v17 > 0x3B )
    return 0;
  v15 = v18;
  if ( v18 > 0x3C )
    return 0;
  a1[6] = v16;
  if ( v11 != 4 )
    v13 = 0;
  a1[7] = v14;
  a1[8] = v15;
  if ( v11 == 4 )
    *a2 = v21 * dword_99210[v20 - 7];
  else
    *a2 = v13;
  return 1;
}
