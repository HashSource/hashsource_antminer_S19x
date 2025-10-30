unsigned __int8 *__fastcall sub_31F1C8(unsigned int a1, _BYTE *a2, char *a3, int a4)
{
  _BYTE *v4; // r4
  char v5; // r1
  unsigned __int8 *v7; // r4
  unsigned __int8 *v9; // r0
  unsigned __int8 *v10; // r4
  unsigned __int8 *v11; // r0
  int j; // r12
  int v13; // r12
  char *v14; // r4
  unsigned __int8 *v15; // r10
  bool v16; // zf
  int v17; // r3
  unsigned __int16 v18; // r0
  int v19; // r2
  unsigned __int16 v20; // r1
  char v21; // r3
  char v22; // r3
  char v23; // r0
  char v24; // r3
  char v25; // r2
  char v26; // r1
  int i; // r12
  int v28; // r4
  char *sa; // [sp+4h] [bp-Ch]
  char v31; // [sp+Ah] [bp-6h] BYREF
  unsigned __int8 v32; // [sp+Bh] [bp-5h] BYREF
  int v33; // [sp+Ch] [bp-4h] BYREF

  v4 = a2;
  if ( a2 )
  {
    v5 = *a2;
    if ( *v4 )
    {
      switch ( *v4 )
      {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          return sub_31EEA8(__SPAIR64__((unsigned int)v4, a1), a4);
        case 'A':
          v11 = v4 + 1;
          if ( a4 == 72 )
          {
            if ( v4 != (_BYTE *)-1 && (word_438898[(unsigned __int8)v4[1]] & 4) != 0 )
            {
              v33 = 0;
              v7 = sub_31EE34(v11, &v33);
              if ( v7 )
              {
                sub_31E858(a1, "[");
                for ( i = v33; ; i = v33 )
                {
                  v33 = i - 1;
                  if ( !i )
                    goto LABEL_21;
                  v28 = sub_31F1C8(a1, v7, 0);
                  sub_31E858(a1, ":");
                  v7 = (unsigned __int8 *)sub_31F1C8(a1, v28, 0);
                  if ( !v33 )
                    break;
                  sub_31E858(a1, ", ");
                }
LABEL_20:
                v33 = -1;
LABEL_21:
                sub_31E858(a1, (char *)&word_419FC8);
                return v7;
              }
            }
          }
          else if ( v4 != (_BYTE *)-1 && (word_438898[(unsigned __int8)v4[1]] & 4) != 0 )
          {
            v33 = 0;
            v7 = sub_31EE34(v11, &v33);
            if ( v7 )
            {
              sub_31E858(a1, "[");
              for ( j = v33; ; j = v33 )
              {
                v33 = j - 1;
                if ( !j )
                  break;
                v7 = (unsigned __int8 *)sub_31F1C8(a1, v7, 0);
                if ( !v33 )
                  goto LABEL_20;
                sub_31E858(a1, ", ");
              }
              goto LABEL_21;
            }
          }
          break;
        case 'N':
          sa = (char *)a4;
          ++v4;
          sub_31E858(a1, (char *)&word_3C1464);
          a4 = (int)sa;
          return sub_31EEA8(__SPAIR64__((unsigned int)v4, a1), a4);
        case 'S':
          if ( v4 == (_BYTE *)-1 )
            return 0;
          if ( (word_438898[(unsigned __int8)v4[1]] & 4) == 0 )
            return 0;
          v33 = 0;
          v7 = sub_31EE34(v4 + 1, &v33);
          if ( !v7 )
            return 0;
          if ( a3 )
            sub_31E858(a1, a3);
          sub_31E858(a1, "(");
          v13 = v33;
          while ( 2 )
          {
            v33 = v13 - 1;
            if ( v13 )
            {
              v7 = (unsigned __int8 *)sub_31F1C8(a1, v7, 0);
              if ( v33 )
              {
                sub_31E858(a1, ", ");
                v13 = v33;
                continue;
              }
              v33 = -1;
            }
            break;
          }
          sub_31E858(a1, ")");
          return v7;
        case 'a':
        case 'd':
        case 'w':
          v31 = v5;
          if ( v4 == (_BYTE *)-1 )
            return 0;
          if ( (word_438898[(unsigned __int8)v4[1]] & 4) == 0 )
            return 0;
          v33 = 0;
          v9 = sub_31EE34(v4 + 1, &v33);
          v10 = v9;
          if ( !v9 || *v9 != 95 )
            return 0;
          v15 = v9 + 1;
          sub_31E858(a1, "\"");
          v16 = v33-- == 0;
          if ( v16 )
          {
            v7 = v10 + 1;
          }
          else
          {
            if ( v10 == (unsigned __int8 *)-1 )
              return 0;
            v17 = v10[1];
            v18 = word_438898[v17];
            if ( (v18 & 0x100) == 0 )
              return 0;
            v19 = v10[2];
            v20 = word_438898[v19];
            if ( (v20 & 0x100) == 0 )
              return 0;
            while ( 1 )
            {
              if ( (v18 & 4) != 0 )
              {
                v21 = v17 - 48;
              }
              else
              {
                v22 = v17 + 10;
                if ( (v18 & 0x80) != 0 )
                  v23 = 65;
                else
                  v23 = 97;
                v21 = v22 - v23;
              }
              v24 = 16 * v21;
              if ( (v20 & 4) != 0 )
              {
                v32 = v24 | (v19 - 48);
              }
              else
              {
                v25 = v19 + 10;
                if ( (v20 & 0x80) != 0 )
                  v26 = 65;
                else
                  v26 = 97;
                v32 = v24 | (v25 - v26);
              }
              v7 = v15 + 2;
              if ( v15 == (unsigned __int8 *)-2 )
                return 0;
              switch ( v32 )
              {
                case 9u:
                  sub_31E858(a1, "\\t");
                  break;
                case 0xAu:
                  sub_31E858(a1, "\\n");
                  break;
                case 0xBu:
                  sub_31E858(a1, "\\v");
                  break;
                case 0xCu:
                  sub_31E858(a1, "\\f");
                  break;
                case 0xDu:
                  sub_31E858(a1, "\\r");
                  break;
                case 0x20u:
                  sub_31E858(a1, (char *)&word_3E1F84);
                  break;
                default:
                  if ( (word_438898[v32] & 0x10) != 0 )
                  {
                    sub_31EC14(__SPAIR64__(&v32, a1), 1u);
                  }
                  else
                  {
                    sub_31E858(a1, "\\x");
                    sub_31EC14(__SPAIR64__((unsigned int)v15, a1), 2u);
                  }
                  break;
              }
              v16 = v33-- == 0;
              if ( v16 )
                break;
              v17 = *v7;
              v18 = word_438898[v17];
              if ( (v18 & 0x100) != 0 )
              {
                v19 = v15[3];
                v15 += 2;
                v20 = word_438898[v19];
                if ( (v20 & 0x100) != 0 )
                  continue;
              }
              return 0;
            }
          }
          sub_31E858(a1, "\"");
          if ( v31 != 97 )
            sub_31EC14(__SPAIR64__(&v31, a1), 1u);
          return v7;
        case 'c':
          v14 = sub_31EC4C(a1, v4 + 1);
          sub_31E858(a1, "+");
          if ( !v14 || *v14 != 99 )
            return 0;
          v7 = (unsigned __int8 *)sub_31EC4C(a1, v14 + 1);
          sub_31E858(a1, "i");
          return v7;
        case 'e':
          return (unsigned __int8 *)sub_31EC4C(a1, v4 + 1);
        case 'i':
          return sub_31EEA8(__SPAIR64__((unsigned int)++v4, a1), a4);
        case 'n':
          v7 = v4 + 1;
          sub_31E858(a1, "null");
          return v7;
        default:
          return 0;
      }
    }
  }
  return 0;
}
