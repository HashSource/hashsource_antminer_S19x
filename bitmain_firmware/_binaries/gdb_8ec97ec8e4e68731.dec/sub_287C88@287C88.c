__int32_t *__fastcall sub_287C88(const char *a1)
{
  const char *v1; // r6
  size_t v2; // r0
  __int32_t *v3; // r3
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r4
  __int32_t *v7; // r8
  __int32_t *v8; // r5
  char v9; // r4
  int v10; // t1
  int v11; // r10
  bool v12; // zf
  int v13; // t1
  const unsigned __int16 **v15; // r0
  __int16 v16; // r0
  const __int32_t **v17; // r0
  const __int32_t *v18; // r4
  __int32_t v19; // r1
  const __int32_t **v20; // r0
  const unsigned __int16 **v21; // r0
  const __int32_t **v22; // r0
  int v23; // r10
  const __int32_t **v24; // r0
  const unsigned __int16 **v25; // r0
  __int32_t *v26; // [sp+4h] [bp-10h]
  __int32_t *v27; // [sp+8h] [bp-Ch]
  __int32_t *v28; // [sp+8h] [bp-Ch]
  const unsigned __int16 *v29; // [sp+Ch] [bp-8h]

  v1 = a1;
  v2 = strlen(a1);
  v3 = (__int32_t *)sub_93028(7 * v2 + 1);
  v4 = *(unsigned __int8 *)v1;
  v5 = (int)v3;
  if ( *v1 )
  {
    while ( 1 )
    {
      v6 = v4;
      if ( (unsigned int)(v4 - 128) <= 0x7F )
      {
        v6 = v4 & 0xFFFFFF7F;
        v7 = (__int32_t *)(v5 + 3);
        v8 = (__int32_t *)(v5 + 4);
        *(_BYTE *)v5 = 92;
        *(_BYTE *)(v5 + 1) = 77;
        *(_BYTE *)(v5 + 2) = 45;
      }
      else
      {
        if ( v4 == 27 )
        {
          v8 = (__int32_t *)(v5 + 1);
          v9 = 101;
          *(_BYTE *)v5 = 92;
          v5 += 2;
          goto LABEL_6;
        }
        if ( v4 > 31 )
        {
          if ( v4 == 127 )
          {
            *(_BYTE *)v5 = 92;
            v8 = (__int32_t *)(v5 + 3);
            *(_BYTE *)(v5 + 1) = 67;
            v9 = 63;
            *(_BYTE *)(v5 + 2) = 45;
            v5 += 4;
            goto LABEL_6;
          }
LABEL_25:
          v8 = (__int32_t *)(v5 + 1);
          v7 = (__int32_t *)v5;
          goto LABEL_14;
        }
        if ( (v4 & 0x80u) != 0 )
          goto LABEL_25;
        v11 = (char)v4 | 0x40;
        v6 = v4 | 0x40;
        *(_BYTE *)v5 = 92;
        *(_BYTE *)(v5 + 1) = 67;
        v7 = (__int32_t *)(v5 + 3);
        *(_BYTE *)(v5 + 2) = 45;
        v8 = (__int32_t *)(v5 + 4);
        if ( (unsigned __int8)v11 != (v4 | 0x40) )
        {
          if ( v11 != v6 )
            goto LABEL_14;
          v11 = (__int16)v11;
          v26 = v3;
          v21 = _ctype_b_loc();
          v3 = v26;
          v5 = (*v21)[(__int16)v11];
          if ( (v5 & 0x100) == 0 )
            goto LABEL_14;
          v22 = _ctype_tolower_loc();
          v3 = v26;
          v5 = (int)*v22;
LABEL_32:
          v23 = 4 * v11;
LABEL_33:
          v6 = *(_DWORD *)(v5 + v23);
          goto LABEL_4;
        }
        v27 = v3;
        v15 = _ctype_b_loc();
        v5 = 2 * (unsigned __int8)v11;
        v29 = *v15;
        v3 = v27;
        v16 = *(const unsigned __int16 *)((char *)*v15 + v5);
        if ( (v16 & 0x200) != 0 )
        {
          v17 = _ctype_toupper_loc();
          v18 = *v17;
          v19 = (*v17)[(unsigned __int8)v11];
          v3 = v27;
          if ( (v19 & 0xFFFFFF00) == 0 && (v29[v19] & 0x100) != 0 )
          {
            v5 = (int)*_ctype_tolower_loc();
            v3 = v27;
            v23 = 4 * LOBYTE(v18[(unsigned __int8)v11]);
            goto LABEL_33;
          }
        }
        else
        {
          if ( v11 != v6 )
            goto LABEL_14;
          if ( (v16 & 0x100) != 0 )
          {
            v11 = (__int16)v11;
            v24 = _ctype_tolower_loc();
            v3 = v27;
            v5 = (int)*v24;
            goto LABEL_32;
          }
          v25 = _ctype_b_loc();
          v3 = v27;
          v5 = (*v25)[(unsigned __int8)v11];
          if ( (v5 & 0x200) == 0 )
            goto LABEL_14;
        }
        v28 = v3;
        v20 = _ctype_toupper_loc();
        v5 = (int)*v20;
        v6 = (*v20)[(unsigned __int8)v11];
        v3 = v28;
      }
LABEL_4:
      if ( v6 == 27 )
      {
        v5 = (int)v8 + 1;
        v9 = 101;
        *(_BYTE *)v7 = 92;
LABEL_6:
        *(_BYTE *)v8 = v9;
        v10 = *(unsigned __int8 *)++v1;
        v4 = v10;
        if ( !v10 )
          break;
      }
      else
      {
LABEL_14:
        v12 = v6 == 34;
        if ( v6 != 34 )
          v12 = v6 == 92;
        if ( v12 )
          *(_BYTE *)v7 = 92;
        else
          v5 = (int)v8;
        if ( v12 )
          v5 = (int)v8 + 1;
        else
          v8 = v7;
        *(_BYTE *)v8 = v6;
        v13 = *(unsigned __int8 *)++v1;
        v4 = v13;
        if ( !v13 )
          break;
      }
    }
  }
  *(_BYTE *)v5 = 0;
  return v3;
}
