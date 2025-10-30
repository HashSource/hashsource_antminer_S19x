int __fastcall sub_288D40(_BYTE *a1, _BYTE *a2, _DWORD *a3)
{
  int v4; // r1
  int v6; // r4
  int v7; // r8
  int v8; // r9
  _BYTE *v9; // r5
  const char *v10; // r0
  int v11; // r6
  bool v12; // zf
  int v13; // r7
  char v14; // r3
  int v16; // r6
  const unsigned __int16 **v17; // r0
  int v18; // r5
  int v19; // r3
  const unsigned __int16 **v20; // r0
  _BYTE *v21; // r3
  int v22; // r12
  int i; // r1
  int v24; // r2
  int v25; // t1
  int v26; // r8
  unsigned int v27; // r9
  int v28; // r1
  int v29; // r1
  unsigned __int8 v30; // r2
  unsigned __int8 v31; // r2
  _BYTE *v32; // r3
  _BYTE *v33; // r3
  int v34; // r6
  int v35; // r3
  int v37; // [sp+10h] [bp-Ch]

  v4 = (unsigned __int8)*a1;
  if ( *a1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = v6 + 1;
      v9 = &a2[v7];
      v10 = &a1[v6 + 1];
      if ( v4 == 92 )
      {
        v11 = (unsigned __int8)a1[v8];
        if ( !a1[v8] )
          goto LABEL_14;
        v12 = v11 == 77;
        if ( v11 != 77 )
          v12 = v11 == 67;
        v13 = v7 + 1;
        if ( v12 && v10[1] == 45 )
        {
          if ( !strncmp(v10, "C-\\M-", 5u) )
          {
            *v9 = 27;
            v17 = _ctype_b_loc();
            v18 = (unsigned __int8)a1[v6 + 6];
            if ( ((*v17)[v18] & 0x200) != 0 )
              v19 = (*_ctype_toupper_loc())[v18] & 0x1F;
            else
              LOBYTE(v19) = a1[v6 + 6] & 0x1F;
            a2[v13] = v19;
            v7 += 2;
            if ( a1[v6 + 6] )
              v6 += 7;
            else
              v6 += 6;
            v10 = &a1[v6];
          }
          else if ( v11 == 77 )
          {
            if ( dword_46DED8 && *((_BYTE *)off_46DED0 + 216) == 1 )
            {
              v6 += 3;
              ++v7;
              v10 = &a1[v6];
              *v9 = 27;
            }
            else
            {
              v32 = &a1[v6 + 2];
              if ( v32[1] == 92 && v32[2] == 67 && v32[3] == 45 )
              {
                v34 = (unsigned __int8)a1[v6 + 6];
                if ( v34 == 63 )
                {
                  LOBYTE(v35) = -1;
                }
                else if ( ((*_ctype_b_loc())[(__int16)v34] & 0x200) != 0 )
                {
                  v35 = (*_ctype_toupper_loc())[(__int16)v34] & 0x1F | 0x80;
                }
                else
                {
                  LOBYTE(v35) = v34 & 0x1F | 0x80;
                }
                v6 += 7;
                *v9 = v35;
                ++v7;
                v10 = &a1[v6];
              }
              else
              {
                v33 = &a1[v6];
                v6 += 4;
                ++v7;
                v10 = &a1[v6];
                *v9 = ~((unsigned int)~((unsigned __int8)v33[3] << 25) >> 25);
              }
            }
          }
          else
          {
            v16 = (unsigned __int8)a1[v6 + 3];
            if ( v16 == 63 )
            {
              LOBYTE(v16) = 127;
            }
            else if ( ((*_ctype_b_loc())[(__int16)v16] & 0x200) != 0 )
            {
              v16 = (*_ctype_toupper_loc())[(__int16)v16] & 0x1F;
            }
            else
            {
              LOBYTE(v16) = v16 & 0x1F;
            }
            v6 += 4;
            *v9 = v16;
            ++v7;
            v10 = &a1[v6];
          }
        }
        else
        {
          v14 = v11 - 48;
          switch ( a1[v8] )
          {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
              v29 = v6 + 2;
              v30 = a1[v6 + 2] - 48;
              if ( v30 > 7u || (v29 = v6 + 3, v14 = v30 + 8 * v14, v31 = a1[v6 + 3] - 48, v31 > 7u) )
              {
                v6 = v29;
              }
              else
              {
                v14 = v31 + 8 * v14;
                v6 += 4;
              }
              *v9 = v14;
              ++v7;
              v10 = &a1[v6];
              break;
            case '\\':
              v6 += 2;
              *v9 = 92;
              ++v7;
              v10 = &a1[v6];
              break;
            case 'a':
              v6 += 2;
              ++v7;
              v10 = &a1[v6];
              *v9 = 7;
              break;
            case 'b':
              v6 += 2;
              ++v7;
              v10 = &a1[v6];
              *v9 = 8;
              break;
            case 'd':
              v6 += 2;
              ++v7;
              v10 = &a1[v6];
              *v9 = 127;
              break;
            case 'e':
              v6 += 2;
              ++v7;
              v10 = &a1[v6];
              *v9 = 27;
              break;
            case 'f':
              v6 += 2;
              ++v7;
              v10 = &a1[v6];
              *v9 = 12;
              break;
            case 'n':
              v6 += 2;
              *v9 = 10;
              ++v7;
              v10 = &a1[v6];
              break;
            case 'r':
              v6 += 2;
              *v9 = 13;
              ++v7;
              v10 = &a1[v6];
              break;
            case 't':
              v6 += 2;
              *v9 = 9;
              ++v7;
              v10 = &a1[v6];
              break;
            case 'v':
              v6 += 2;
              *v9 = 11;
              ++v7;
              v10 = &a1[v6];
              break;
            case 'x':
              v20 = _ctype_b_loc();
              v37 = v6 + 4;
              v21 = &a1[v8];
              v22 = 2;
              for ( i = 0; ; i = v28 + v26 )
              {
                v25 = (unsigned __int8)*++v21;
                v24 = v25;
                v26 = 16 * i;
                v27 = v25 - 97;
                v6 = v37 - v22;
                if ( ((*v20)[v25] & 0x1000) == 0 )
                  break;
                if ( !v22 )
                  goto LABEL_53;
                v28 = v24 - 87;
                if ( v27 > 5 )
                {
                  v28 = v24 - 48;
                  if ( (unsigned int)(v24 - 65) <= 5 )
                    v28 = v24 - 55;
                }
                --v22;
              }
              if ( v22 == 2 )
                goto LABEL_54;
LABEL_53:
              LOBYTE(v11) = i;
LABEL_54:
              *v9 = v11;
              v10 = &a1[v37 - v22];
              v7 = v13;
              break;
            default:
              v6 += 2;
              *v9 = v11;
              ++v7;
              v10 = &a1[v6];
              break;
          }
        }
      }
      else
      {
        ++v7;
        ++v6;
        *v9 = v4;
      }
      v4 = *(unsigned __int8 *)v10;
    }
    while ( *v10 );
    v9 = &a2[v7];
  }
  else
  {
    v9 = a2;
    v7 = 0;
  }
LABEL_14:
  *a3 = v7;
  *v9 = 0;
  return 0;
}
