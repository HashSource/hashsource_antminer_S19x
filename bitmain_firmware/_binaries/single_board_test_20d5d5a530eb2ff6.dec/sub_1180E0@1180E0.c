int __fastcall sub_1180E0(int a1, int a2, int c, int a4)
{
  int v4; // r4
  int v8; // r4
  const char *v9; // r2
  int v10; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r5
  int i; // r4
  int v18; // lr
  int v19; // r2
  const char *v20; // r3
  unsigned __int8 dest; // [sp+8h] [bp-10h] BYREF
  unsigned __int8 v22; // [sp+9h] [bp-Fh]
  unsigned __int8 v23; // [sp+Ah] [bp-Eh]
  unsigned __int8 v24; // [sp+Bh] [bp-Dh]
  char v25; // [sp+Ch] [bp-Ch]
  char v26; // [sp+Dh] [bp-Bh]
  char v27; // [sp+Eh] [bp-Ah]
  char v28; // [sp+Fh] [bp-9h]
  char v29; // [sp+10h] [bp-8h]
  char v30; // [sp+11h] [bp-7h]
  char v31; // [sp+12h] [bp-6h]
  char v32; // [sp+13h] [bp-5h]
  char v33; // [sp+14h] [bp-4h]
  char v34; // [sp+15h] [bp-3h]
  char v35; // [sp+16h] [bp-2h]
  char v36; // [sp+17h] [bp-1h]

  v4 = *(_DWORD *)a4;
  if ( *(int *)a4 < 0 )
    return 0;
  if ( a2 == 1 )
  {
    if ( v4 <= 4 )
    {
      if ( v4 )
      {
        memcpy(&dest, *(const void **)(a4 + 8), *(_DWORD *)a4);
        v13 = *(_DWORD *)(a4 + 12) & 7;
        if ( v13 )
        {
          v14 = 255 >> (8 - v13);
          if ( c )
            *(&dest + v4 - 1) |= v14;
          else
            *(&dest + v4 - 1) &= ~(_BYTE)v14;
        }
      }
      memset(&dest + v4, c, 4 - v4);
      sub_B550C(a1, (unsigned __int8 *)"%d.%d.%d.%d", dest, v22, v23, v24);
      return 1;
    }
    return 0;
  }
  if ( a2 != 2 )
  {
    if ( v4 )
    {
      v8 = 0;
      v9 = &byte_1A4198;
      while ( 1 )
      {
        v10 = *(unsigned __int8 *)(*(_DWORD *)(a4 + 8) + v8++);
        sub_B550C(a1, "%s%02x", v9, v10);
        if ( *(_DWORD *)a4 <= v8 )
          break;
        if ( v8 > 0 )
          v9 = (const char *)&word_1B5258;
        else
          v9 = &byte_1A4198;
      }
    }
    sub_B550C(a1, (unsigned __int8 *)"[%d]", *(_DWORD *)(a4 + 12) & 7);
    return 1;
  }
  if ( v4 > 16 )
    return 0;
  if ( v4 )
  {
    memcpy(&dest, *(const void **)(a4 + 8), *(_DWORD *)a4);
    v12 = *(_DWORD *)(a4 + 12) & 7;
    if ( v12 )
    {
      v15 = 255 >> (8 - v12);
      if ( c )
        *(&dest + v4 - 1) |= v15;
      else
        *(&dest + v4 - 1) &= ~(_BYTE)v15;
    }
  }
  memset(&dest + v4, c, 16 - v4);
  if ( v36 || v35 )
  {
    v16 = 16;
  }
  else if ( v34 || v33 )
  {
    v16 = 14;
  }
  else if ( v32 || v31 )
  {
    v16 = 12;
  }
  else if ( v30 || v29 )
  {
    v16 = 10;
  }
  else if ( v28 || v27 )
  {
    v16 = 8;
  }
  else if ( v26 || v25 )
  {
    v16 = 6;
  }
  else if ( v24 || v23 )
  {
    v16 = 4;
  }
  else
  {
    if ( !v22 && !dest )
    {
      sub_B6C30(a1, (int)&word_1B5258);
      sub_B6C30(a1, (int)&word_1B5258);
      return 1;
    }
    v16 = 2;
  }
  for ( i = 0; i < v16; i += 2 )
  {
    v18 = *(&dest + i);
    v19 = *(&dest + i + 1);
    if ( i == 14 )
      v20 = &byte_1A4198;
    else
      v20 = (const char *)&word_1B5258;
    sub_B550C(a1, "%x%s", v19 | (v18 << 8), v20);
  }
  if ( v16 != 16 )
    sub_B6C30(a1, (int)&word_1B5258);
  return 1;
}
