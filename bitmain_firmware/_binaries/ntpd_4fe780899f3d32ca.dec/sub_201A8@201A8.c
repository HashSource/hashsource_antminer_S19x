signed int __fastcall sub_201A8(int a1, unsigned __int8 *a2, int a3)
{
  signed int result; // r0
  char *v5; // r6
  char *v6; // r8
  __int16 v7; // r3
  char *v8; // r7
  const char *v9; // r10
  size_t v10; // r2
  char *v11; // r0
  int v12; // r6
  __int16 v13; // r3
  unsigned __int8 *v14; // r1
  int v15; // r2
  bool v16; // zf
  int v17; // r2
  int v18; // r3
  int v19; // t1
  bool v20; // zf
  char *v21; // r3
  _BYTE *v22; // r3
  int v23; // r3
  int v24; // r1
  _BYTE *v25; // r4
  size_t v26; // r0
  size_t v27; // r4
  int v28; // r3
  _DWORD v29[2]; // [sp+0h] [bp-1E4h] BYREF
  char v30[468]; // [sp+8h] [bp-1DCh] BYREF
  _DWORD v31[2]; // [sp+1DCh] [bp-8h] BYREF

  result = a1 - 1;
  switch ( result )
  {
    case 0:
      if ( a3 || (v22 = (_BYTE *)*((_DWORD *)a2 + 8)) == 0 || !*v22 )
        result = (signed int)sub_1FB4C("type", *a2);
      break;
    case 1:
      result = (signed int)sub_1F2C0("timecode", *((_DWORD *)a2 + 2), *((unsigned __int16 *)a2 + 2));
      break;
    case 2:
      result = (signed int)sub_1FB4C("poll", *((_DWORD *)a2 + 3));
      break;
    case 3:
      result = (signed int)sub_1FB4C("noreply", *((_DWORD *)a2 + 4));
      break;
    case 4:
      result = (signed int)sub_1FB4C("badformat", *((_DWORD *)a2 + 5));
      break;
    case 5:
      result = (signed int)sub_1FB4C("baddata", *((_DWORD *)a2 + 6));
      break;
    case 6:
      if ( a3 || (a2[2] & 1) != 0 )
        result = (signed int)sub_200E4("fudgetime1", 1, 3);
      break;
    case 7:
      if ( a3 || (a2[2] & 2) != 0 )
        result = (signed int)sub_200E4("fudgetime2", 1, 3);
      break;
    case 8:
      if ( a3 || (a2[2] & 4) != 0 )
        result = (signed int)sub_1FAA8("stratum", *((_DWORD *)a2 + 14));
      break;
    case 9:
      if ( a3 || (a2[2] & 8) != 0 )
      {
        v23 = *((_DWORD *)a2 + 14);
        v24 = *((_DWORD *)a2 + 15);
        if ( v23 <= 1 )
          result = (signed int)sub_1F20C("refid", v24);
        else
          result = (signed int)sub_1F188("refid", v24, 0);
      }
      break;
    case 10:
      result = (signed int)sub_1FB4C("flags", a2[1]);
      break;
    case 11:
      v25 = (_BYTE *)*((_DWORD *)a2 + 8);
      if ( v25 && *v25 )
      {
        v26 = strlen(*((const char **)a2 + 8));
        result = (signed int)sub_1F2C0("device", (int)v25, v26);
      }
      else if ( a3 )
      {
        result = (signed int)sub_1F2C0("device", (int)byte_97F7C, 0);
      }
      break;
    case 12:
      sub_6C054(v30, 468, "%s=\"", "clock_var_list");
      v5 = (char *)&unk_B3EF0;
      result = strlen(v30);
      v6 = &v30[result];
      LOBYTE(v7) = 1;
      v8 = &v30[result];
      while ( 1 )
      {
        v5 += 8;
        if ( (v7 & 0x80) != 0 )
          break;
        if ( (v7 & 0x40) == 0 )
        {
          v9 = (const char *)*((_DWORD *)v5 + 1);
          result = strlen(v9);
          v10 = result;
          if ( v31 <= (_DWORD *)&v8[result + 1] )
            break;
          if ( v8 == v6 )
          {
            v11 = v6;
          }
          else
          {
            v11 = v8 + 1;
            *v8 = 44;
          }
          v8 = &v11[v10];
          result = (signed int)memcpy(v11, v9, v10);
        }
        v7 = *((_WORD *)v5 + 5);
      }
      v12 = *((_DWORD *)a2 + 17);
      if ( v12 )
      {
        v13 = *(_WORD *)(v12 + 2);
        if ( (v13 & 0x80) == 0 )
        {
          while ( 1 )
          {
            if ( (v13 & 0x40) == 0 )
            {
              v14 = *(unsigned __int8 **)(v12 + 4);
              if ( v14 )
              {
                v15 = *v14;
                v16 = v15 == 61;
                if ( v15 != 61 )
                  v16 = v15 == 0;
                if ( v16 )
                {
                  v27 = 0;
                  v28 = 1;
                }
                else
                {
                  v17 = *(_DWORD *)(v12 + 4);
                  do
                  {
                    v19 = *(unsigned __int8 *)++v17;
                    v18 = v19;
                    v20 = v19 == 0;
                    if ( v19 )
                      v20 = v18 == 61;
                  }
                  while ( !v20 );
                  v27 = v17 - (_DWORD)v14;
                  v28 = v17 - (_DWORD)v14 + 1;
                }
                if ( v31 <= (_DWORD *)&v8[v28] )
                  break;
                if ( v6 == v8 )
                  v21 = v6;
                else
                  v21 = (char *)&word_2C;
                if ( v6 != v8 )
                {
                  *v8 = (char)v21;
                  v21 = v8 + 1;
                  v14 = *(unsigned __int8 **)(v12 + 4);
                }
                v8 = &v21[v27];
                result = (signed int)memcpy(v21, v14, v27);
                *(_BYTE *)(result + v27) = 0;
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
      if ( v31 > (_DWORD *)(v8 + 2) )
      {
        *v8 = 34;
        v8[1] = 0;
        v29[0] = v30;
        v29[1] = v8 + 1 - v30;
        result = (signed int)sub_1EEC8((char *)v29, 1, 0);
      }
      break;
    default:
      return result;
  }
  return result;
}
