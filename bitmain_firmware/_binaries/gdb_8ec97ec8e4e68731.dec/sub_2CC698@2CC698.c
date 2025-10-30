int __fastcall sub_2CC698(int a1, unsigned int a2, unsigned int a3, int a4, unsigned int a5, int a6, unsigned int a7)
{
  int v7; // r3
  unsigned int v8; // r6
  unsigned int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r11
  int v13; // r0
  int v14; // r3
  size_t v15; // r0
  unsigned int v16; // r10
  size_t v17; // r8
  int v18; // r4
  unsigned int v19; // r3
  int v20; // r3
  _BYTE *v21; // r5
  int v22; // r7
  char *v23; // r4
  int result; // r0
  _DWORD *v25; // r5
  void *v26; // r1
  int v27; // r3
  size_t v28; // r2
  unsigned int v29; // r4
  unsigned int v30; // r4
  size_t *v31; // r0
  size_t *v32; // r5
  size_t v33; // r2
  void *v34; // r1
  int v35; // [sp+4h] [bp-80h]
  int v37; // [sp+Ch] [bp-78h]
  unsigned int v38; // [sp+10h] [bp-74h]
  int v39; // [sp+18h] [bp-6Ch]
  unsigned int v40; // [sp+20h] [bp-64h] BYREF
  size_t n; // [sp+24h] [bp-60h]
  int v42; // [sp+28h] [bp-5Ch]
  char *s1; // [sp+2Ch] [bp-58h]
  void *src; // [sp+30h] [bp-54h]
  unsigned int v45; // [sp+34h] [bp-50h]
  _BYTE dest[76]; // [sp+38h] [bp-4Ch] BYREF

  v7 = a7;
  v8 = a2;
  v9 = a2 + a3;
  v10 = a5;
  if ( a7 < 4 )
    v7 = 4;
  v38 = v9;
  v35 = v7;
  if ( v8 >= v9 )
    return 1;
  v11 = v8;
  if ( a3 > 0xB )
  {
    v37 = -v7;
    while ( 1 )
    {
      v13 = (*(int (__fastcall **)(unsigned int, unsigned int))(*(_DWORD *)(a1 + 4) + 76))(v8 + 8, v10);
      v14 = *(_DWORD *)(a1 + 4);
      v42 = v13;
      v40 = (*(int (__fastcall **)(unsigned int))(v14 + 76))(v8);
      s1 = (char *)(v8 + 12);
      if ( v40 > v11 - (v8 + 12) + a3 )
        return 0;
      v15 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(a1 + 4) + 76))(v8 + 4);
      v16 = v40;
      v17 = v15;
      v10 = a5;
      n = v15;
      v18 = (v40 + 11 + v35) & v37;
      v19 = v8 + v18;
      src = (void *)(v8 + v18);
      v45 = v8 + v18 - v11 + a5;
      if ( v15 )
      {
        if ( v19 >= v38 || v15 > v11 - v19 + a3 )
          return 0;
      }
      v20 = *(_BYTE *)(a1 + 40) & 7;
      if ( v20 != 1 )
        break;
      if ( v40 != 4 )
      {
        if ( v40 == 8 && !strcmp(s1, "stapsdt") && v42 == 3 )
        {
          v25 = (_DWORD *)sub_2ACBF4(a1, v17 + 12);
          v17 = n;
          v26 = src;
          v27 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2308);
          v28 = n;
          v25[1] = n;
          *v25 = v27;
          memcpy(v25 + 2, v26, v28);
          v29 = v40;
          *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2308) = v25;
          v18 = (v29 + 11 + v35) & v37;
        }
        goto LABEL_17;
      }
      if ( *s1 == 71 && s1[1] == 78 && s1[2] == 85 && !s1[3] )
      {
        if ( v42 == 3 )
        {
          if ( !v15 )
            return 0;
          v31 = (size_t *)sub_2ACBF4(a1, v15 + 7);
          v32 = v31;
          if ( !v31 )
            return 0;
          v33 = n;
          v34 = src;
          *v31 = n;
          memcpy(v31 + 1, v34, v33);
          v30 = v40;
          *(_DWORD *)(a1 + 172) = v32;
          goto LABEL_37;
        }
        if ( v42 == 5 )
        {
          if ( !sub_2F0980(a1, &v40) )
            return 0;
          goto LABEL_36;
        }
      }
LABEL_17:
      v8 += (v35 - 1 + v18 + v17) & v37;
      if ( v8 >= v38 )
        return 1;
      if ( v11 - v8 + a3 <= 0xB )
        return 0;
    }
    if ( v20 != 3 )
      return 1;
    v21 = dest;
    memcpy(dest, &off_4195E4, 0x48u);
    v22 = 5;
    v39 = (v40 + 11 + v35) & v37;
    v23 = s1;
    while ( 1 )
    {
      v10 = *((_DWORD *)v21 + 16);
      if ( v16 >= v10 && !strncmp(v23, *((const char **)v21 + 15), *((_DWORD *)v21 + 16)) )
        break;
      --v22;
      v21 -= 12;
      if ( v22 == -1 )
      {
        v18 = v39;
        goto LABEL_17;
      }
    }
    result = (*(int (__fastcall **)(int, unsigned int *))&dest[12 * v22 + 8])(a1, &v40);
    if ( !result )
      return result;
LABEL_36:
    v30 = v40;
LABEL_37:
    v17 = n;
    v18 = (v30 + 11 + v35) & v37;
    goto LABEL_17;
  }
  return 0;
}
