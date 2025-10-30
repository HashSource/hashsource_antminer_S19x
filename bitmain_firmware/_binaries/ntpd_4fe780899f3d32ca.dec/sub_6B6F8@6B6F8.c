unsigned int __fastcall sub_6B6F8(int a1, unsigned int a2, unsigned __int8 *a3, int *a4)
{
  int v4; // lr
  unsigned int v6; // r7
  int v7; // lr
  unsigned int v8; // r6
  int v10; // r12
  int v11; // r3
  int v12; // r8
  unsigned __int8 *v13; // r4
  __int64 v14; // r0
  unsigned int v15; // r9
  int v16; // r3
  unsigned int v17; // r0
  int v18; // r4
  int v19; // r3
  unsigned int v21; // r9
  int v22; // lr
  bool v23; // zf
  bool v24; // zf
  int v25; // r3
  unsigned int v26; // r5
  int v27; // r3
  unsigned int v28; // r2
  int v29; // r0
  __int64 v30; // r8
  __int64 *v31; // r2
  int v32; // r3
  int v33; // r3
  int v34; // t1
  const char *v35; // r3
  int v36; // r2
  unsigned int v37; // r2
  bool v38; // cf
  __int64 v39; // r8
  __int64 *v40; // r3
  int *v41; // r0
  __int64 v42; // [sp+0h] [bp-34h]
  unsigned int v43; // [sp+24h] [bp-10h] BYREF
  int v44; // [sp+28h] [bp-Ch] BYREF

  v4 = a2;
  if ( a2 )
    v4 = 1;
  if ( a1 )
    v4 = 0;
  LOWORD(v6) = -13107;
  v23 = v4 == 0;
  v7 = 0;
  if ( v23 )
    v8 = a2;
  else
    v8 = 0;
  v43 = 0;
  v10 = 0;
  v11 = *a3;
  v44 = 0;
  v12 = 0;
  HIWORD(v6) = -13108;
  v13 = a3 + 1;
  v14 = 0xFFFFFFFFLL;
  while ( v11 )
  {
LABEL_10:
    switch ( v7 )
    {
      case 1:
        switch ( v11 )
        {
          case ' ':
            v11 = *v13;
            HIDWORD(v14) |= 4u;
            ++v13;
            continue;
          case '#':
            v11 = *v13;
            HIDWORD(v14) |= 8u;
            ++v13;
            continue;
          case '\'':
            v11 = *v13;
            HIDWORD(v14) |= 0x20u;
            ++v13;
            continue;
          case '+':
            v11 = *v13;
            HIDWORD(v14) |= 2u;
            ++v13;
            continue;
          case '-':
            HIDWORD(v14) |= 1u;
            goto LABEL_16;
          case '0':
            v11 = *v13;
            HIDWORD(v14) |= 0x10u;
            ++v13;
            continue;
          default:
            v7 = 2;
            continue;
        }
      case 2:
        v21 = (unsigned __int8)(v11 - 48);
        if ( v21 > 9 )
        {
          if ( v11 == 42 )
          {
            v10 = *a4;
            v7 = 3;
            v11 = *v13;
            ++a4;
            ++v13;
            if ( v10 < 0 )
            {
              HIDWORD(v14) |= 1u;
              v10 = -v10;
            }
          }
          else
          {
            v7 = 3;
          }
          continue;
        }
        if ( v10 <= (int)((unsigned int)(((0x7FFFFFFF - v21) * (unsigned __int64)v6) >> 32) >> 3) )
        {
          v11 = *v13++;
          v10 = v21 + 10 * v10;
          continue;
        }
LABEL_114:
        v16 = 1;
        v44 = 1;
        goto LABEL_18;
      case 3:
        if ( v11 != 46 )
          goto LABEL_28;
        v11 = *v13;
        v7 = 4;
        ++v13;
        continue;
      case 4:
        v15 = (unsigned __int8)(v11 - 48);
        if ( (_DWORD)v14 != -1 )
        {
          if ( v15 > 9 )
            goto LABEL_80;
          if ( (int)v14 > (int)((unsigned int)(((0x7FFFFFFF - v15) * (unsigned __int64)v6) >> 32) >> 3) )
            goto LABEL_114;
          LODWORD(v14) = v15 + 10 * v14;
LABEL_16:
          v11 = *v13++;
          if ( !v11 )
            goto LABEL_17;
          goto LABEL_10;
        }
        if ( v15 <= 9 )
        {
          LODWORD(v14) = (unsigned __int8)(v11 - 48);
          goto LABEL_16;
        }
        LODWORD(v14) = 0;
LABEL_80:
        if ( v11 == 42 )
        {
          v29 = *a4;
          v7 = 5;
          v11 = *v13;
          ++a4;
          ++v13;
          LODWORD(v14) = v29 | (v29 >> 31);
        }
        else
        {
LABEL_28:
          v7 = 5;
        }
        break;
      case 5:
        switch ( v11 )
        {
          case 'L':
            v12 = v7;
            v11 = *v13;
            v7 = 6;
            ++v13;
            break;
          case 'h':
            v11 = *v13;
            v24 = v11 == 104;
            if ( v11 == 104 )
            {
              v11 = v13[1];
            }
            else
            {
              ++v13;
              v7 = 6;
              v12 = 2;
            }
            if ( v24 )
            {
              v7 = 6;
              v13 += 2;
              v12 = 1;
            }
            break;
          case 'j':
            v11 = *v13;
            v7 = 6;
            ++v13;
            v12 = 8;
            break;
          case 'l':
            v11 = *v13;
            v23 = v11 == 108;
            if ( v11 == 108 )
            {
              v11 = v13[1];
            }
            else
            {
              ++v13;
              v7 = 6;
              v12 = 3;
            }
            if ( v23 )
            {
              v7 = 6;
              v13 += 2;
              v12 = 4;
            }
            break;
          case 't':
            v11 = *v13;
            v7 = 6;
            ++v13;
            v12 = 7;
            break;
          case 'z':
            v7 = 6;
            v11 = *v13;
            v12 = 6;
            ++v13;
            break;
          default:
            v7 = 6;
            break;
        }
        continue;
      case 6:
        switch ( v11 )
        {
          case '%':
            v36 = v43++;
            if ( v43 < v8 )
              *(_BYTE *)(a1 + v36) = 37;
            break;
          case 'A':
          case 'F':
            HIDWORD(v14) |= 0x40u;
            goto LABEL_74;
          case 'E':
            HIDWORD(v14) |= 0x40u;
            goto LABEL_72;
          case 'G':
            HIDWORD(v14) |= 0x40u;
            goto LABEL_65;
          case 'X':
            HIDWORD(v14) |= 0x40u;
            goto LABEL_62;
          case 'a':
          case 'f':
LABEL_74:
            v27 = v10;
            v26 = ((unsigned int)a4 + 7) & 0xFFFFFFF8;
            v28 = v8;
            v42 = v14;
            HIDWORD(v14) = &v43;
            goto LABEL_68;
          case 'c':
            v37 = v43;
            v38 = ++v43 >= v8;
            if ( v43 < v8 )
              LODWORD(v14) = *a4;
            ++a4;
            if ( !v38 )
              *(_BYTE *)(a1 + v37) = v14;
            break;
          case 'd':
          case 'i':
            switch ( v12 )
            {
              case 1:
                LODWORD(v39) = *(char *)a4++;
                v39 = (int)v39;
                break;
              case 2:
                LODWORD(v39) = *(__int16 *)a4++;
                v39 = (int)v39;
                break;
              case 4:
              case 8:
                v40 = (__int64 *)(((unsigned int)a4 + 7) & 0xFFFFFFF8);
                a4 = (int *)(v40 + 1);
                v39 = *v40;
                break;
              case 6:
                v39 = (unsigned int)*a4++;
                break;
              default:
                LODWORD(v39) = *a4++;
                v39 = (int)v39;
                break;
            }
            sub_6A6BC(a1, &v43, v8, 10, v39, 10, v10, v14, HIDWORD(v14));
            break;
          case 'e':
LABEL_72:
            v26 = ((unsigned int)a4 + 7) & 0xFFFFFFF8;
            sub_6AB20(COERCE_DOUBLE(__PAIR64__(&v43, a1)), v8, v10, v14, HIDWORD(v14) | 0x200, &v44);
            goto LABEL_69;
          case 'g':
LABEL_65:
            v26 = ((unsigned int)a4 + 7) & 0xFFFFFFF8;
            v27 = v10;
            HIDWORD(v42) = HIDWORD(v14) | 0x100;
            v28 = v8;
            HIDWORD(v14) = &v43;
            if ( !(_DWORD)v14 )
              LODWORD(v14) = 1;
            LODWORD(v42) = v14;
LABEL_68:
            LODWORD(v14) = a1;
            sub_6AB20(*(double *)&v14, v28, v27, v42, HIDWORD(v42), &v44);
LABEL_69:
            v16 = v44;
            a4 = (int *)(v26 + 8);
            if ( !v44 )
              break;
            goto LABEL_18;
          case 'n':
            v34 = *a4++;
            v33 = v34;
            switch ( v12 )
            {
              case 1:
                *(_BYTE *)v33 = v43;
                break;
              case 2:
                *(_WORD *)v33 = v43;
                break;
              case 4:
              case 8:
                *(_DWORD *)v33 = v43;
                *(_DWORD *)(v33 + 4) = 0;
                break;
              default:
                *(_DWORD *)v33 = v43;
                break;
            }
            break;
          case 'o':
            v25 = 8;
            goto LABEL_63;
          case 'p':
            v32 = *a4++;
            if ( v32 )
              sub_6A6BC(a1, &v43, v8, v32, (unsigned int)v32, 16, v10, v14, HIDWORD(v14) | 0x88);
            else
              sub_6A520(a1, (int *)&v43, v8, "(nil)", v10, -1, SBYTE4(v14));
            break;
          case 's':
            v35 = (const char *)*a4++;
            sub_6A520(a1, (int *)&v43, v8, v35, v10, v14, SBYTE4(v14));
            break;
          case 'u':
            v25 = 10;
            goto LABEL_63;
          case 'x':
LABEL_62:
            v25 = 16;
LABEL_63:
            HIDWORD(v14) |= 0x80u;
            switch ( v12 )
            {
              case 1:
                v30 = *(unsigned __int8 *)a4++;
                break;
              case 2:
                v30 = *(unsigned __int16 *)a4++;
                break;
              case 4:
              case 8:
                v31 = (__int64 *)(((unsigned int)a4 + 7) & 0xFFFFFFF8);
                a4 = (int *)(v31 + 1);
                v30 = *v31;
                break;
              case 7:
                LODWORD(v30) = *a4++;
                v30 = (int)v30;
                break;
              default:
                v30 = (unsigned int)*a4++;
                break;
            }
            sub_6A6BC(a1, &v43, v8, v25, v30, v25, v10, v14, HIDWORD(v14));
            break;
          default:
            break;
        }
        v7 = 0;
        v11 = *v13;
        v10 = 0;
        v12 = 0;
        ++v13;
        v14 = 0xFFFFFFFFLL;
        continue;
      default:
        if ( v11 == 37 )
        {
          v7 = 1;
        }
        else
        {
          v22 = v43++;
          if ( v43 < v8 )
            *(_BYTE *)(a1 + v22) = v11;
          v7 = 0;
        }
        goto LABEL_16;
    }
  }
LABEL_17:
  v16 = v44;
LABEL_18:
  v17 = v43;
  if ( v43 >= v8 )
  {
    if ( v8 )
      *(_BYTE *)(a1 + v8 - 1) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + v43) = 0;
  }
  if ( v16 )
  {
    v18 = 75;
    goto LABEL_122;
  }
  if ( v17 > 0x7FFFFFFE )
  {
    v18 = 34;
LABEL_122:
    v41 = _errno_location();
    v19 = -1;
    *v41 = v18;
    return v19;
  }
  return v17;
}
