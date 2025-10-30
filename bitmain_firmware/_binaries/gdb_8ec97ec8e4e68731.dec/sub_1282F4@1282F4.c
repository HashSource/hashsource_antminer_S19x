char *__fastcall sub_1282F4(int a1, char *s, int a3)
{
  int v3; // r6
  int v6; // r11
  unsigned int i; // r4
  int v8; // r2
  int v9; // r8
  int v10; // r3
  int v11; // r1
  unsigned int v12; // r2
  bool v13; // cc
  char v14; // t1
  int v15; // r3
  int v16; // r0
  char v17; // t1
  unsigned int v18; // r8
  int v20; // r0
  unsigned int v21; // r0
  int v22; // r3
  char *v23; // r8
  int v24; // r2
  int v25; // r1
  int v26; // lr
  char v27; // t1
  unsigned int v28; // r6
  int v29; // r0
  const char *v30; // r1
  __int64 v31; // [sp+0h] [bp-44h]
  const char **v32; // [sp+10h] [bp-34h]
  int v33; // [sp+14h] [bp-30h]
  char *v34; // [sp+1Ch] [bp-28h]
  int v35; // [sp+28h] [bp-1Ch]
  _WORD v36[8]; // [sp+30h] [bp-14h] BYREF

  v3 = a3;
  v32 = *(const char ***)a1;
  v6 = *(_DWORD *)(a1 + 4);
  v33 = *(_DWORD *)(a1 + 16);
  v34 = *(char **)(a1 + 20);
  if ( *(_WORD *)(a3 + 10) )
  {
    for ( i = 0; *(unsigned __int16 *)(v3 + 10) > i; ++i )
    {
LABEL_12:
      v8 = *(_DWORD *)(v3 + 12);
      v9 = 16 * i;
      v10 = *(unsigned __int16 *)(v8 + 16 * i);
      v11 = v8 + 16 * i;
      v12 = *(unsigned __int16 *)(v11 + 2);
      if ( v10 != 1 )
        goto LABEL_13;
      v31 = *(_QWORD *)(v11 + 8);
      v36[0] = 1;
      sub_12735C((const char ***)a1, (int)v36, v12, 1, v31, s);
      if ( (v36[1] & 0x7FFF) == 0x10 )
      {
        if ( dword_47AC88 <= 0 )
          goto LABEL_38;
        sub_F43B4(&off_46D334, "ignoring absolute DW_AT_sibling");
        v12 = *(unsigned __int16 *)(*(_DWORD *)(v3 + 12) + v9 + 2);
      }
      else
      {
        v21 = v33 + sub_11CF18((int)v36);
        if ( v21 >= (unsigned int)s )
        {
          if ( *(_DWORD *)(a1 + 20) >= v21 )
            return (char *)v21;
          if ( dword_47AC88 > 0 )
            sub_121F08(*(_BYTE **)(a1 + 12));
LABEL_38:
          v12 = *(unsigned __int16 *)(*(_DWORD *)(v3 + 12) + v9 + 2);
          goto LABEL_13;
        }
        if ( dword_47AC88 <= 0 )
          goto LABEL_38;
        sub_F43B4(&off_46D334, "DW_AT_sibling points backwards");
        v12 = *(unsigned __int16 *)(*(_DWORD *)(v3 + 12) + v9 + 2);
      }
LABEL_13:
      v13 = v12 > 0x11;
      if ( v12 != 17 )
      {
        while ( v13 )
        {
          if ( v12 == 25 )
            goto LABEL_11;
          if ( v12 > 0x19 )
          {
            if ( v12 > 0x1F02 )
            {
              if ( v12 - 7968 <= 1 )
              {
LABEL_35:
                s += *(_DWORD *)(v6 + 20);
                goto LABEL_11;
              }
            }
            else
            {
              if ( v12 > 0x1F00 )
                goto LABEL_62;
              switch ( v12 )
              {
                case 0x20u:
                  goto LABEL_69;
                case 0x21u:
                  goto LABEL_11;
                case 0x1Eu:
                  s += 16;
                  goto LABEL_11;
              }
            }
LABEL_75:
            v29 = sub_321640(v12);
            v30 = "DW_FORM_<unknown>";
            if ( v29 )
              v30 = (const char *)v29;
            sub_946E0("Dwarf Error: Cannot handle %s in DWARF reader [in module %s]", v30, *v32);
          }
          if ( v12 == 21 )
            goto LABEL_62;
          if ( v12 <= 0x15 )
          {
            if ( v12 == 19 )
              goto LABEL_59;
            if ( v12 <= 0x13 )
            {
LABEL_58:
              s += 2;
              goto LABEL_11;
            }
LABEL_69:
            s += 8;
LABEL_11:
            if ( *(unsigned __int16 *)(v3 + 10) <= ++i )
              goto LABEL_27;
            goto LABEL_12;
          }
          if ( v12 == 23 )
            goto LABEL_35;
          if ( v12 > 0x17 )
            goto LABEL_63;
          v14 = *s++;
          v15 = 0;
          v12 = v14 & 0x7F;
          if ( (v14 & 0x80) == 0 )
            goto LABEL_13;
          v16 = 0;
          do
          {
            v17 = *s++;
            v16 += 7;
            v18 = v17 & 0x7F;
            v12 |= v18 << v16;
            v15 |= (v18 << (v16 - 32)) | (v18 >> (32 - v16));
          }
          while ( v17 < 0 );
          v13 = v12 > 0x11;
          if ( v12 == 17 )
            goto LABEL_26;
        }
        if ( v12 == 9 )
        {
LABEL_63:
          v22 = 0;
          v23 = s + 1;
          v24 = *s & 0x7F;
          if ( *s < 0 )
          {
            v26 = 0;
            v35 = v3;
            do
            {
              v27 = *v23++;
              v26 += 7;
              v28 = v27 & 0x7F;
              v24 |= v28 << v26;
              v22 |= (v28 << (v26 - 32)) | (v28 >> (32 - v26));
            }
            while ( v27 < 0 );
            v25 = v23 - s;
            v3 = v35;
          }
          else
          {
            v25 = 1;
          }
          s += v25 + v24;
          goto LABEL_11;
        }
        if ( v12 <= 9 )
        {
          if ( v12 == 5 )
            goto LABEL_58;
          if ( v12 > 5 )
          {
            if ( v12 == 7 )
              goto LABEL_69;
            if ( v12 <= 7 )
            {
LABEL_59:
              s += 4;
              goto LABEL_11;
            }
            if ( *s )
              v20 = strlen(s) + 1;
            else
              v20 = 1;
          }
          else
          {
            if ( v12 == 3 )
            {
              s += (*((int (__fastcall **)(char *))v32[1] + 13))(s) + 2;
              goto LABEL_11;
            }
            if ( v12 <= 3 )
            {
              if ( v12 == 1 )
                goto LABEL_10;
              goto LABEL_75;
            }
            v20 = (*((int (__fastcall **)(char *))v32[1] + 10))(s) + 4;
          }
          s += v20;
          goto LABEL_11;
        }
        if ( v12 == 13 )
          goto LABEL_62;
        if ( v12 > 0xD )
        {
          if ( v12 != 15 )
          {
            if ( v12 <= 0xF || *(_WORD *)(v6 + 12) != 2 )
              goto LABEL_35;
LABEL_10:
            s += *(unsigned __int8 *)(v6 + 14);
            goto LABEL_11;
          }
LABEL_62:
          s = sub_112718(s, v34);
          goto LABEL_11;
        }
        if ( v12 == 10 )
        {
          s += (unsigned __int8)*s + 1;
          goto LABEL_11;
        }
      }
LABEL_26:
      ++s;
    }
  }
LABEL_27:
  if ( *(_WORD *)(v3 + 8) )
    return (char *)sub_128744(a1, s);
  return s;
}
