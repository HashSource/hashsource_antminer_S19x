int __fastcall sub_F68D4(int a1, int a2, const char *a3, size_t a4)
{
  int result; // r0
  int v7; // r4
  int v8; // r6
  int v9; // r7
  int v10; // r5
  __int16 *v11; // r3
  int v12; // r2
  int v13; // r3
  _BYTE *v14; // r11
  __int16 *v15; // r3
  int v16; // r5
  const char *v17; // r10
  int v18; // r7
  __int16 *v19; // r2
  const char *v20; // r4
  int v21; // [sp+0h] [bp-14h]
  _DWORD v23[2]; // [sp+Ch] [bp-8h] BYREF

  result = sub_171258(a1);
  v7 = *(_DWORD *)(result + 24);
  v8 = result;
  if ( *(__int16 *)(v7 + 4) > 0 )
  {
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = (*(_WORD *)(v7 + 2) & 0x380) == 0x80 ? *(__int16 **)(v7 + 28) : &word_3B4A2C;
      v12 = *v11;
      v13 = *(_DWORD *)(v7 + 24) + v9;
      if ( v12 > v10 )
        break;
      v14 = *(_BYTE **)(v13 + 16);
      if ( v14 )
      {
        if ( *v14 )
        {
          result = strncmp(*(const char **)(v13 + 16), a3, a4);
          if ( !result )
          {
            v23[0] = sub_327254(v14);
            result = sub_F7F60(a2, v23);
            v7 = *(_DWORD *)(v8 + 24);
          }
          goto LABEL_12;
        }
        result = *(_DWORD *)(v13 + 12);
        if ( **(_BYTE **)(result + 24) == 4 )
          goto LABEL_33;
      }
LABEL_12:
      ++v10;
      v9 += 24;
      if ( *(__int16 *)(v7 + 4) <= v10 )
        goto LABEL_13;
    }
    result = *(_DWORD *)(v13 + 12);
LABEL_33:
    result = sub_F68D4(result, a2, a3, a4);
    v7 = *(_DWORD *)(v8 + 24);
    goto LABEL_12;
  }
LABEL_13:
  if ( (*(_WORD *)(v7 + 2) & 0x380) == 0x80 )
    v15 = *(__int16 **)(v7 + 28);
  else
    v15 = &word_3B4A2C;
  v16 = v15[2] - 1;
  if ( v16 >= 0 )
  {
    v17 = 0;
    v21 = 0;
    v18 = 12 * v16;
    while ( 1 )
    {
      if ( (*(_WORD *)(v7 + 2) & 0x380) == 0x80 )
        v19 = *(__int16 **)(v7 + 28);
      else
        v19 = &word_3B4A2C;
      v20 = *(const char **)(*((_DWORD *)v19 + 8) + v18);
      if ( v20 )
      {
        result = strncmp(v20, a3, a4);
        if ( !result )
        {
          if ( !v21 )
            v17 = (const char *)sub_170CC4(v8);
          if ( !v17 || (result = strcmp(v17, v20)) != 0 )
          {
            v21 = 1;
            v23[0] = sub_327254(v20);
            result = sub_F7F60(a2, v23);
          }
          else
          {
            v21 = 1;
          }
        }
      }
      --v16;
      v18 -= 12;
      if ( v16 == -1 )
        break;
      v7 = *(_DWORD *)(v8 + 24);
    }
  }
  return result;
}
