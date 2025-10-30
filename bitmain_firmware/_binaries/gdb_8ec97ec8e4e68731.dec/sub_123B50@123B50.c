char *__fastcall sub_123B50(int a1, int a2, char *s, char *a4, int a5, int a6, _BYTE *a7)
{
  _BYTE *v7; // r8
  char *v9; // r3
  int v11; // r5
  int v12; // r4
  int v13; // lr
  int v14; // r2
  char v15; // t1
  unsigned int v16; // r6
  int v17; // r2
  _BYTE *v18; // lr
  _BYTE *v19; // r8
  _BYTE *v20; // r11
  int v21; // r5
  int v22; // t1
  int v23; // r0
  int v25; // r1
  int v26; // r0
  int v27; // r7
  int v28; // lr
  char v29; // r3
  char *v30; // r3
  int v31; // t1
  const char *v32; // r0
  char *v33; // [sp+4h] [bp-8h]

  v7 = *(_BYTE **)(a2 + 4 * a1);
  if ( v7 )
  {
    v9 = v7 + 1;
    v11 = 0;
    v12 = *v7 & 0x7F;
    if ( (*v7 & 0x80) != 0 )
    {
      v14 = 0;
      do
      {
        v15 = *v9++;
        v14 += 7;
        v16 = v15 & 0x7F;
        v13 = v9 - v7;
        v12 |= v16 << v14;
        v11 |= (v16 << (v14 - 32)) | (v16 >> (32 - v14));
      }
      while ( v15 < 0 );
    }
    else
    {
      v13 = 1;
    }
    if ( !v12 )
      return s;
    v17 = v13 - 1;
    v18 = &v7[v13 - 1];
    v19 = &v7[v17];
    v20 = &v18[v12];
    while ( 1 )
    {
      v22 = (unsigned __int8)*++v19;
      v21 = v22;
      switch ( v22 )
      {
        case 3:
          v23 = (*(int (__fastcall **)(char *))(*(_DWORD *)(a5 + 4) + 52))(s) + 2;
          goto LABEL_10;
        case 4:
          s += (*(int (__fastcall **)(char *))(*(_DWORD *)(a5 + 4) + 40))(s) + 4;
          goto LABEL_11;
        case 5:
          s += 2;
          goto LABEL_11;
        case 6:
          s += 4;
          goto LABEL_11;
        case 7:
          s += 8;
          goto LABEL_11;
        case 8:
          if ( *s )
            v23 = strlen(s) + 1;
          else
            v23 = 1;
LABEL_10:
          s += v23;
          goto LABEL_11;
        case 9:
          v25 = 0;
          v33 = s + 1;
          v26 = *s & 0x7F;
          if ( *s < 0 )
          {
            v28 = 0;
            do
            {
              v28 += 7;
              v29 = *v33++;
              v27 = v33 - s;
              v26 |= (v29 & 0x7F) << v28;
              v25 |= ((v29 & 0x7F) << (v28 - 32)) | ((unsigned __int8)(v29 & 0x7F) >> (32 - v28));
            }
            while ( v29 < 0 );
          }
          else
          {
            v27 = 1;
          }
          s += v27 + v26;
          goto LABEL_11;
        case 10:
          s += (unsigned __int8)*s + 1;
          goto LABEL_11;
        case 11:
        case 12:
          ++s;
          goto LABEL_11;
        case 13:
        case 15:
          if ( a4 == s )
            goto LABEL_35;
          v30 = s + 1;
          if ( *s < 0 )
          {
            do
            {
              if ( a4 == v30 )
                goto LABEL_35;
              v31 = *v30++;
            }
            while ( v31 < 0 );
            if ( s == v30 )
            {
LABEL_35:
              if ( dword_47AC88 <= 0 )
                return 0;
              sub_121F08(a7);
              return 0;
            }
          }
          else if ( s == (char *)-1 )
          {
            goto LABEL_35;
          }
          s = v30;
LABEL_12:
          if ( v20 == v19 )
            return s;
          break;
        case 14:
        case 23:
          s += a6;
          goto LABEL_11;
        case 30:
          s += 16;
          goto LABEL_11;
        case 33:
LABEL_11:
          if ( s )
            goto LABEL_12;
          return 0;
        default:
          if ( dword_47AC88 <= 0 )
            return 0;
          v32 = (const char *)((int (__fastcall *)(_BYTE *))loc_11E0F8)(a7);
          sub_F43B4(&off_46D334, "invalid form 0x%x in `%s'", v21, v32);
          return 0;
      }
    }
  }
  if ( dword_47AC88 <= 0 )
    return 0;
  sub_F43B4(&off_46D334, "unrecognized DW_MACFINO opcode 0x%x", a1);
  return 0;
}
