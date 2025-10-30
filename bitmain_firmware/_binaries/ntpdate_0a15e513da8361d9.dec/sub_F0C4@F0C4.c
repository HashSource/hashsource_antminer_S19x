unsigned int __fastcall sub_F0C4(int a1, unsigned int a2, unsigned __int8 *a3, int *a4)
{
  unsigned int v4; // r6
  _BOOL4 v5; // r12
  bool v6; // zf
  int v7; // r12
  int v8; // r7
  int v11; // r0
  unsigned int v12; // lr
  int v13; // r8
  int v14; // r3
  unsigned __int8 *v15; // r4
  int v16; // r1
  unsigned int v17; // r9
  int v18; // r3
  unsigned int result; // r0
  unsigned int v20; // r9
  unsigned int v21; // r9
  bool v22; // zf
  bool v23; // zf
  int v24; // r3
  unsigned int v25; // lr
  unsigned int v26; // lr
  int v27; // r1
  __int64 v28; // r8
  __int64 *v29; // r2
  unsigned int v30; // r2
  int v31; // r0
  const char *v32; // r3
  int v33; // r3
  unsigned int v34; // r2
  _DWORD *v35; // r3
  __int64 v36; // r8
  unsigned int *v37; // r3
  unsigned int v38; // r2
  __int64 *v39; // r3
  _WORD *v40; // r3
  _DWORD *v41; // r3
  _BYTE *v42; // r3
  int *v43; // r0
  int v44; // r3
  unsigned int v45; // [sp+24h] [bp-10h] BYREF
  int v46; // [sp+28h] [bp-Ch] BYREF

  v5 = a1 == 0;
  if ( !a2 )
    v5 = 0;
  v6 = !v5;
  if ( !v5 )
    v4 = a2;
  v7 = 0;
  LOWORD(v8) = 26215;
  if ( !v6 )
    v4 = 0;
  v45 = 0;
  v11 = 0;
  v12 = 0;
  v46 = 0;
  v13 = 0;
  v14 = *a3;
  v15 = a3 + 1;
  HIWORD(v8) = 26214;
  v16 = -1;
LABEL_8:
  if ( v14 )
  {
    while ( 1 )
    {
      switch ( v7 )
      {
        case 0:
          if ( v14 == 37 )
          {
            v7 = 1;
          }
          else
          {
            v21 = v45++;
            if ( v45 < v4 )
              *(_BYTE *)(a1 + v21) = v14;
          }
LABEL_34:
          v14 = *v15++;
          goto LABEL_8;
        case 1:
          switch ( v14 )
          {
            case ' ':
              v14 = *v15;
              v12 |= 4u;
              ++v15;
              break;
            case '#':
              v14 = *v15;
              v12 |= 8u;
              ++v15;
              break;
            case '\'':
              v14 = *v15;
              v12 |= 0x20u;
              ++v15;
              break;
            case '+':
              v14 = *v15;
              v12 |= 2u;
              ++v15;
              break;
            case '-':
              v12 |= 1u;
              goto LABEL_34;
            case '0':
              v14 = *v15;
              v12 |= 0x10u;
              ++v15;
              break;
            default:
              v7 = 2;
              break;
          }
          goto LABEL_8;
        case 2:
          v20 = (unsigned __int8)(v14 - 48);
          if ( v20 > 9 )
          {
            if ( v14 == 42 )
            {
              v11 = *a4;
              v7 = 3;
              v14 = *v15;
              ++a4;
              ++v15;
              if ( v11 < 0 )
              {
                v12 |= 1u;
                v11 = -v11;
              }
            }
            else
            {
              v7 = 3;
            }
            goto LABEL_8;
          }
          if ( ((int)((unsigned __int64)((int)(0x7FFFFFFF - v20) * (__int64)v8) >> 32) >> 2)
             - ((int)(0x7FFFFFFF - v20) >> 31) >= v11 )
          {
            v14 = *v15++;
            v11 = v20 + 10 * v11;
            goto LABEL_8;
          }
LABEL_107:
          v18 = 1;
          v46 = 1;
          goto LABEL_18;
        case 3:
          if ( v14 != 46 )
            goto LABEL_26;
          v14 = *v15;
          v7 = 4;
          ++v15;
          goto LABEL_8;
        case 4:
          v17 = (unsigned __int8)(v14 - 48);
          if ( v16 == -1 )
          {
            v16 = 0;
            if ( v17 > 9 )
            {
LABEL_73:
              if ( v14 == 42 )
              {
                v27 = *a4;
                v7 = 5;
                v14 = *v15;
                ++a4;
                ++v15;
                v16 = v27 | (v27 >> 31);
              }
              else
              {
LABEL_26:
                v7 = 5;
              }
              goto LABEL_8;
            }
          }
          else
          {
            if ( v17 > 9 )
              goto LABEL_73;
            if ( ((int)((unsigned __int64)((int)(0x7FFFFFFF - v17) * (__int64)v8) >> 32) >> 2)
               - ((int)(0x7FFFFFFF - v17) >> 31) < v16 )
              goto LABEL_107;
            v16 *= 10;
          }
          v14 = *v15;
          v16 += v17;
          ++v15;
          if ( !v14 )
            goto LABEL_17;
          break;
        case 5:
          switch ( v14 )
          {
            case 'L':
              v14 = *v15;
              v7 = 6;
              ++v15;
              v13 = 5;
              break;
            case 'h':
              v14 = *v15;
              v23 = v14 == 104;
              if ( v14 == 104 )
                v14 = v15[1];
              else
                ++v15;
              v7 = 6;
              if ( v23 )
              {
                v15 += 2;
                v13 = 1;
              }
              else
              {
                v13 = 2;
              }
              break;
            case 'j':
              v14 = *v15;
              v7 = 6;
              ++v15;
              v13 = 8;
              break;
            case 'l':
              v14 = *v15;
              v22 = v14 == 108;
              if ( v14 == 108 )
                v14 = v15[1];
              else
                ++v15;
              v7 = 6;
              if ( v22 )
              {
                v15 += 2;
                v13 = 4;
              }
              else
              {
                v13 = 3;
              }
              break;
            case 't':
              v14 = *v15;
              v7 = 6;
              ++v15;
              v13 = 7;
              break;
            case 'z':
              v7 = 6;
              v14 = *v15;
              v13 = 6;
              ++v15;
              break;
            default:
              v7 = 6;
              break;
          }
          goto LABEL_8;
        case 6:
          switch ( v14 )
          {
            case '%':
              v34 = v45++;
              if ( v45 < v4 )
                *(_BYTE *)(a1 + v34) = 37;
              break;
            case 'A':
            case 'F':
              v12 |= 0x40u;
              goto LABEL_59;
            case 'E':
              v12 |= 0x40u;
              goto LABEL_71;
            case 'G':
              v12 |= 0x40u;
              goto LABEL_67;
            case 'X':
              v12 |= 0x40u;
              goto LABEL_64;
            case 'a':
            case 'f':
LABEL_59:
              a4 = (int *)((((unsigned int)a4 + 7) & 0xFFFFFFF8) + 8);
              goto LABEL_60;
            case 'c':
              v30 = v45;
              v31 = *a4++;
              if ( ++v45 < v4 )
                *(_BYTE *)(a1 + v30) = v31;
              break;
            case 'd':
            case 'i':
              switch ( v13 )
              {
                case 1:
                  LODWORD(v36) = *(char *)a4++;
                  v36 = (int)v36;
                  break;
                case 2:
                  LODWORD(v36) = *(__int16 *)a4++;
                  v36 = (int)v36;
                  break;
                case 4:
                case 8:
                  v39 = (__int64 *)(((unsigned int)a4 + 7) & 0xFFFFFFF8);
                  a4 = (int *)(v39 + 1);
                  v36 = *v39;
                  break;
                case 6:
                  v36 = (unsigned int)*a4++;
                  break;
                default:
                  LODWORD(v36) = *a4++;
                  v36 = (int)v36;
                  break;
              }
              sub_E0AC(a1, &v45, v4, 10, v36, 0xAu, v11, v16, v12);
              break;
            case 'e':
LABEL_71:
              v12 |= 0x200u;
              a4 = (int *)((((unsigned int)a4 + 7) & 0xFFFFFFF8) + 8);
LABEL_60:
              sub_E560(COERCE_DOUBLE(__PAIR64__(&v45, a1)), v4, v11, v16, v12, &v46);
              goto LABEL_61;
            case 'g':
LABEL_67:
              v26 = v12 | 0x100;
              if ( !v16 )
                v16 = 1;
              a4 = (int *)((((unsigned int)a4 + 7) & 0xFFFFFFF8) + 8);
              sub_E560(COERCE_DOUBLE(__PAIR64__(&v45, a1)), v4, v11, v16, v26, &v46);
LABEL_61:
              v18 = v46;
              if ( !v46 )
                break;
              goto LABEL_18;
            case 'n':
              switch ( v13 )
              {
                case 1:
                  v42 = (_BYTE *)*a4++;
                  *v42 = v45;
                  break;
                case 2:
                  v40 = (_WORD *)*a4++;
                  *v40 = v45;
                  break;
                case 4:
                case 8:
                  v37 = (unsigned int *)*a4;
                  v38 = v45;
                  ++a4;
                  v37[1] = 0;
                  *v37 = v38;
                  break;
                case 6:
                  v41 = (_DWORD *)*a4++;
                  *v41 = v45;
                  break;
                default:
                  v35 = (_DWORD *)*a4++;
                  *v35 = v45;
                  break;
              }
              break;
            case 'o':
              v24 = 8;
              goto LABEL_65;
            case 'p':
              v33 = *a4++;
              if ( v33 )
                sub_E0AC(a1, &v45, v4, v33, (unsigned int)v33, 0x10u, v11, v16, v12 | 0x88);
              else
                sub_DF00(a1, &v45, v4, "(nil)", v11, -1, v12);
              break;
            case 's':
              v32 = (const char *)*a4++;
              sub_DF00(a1, &v45, v4, v32, v11, v16, v12);
              break;
            case 'u':
              v24 = 10;
              goto LABEL_65;
            case 'x':
LABEL_64:
              v24 = 16;
LABEL_65:
              v25 = v12 | 0x80;
              switch ( v13 )
              {
                case 1:
                  v28 = *(unsigned __int8 *)a4++;
                  break;
                case 2:
                  v28 = *(unsigned __int16 *)a4++;
                  break;
                case 4:
                case 8:
                  v29 = (__int64 *)(((unsigned int)a4 + 7) & 0xFFFFFFF8);
                  a4 = (int *)(v29 + 1);
                  v28 = *v29;
                  break;
                case 7:
                  LODWORD(v28) = *a4++;
                  v28 = (int)v28;
                  break;
                default:
                  LODWORD(v28) = *a4++;
                  v28 = (unsigned int)v28;
                  break;
              }
              sub_E0AC(a1, &v45, v4, v24, v28, v24, v11, v16, v25);
              break;
            default:
              break;
          }
          v7 = 0;
          v14 = *v15;
          v11 = 0;
          v12 = 0;
          v13 = 0;
          ++v15;
          v16 = -1;
          goto LABEL_8;
      }
    }
  }
LABEL_17:
  v18 = v46;
LABEL_18:
  result = v45;
  if ( v4 <= v45 )
  {
    if ( v4 )
      *(_BYTE *)(a1 + v4 - 1) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + v45) = 0;
  }
  if ( v18 )
  {
    v43 = _errno_location();
    v44 = 75;
    goto LABEL_116;
  }
  if ( result > 0x7FFFFFFE )
  {
    v43 = _errno_location();
    v44 = 34;
LABEL_116:
    *v43 = v44;
    return -1;
  }
  return result;
}
