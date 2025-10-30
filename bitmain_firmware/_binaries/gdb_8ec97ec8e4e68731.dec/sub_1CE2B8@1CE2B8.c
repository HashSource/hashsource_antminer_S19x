int __fastcall sub_1CE2B8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int))
{
  int v6; // r6
  int v8; // r0
  int v12; // r12
  int result; // r0
  int v14; // r3
  int v15; // r2
  int v16; // r0
  unsigned int v17; // r11
  int *v18; // r6
  int v19; // r5
  char v20; // r3
  int v21; // r0
  unsigned int v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v6 = *(_BYTE *)(a1 + 55) & 3;
  if ( (*(_BYTE *)(a1 + 55) & 3) != 0 )
    return v6 == 1;
  v8 = *(_DWORD *)(a1 + 32);
  if ( v8 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v6);
        if ( *(_DWORD *)(v12 + 24) )
          break;
        if ( v8 <= ++v6 )
          goto LABEL_8;
      }
      result = sub_1CE2B8(v12, a2, a3, a4, a5, a6);
      if ( result )
      {
        *(_BYTE *)(a1 + 55) = *(_BYTE *)(a1 + 55) & 0xFC | 1;
        return result;
      }
      v8 = *(_DWORD *)(a1 + 32);
      ++v6;
    }
    while ( v8 > v6 );
  }
LABEL_8:
  v14 = *(_DWORD *)(a2 + 108);
  v15 = *(_DWORD *)(a1 + 36);
  v16 = *(_DWORD *)(a1 + 48);
  v17 = v14 + 4 * (v15 + *(_DWORD *)(a1 + 40));
  v18 = (int *)(v14 + 4 * v15);
  v22 = v17;
  v23 = *(_DWORD *)(a2 + 120) + 4 * (*(_DWORD *)(a1 + 44) + v16);
  while ( 1 )
  {
    while ( v17 > (unsigned int)v18 )
    {
      v16 = sub_258BD4(v16);
      if ( a3 == 3 )
      {
        v16 = *v18;
      }
      else if ( a3 )
      {
        if ( a3 == 1 )
        {
          v16 = *v18;
          if ( (*(_BYTE *)(*v18 + 24) & 0xF8) != 0x50 )
            goto LABEL_17;
        }
        else
        {
          if ( a3 != 2 )
            goto LABEL_17;
          v16 = *v18;
          if ( (*(_BYTE *)(*v18 + 24) & 0xF8) != 0x40 )
            goto LABEL_17;
        }
      }
      else
      {
        v16 = *v18;
        if ( (*(_BYTE *)(*v18 + 24) & 0xE8) == 0x40 )
          goto LABEL_17;
      }
      v16 = sub_1CE278(v16, a4);
      v19 = v16;
      if ( v16 )
      {
        if ( !a6 || (v21 = sub_21B7DC(*v18), (v16 = a6(a5, v21)) != 0) )
        {
          v20 = 1;
          goto LABEL_12;
        }
      }
LABEL_17:
      ++v18;
    }
    if ( v22 != v17 )
    {
      v19 = 0;
      v20 = 2;
      goto LABEL_12;
    }
    v19 = *(_DWORD *)(a1 + 48);
    if ( !v19 )
      break;
    v17 = v23;
    v18 = (int *)(*(_DWORD *)(a2 + 120) + 4 * *(_DWORD *)(a1 + 44));
  }
  v20 = 2;
LABEL_12:
  *(_BYTE *)(a1 + 55) = *(_BYTE *)(a1 + 55) & 0xFC | v20 & 3;
  return v19;
}
