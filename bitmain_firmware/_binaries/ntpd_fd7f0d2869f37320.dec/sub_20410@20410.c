signed int __fastcall sub_20410(int a1, unsigned __int8 *a2, int a3)
{
  signed int result; // r0
  char *v5; // r6
  char *v6; // r8
  char *v7; // r5
  __int16 v8; // r3
  const char *v9; // r11
  size_t v10; // r2
  char *v11; // r0
  int v12; // r6
  __int16 v13; // r3
  char v14; // r10
  unsigned __int8 *v15; // r1
  int v16; // r2
  bool v17; // zf
  int v18; // r2
  int v19; // r3
  int v20; // t1
  bool v21; // zf
  char *v22; // r3
  _BYTE *v23; // r3
  int v24; // r3
  int v25; // r1
  _BYTE *v26; // r4
  size_t v27; // r0
  size_t v28; // r4
  int v29; // r3
  _DWORD v30[2]; // [sp+8h] [bp-1E4h] BYREF
  char v31[468]; // [sp+10h] [bp-1DCh] BYREF
  _DWORD v32[2]; // [sp+1E4h] [bp-8h] BYREF

  result = a1 - 1;
  switch ( result )
  {
    case 0:
      if ( a3 || (v23 = (_BYTE *)*((_DWORD *)a2 + 8)) == 0 || !*v23 )
        result = (signed int)sub_1FDB0("type", *a2);
      break;
    case 1:
      result = (signed int)sub_1F528("timecode", *((_DWORD *)a2 + 2), *((unsigned __int16 *)a2 + 2));
      break;
    case 2:
      result = (signed int)sub_1FDB0("poll", *((_DWORD *)a2 + 3));
      break;
    case 3:
      result = (signed int)sub_1FDB0("noreply", *((_DWORD *)a2 + 4));
      break;
    case 4:
      result = (signed int)sub_1FDB0("badformat", *((_DWORD *)a2 + 5));
      break;
    case 5:
      result = (signed int)sub_1FDB0("baddata", *((_DWORD *)a2 + 6));
      break;
    case 6:
      if ( a3 || (a2[2] & 1) != 0 )
        result = (signed int)sub_2034C("fudgetime1", 1, 3);
      break;
    case 7:
      if ( a3 || (a2[2] & 2) != 0 )
        result = (signed int)sub_2034C("fudgetime2", 1, 3);
      break;
    case 8:
      if ( a3 || (a2[2] & 4) != 0 )
        result = (signed int)sub_1FD0C("stratum", *((_DWORD *)a2 + 14));
      break;
    case 9:
      if ( a3 || (a2[2] & 8) != 0 )
      {
        v24 = *((_DWORD *)a2 + 14);
        v25 = *((_DWORD *)a2 + 15);
        if ( v24 <= 1 )
          result = (signed int)sub_1F474("refid", v25);
        else
          result = (signed int)sub_1F3F0("refid", v25, 0);
      }
      break;
    case 10:
      result = (signed int)sub_1FDB0("flags", a2[1]);
      break;
    case 11:
      v26 = (_BYTE *)*((_DWORD *)a2 + 8);
      if ( v26 && *v26 )
      {
        v27 = strlen(*((const char **)a2 + 8));
        result = (signed int)sub_1F528("device", (int)v26, v27);
      }
      else if ( a3 )
      {
        result = (signed int)sub_1F528("device", (int)byte_99528, 0);
      }
      break;
    case 12:
      sub_6D00C(v31, 468, "%s=\"", "clock_var_list");
      result = strlen(v31);
      v5 = (char *)&unk_B4EF0;
      v6 = &v31[result];
      v7 = &v31[result];
      while ( 1 )
      {
        v5 += 8;
        v8 = *((_WORD *)v5 + 1);
        if ( (v8 & 0x80) != 0 )
          break;
        while ( (v8 & 0x40) == 0 )
        {
          v9 = (const char *)*((_DWORD *)v5 + 1);
          result = strlen(v9);
          v10 = result;
          if ( v32 > (_DWORD *)&v7[result + 1] )
          {
            v5 += 8;
            if ( v7 == v6 )
            {
              v11 = v6;
            }
            else
            {
              *v7 = 44;
              v11 = v7 + 1;
            }
            v7 = &v11[v10];
            result = (signed int)memcpy(v11, v9, v10);
            v8 = *((_WORD *)v5 + 1);
            if ( (v8 & 0x80) == 0 )
              continue;
          }
          goto LABEL_10;
        }
      }
LABEL_10:
      v12 = *((_DWORD *)a2 + 17);
      if ( v12 )
      {
        v13 = *(_WORD *)(v12 + 2);
        v14 = v13 & 0x80;
        if ( (v13 & 0x80) == 0 )
        {
          while ( 1 )
          {
            if ( (v13 & 0x40) == 0 )
            {
              v15 = *(unsigned __int8 **)(v12 + 4);
              if ( v15 )
              {
                v16 = *v15;
                v17 = v16 == 61;
                if ( v16 != 61 )
                  v17 = v16 == 0;
                if ( v17 )
                {
                  v28 = 0;
                  v29 = 1;
                }
                else
                {
                  v18 = *(_DWORD *)(v12 + 4);
                  do
                  {
                    v20 = *(unsigned __int8 *)++v18;
                    v19 = v20;
                    v21 = v20 == 61;
                    if ( v20 != 61 )
                      v21 = v19 == 0;
                  }
                  while ( !v21 );
                  v28 = v18 - (_DWORD)v15;
                  v29 = v18 - (_DWORD)v15 + 1;
                }
                if ( v32 <= (_DWORD *)&v7[v29] )
                  break;
                if ( v7 == v6 )
                {
                  v22 = v6;
                }
                else
                {
                  v22 = v7 + 1;
                  *v7 = 44;
                }
                if ( v7 != v6 )
                  v15 = *(unsigned __int8 **)(v12 + 4);
                v7 = &v22[v28];
                result = (signed int)memcpy(v22, v15, v28);
                *(_BYTE *)(result + v28) = v14;
              }
            }
            v12 += 8;
            if ( v12 )
            {
              v13 = *(_WORD *)(v12 + 2);
              if ( (v13 & 0x80) == 0 )
                continue;
            }
            break;
          }
        }
      }
      if ( v32 > (_DWORD *)(v7 + 2) )
      {
        *v7 = 34;
        v7[1] = 0;
        v30[0] = v31;
        v30[1] = v7 + 1 - v31;
        result = (signed int)sub_1F104((char *)v30, 1, 0);
      }
      break;
    default:
      return result;
  }
  return result;
}
