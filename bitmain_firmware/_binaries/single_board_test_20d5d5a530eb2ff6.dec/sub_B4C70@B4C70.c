int __fastcall sub_B4C70(
        const void **a1,
        int *a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned __int8 *a6,
        int *a7)
{
  int v7; // r9
  int v10; // r7
  int v11; // r6
  int v12; // r8
  unsigned __int8 *v13; // r5
  int v14; // r4
  int v16; // r3
  int v17; // r2
  bool v18; // zf
  char v19; // r6
  int v20; // r0
  unsigned int v21; // r2
  unsigned int v22; // r3
  unsigned int v23; // r3
  __int64 v24; // r8
  int v25; // r0
  const char *v26; // r9
  int v27; // r0
  int v28; // r7
  int v29; // r3
  int v30; // r2
  bool v31; // cc
  int v32; // r4
  int v33; // r8
  _BOOL4 v34; // r3
  int v35; // r5
  _DWORD *v36; // r3
  bool v37; // zf
  bool v38; // zf
  __int64 v39; // r0
  _QWORD *v40; // r3
  int v41; // r0
  int v42; // r3
  int v43; // r3
  int v44; // r2
  int v45; // r6
  const char *v46; // r7
  int v47; // r3
  int v48; // r5
  char v49; // lr
  char v50; // t1
  _QWORD *v51; // r3
  int v53; // r9
  int v54; // r7
  int v57; // [sp+18h] [bp-34h]
  unsigned __int8 *v60; // [sp+20h] [bp-2Ch]
  int v62; // [sp+2Ch] [bp-20h]
  int v63; // [sp+2Ch] [bp-20h]
  int *v64; // [sp+30h] [bp-1Ch]
  unsigned int v65; // [sp+34h] [bp-18h]
  unsigned __int8 *v66; // [sp+3Ch] [bp-10h]
  size_t v67; // [sp+44h] [bp-8h] BYREF

  v7 = 0;
  v10 = *a6;
  v11 = 0;
  v12 = 0;
  v13 = a6 + 1;
  v14 = 0;
  v57 = -1;
  v67 = 0;
LABEL_2:
  if ( !v10 )
  {
LABEL_3:
    if ( !a2 )
    {
      v21 = v67;
      v22 = *a3;
LABEL_56:
      *a5 = v22 - 1 < v21;
      if ( v22 - 1 < v21 )
        v67 = *a3 - 1;
      if ( !*a1 )
        return 0;
    }
    if ( !sub_B3E30(a1, a2, &v67, a3, 0) )
      return 0;
    *a4 = v67 - 1;
    return 1;
  }
  while ( 2 )
  {
    if ( !a2 )
    {
      v21 = v67;
      v22 = *a3;
      if ( *a3 <= v67 )
        goto LABEL_56;
    }
    switch ( v12 )
    {
      case 0:
        if ( v10 == 37 )
        {
          v12 = 1;
        }
        else
        {
          v18 = a2 == 0;
          if ( !a2 )
            v18 = *a1 == 0;
          if ( v18 || !sub_B3E30(a1, a2, &v67, a3, v10) )
            return 0;
        }
LABEL_21:
        v10 = *v13++;
        if ( !v10 )
          goto LABEL_3;
        continue;
      case 1:
        switch ( v10 )
        {
          case ' ':
            v10 = *v13;
            v11 |= 4u;
            ++v13;
            goto LABEL_2;
          case '#':
            v10 = *v13;
            v11 |= 8u;
            ++v13;
            goto LABEL_2;
          case '+':
            v10 = *v13;
            v11 |= 2u;
            ++v13;
            goto LABEL_2;
          case '-':
            v11 |= 1u;
            goto LABEL_21;
          case '0':
            v10 = *v13;
            v11 |= 0x10u;
            ++v13;
            goto LABEL_2;
          default:
            v12 = 2;
            goto LABEL_2;
        }
      case 2:
        if ( !sub_BDB10(v10, 4) )
        {
          v12 = 3;
          if ( v10 == 42 )
          {
            v10 = *v13++;
            v14 = *a7++;
          }
          goto LABEL_2;
        }
        v16 = v10 - 48;
        v10 = *v13++;
        v14 = v16 + 10 * v14;
        if ( !v10 )
          goto LABEL_3;
        continue;
      case 3:
        if ( v10 != 46 )
          goto LABEL_24;
        v10 = *v13;
        v12 = 4;
        ++v13;
        goto LABEL_2;
      case 4:
        if ( sub_BDB10(v10, 4) )
        {
          v17 = v10 - 48;
          v10 = *v13++;
          v57 = v17 + 10 * (v57 & ~(v57 >> 31));
          if ( !v10 )
            goto LABEL_3;
        }
        else
        {
          if ( v10 == 42 )
          {
            v12 = 5;
            v10 = *v13++;
            v57 = *a7++;
            goto LABEL_2;
          }
LABEL_24:
          v12 = 5;
        }
        continue;
      case 5:
        switch ( v10 )
        {
          case 'L':
            v10 = *v13;
            v7 = 3;
            ++v13;
            v12 = 6;
            if ( !v10 )
              goto LABEL_3;
            continue;
          case 'h':
            v7 = 1;
            v10 = *v13;
            v12 = 6;
            ++v13;
            goto LABEL_2;
          case 'j':
          case 'q':
            v10 = *v13;
            v7 = 4;
            goto LABEL_27;
          case 'l':
            v10 = *v13;
            if ( v10 == 108 )
            {
              v10 = v13[1];
              v7 = 4;
              ++v13;
            }
            else
            {
              v7 = 2;
            }
LABEL_27:
            ++v13;
            goto LABEL_28;
          case 'z':
            v10 = *v13;
            v7 = 5;
            ++v13;
            v12 = 6;
            if ( !v10 )
              goto LABEL_3;
            continue;
          default:
LABEL_28:
            v12 = 6;
            if ( !v10 )
              goto LABEL_3;
            continue;
        }
      case 6:
        switch ( v10 )
        {
          case '%':
            v38 = a2 == 0;
            if ( !a2 )
              v38 = *a1 == 0;
            if ( v38 || !sub_B3E30(a1, a2, &v67, a3, 37) )
              return 0;
            goto LABEL_48;
          case 'E':
            LOBYTE(v11) = v11 | 0x20;
            goto LABEL_50;
          case 'G':
            LOBYTE(v11) = v11 | 0x20;
            goto LABEL_46;
          case 'X':
            LOBYTE(v11) = v11 | 0x20;
            goto LABEL_44;
          case 'c':
            v37 = a2 == 0;
            if ( !a2 )
              v37 = *a1 == 0;
            if ( v37 || !sub_B3E30(a1, a2, &v67, a3, *a7) )
              return 0;
            ++a7;
            goto LABEL_48;
          case 'd':
          case 'i':
            switch ( v7 )
            {
              case 1:
                LODWORD(v39) = *(__int16 *)a7++;
                v39 = (int)v39;
                break;
              case 4:
                v51 = (_QWORD *)(((unsigned int)a7 + 7) & 0xFFFFFFF8);
                v39 = *v51;
                a7 = (int *)(v51 + 1);
                break;
              default:
                LODWORD(v39) = *a7++;
                v39 = (int)v39;
                break;
            }
            if ( !sub_B3F1C(a1, a2, &v67, a3, v39, SHIDWORD(v39), 10, v14, v57, v11) )
              return 0;
            goto LABEL_48;
          case 'e':
LABEL_50:
            a7 = (int *)((((unsigned int)a7 + 7) & 0xFFFFFFF8) + 8);
            v20 = 1;
            goto LABEL_47;
          case 'f':
            a7 = (int *)((((unsigned int)a7 + 7) & 0xFFFFFFF8) + 8);
            if ( !sub_B4334(a1, a2, &v67, a3, v14, v57, v11, 0) )
              return 0;
            goto LABEL_48;
          case 'g':
LABEL_46:
            a7 = (int *)((((unsigned int)a7 + 7) & 0xFFFFFFF8) + 8);
            v20 = 2;
LABEL_47:
            if ( sub_B4334(a1, a2, &v67, a3, v14, v57, v11, v20) )
              goto LABEL_48;
            return 0;
          case 'n':
            v36 = (_DWORD *)*a7++;
            *v36 = v67;
            goto LABEL_48;
          case 'o':
          case 'u':
          case 'x':
LABEL_44:
            v19 = v11 | 0x40;
            switch ( v7 )
            {
              case 1:
                v24 = *(unsigned __int16 *)a7++;
                break;
              case 4:
                v40 = (_QWORD *)(((unsigned int)a7 + 7) & 0xFFFFFFF8);
                v24 = *v40;
                a7 = (int *)(v40 + 1);
                break;
              default:
                v23 = *a7++;
                v24 = v23;
                break;
            }
            if ( v10 == 111 )
            {
              v25 = 8;
            }
            else if ( v10 == 117 )
            {
              v25 = 10;
            }
            else
            {
              v25 = 16;
            }
            if ( !sub_B3F1C(a1, a2, &v67, a3, v24, SHIDWORD(v24), v25, v14, v57, v19) )
              return 0;
            goto LABEL_48;
          case 'p':
            if ( !sub_B3F1C(a1, a2, &v67, a3, *a7, 0, 16, v14, v57, v11 | 8) )
              return 0;
            ++a7;
            goto LABEL_48;
          case 's':
            v26 = (const char *)*a7;
            v64 = a7 + 1;
            if ( v57 >= 0 )
              goto LABEL_73;
            if ( a2 )
            {
              v57 = 0x7FFFFFFF;
LABEL_73:
              if ( !v26 )
                v26 = "<NULL>";
LABEL_75:
              v27 = sub_E9EC0(v26, v57);
              v28 = v14 - v27;
              v29 = 0x7FFFFFFF;
              if ( (v14 | (v14 - v27)) < 0 )
                v28 = 0;
              else
                v29 = 0x7FFFFFFF - v28;
              v30 = v57;
              v31 = v29 <= v57;
              if ( v29 <= v57 )
                v29 = 0x7FFFFFFF;
              else
                v30 = v57 + v28;
              v62 = v27;
              if ( v31 )
                v57 = v29;
              else
                v57 = v30;
              goto LABEL_84;
            }
            v57 = *a3;
            if ( !v26 )
              v26 = "<NULL>";
            if ( (*a3 & 0x80000000) == 0 )
              goto LABEL_75;
            v41 = sub_E9EC0(v26, -1);
            v28 = v14 - v41;
            v62 = v41;
            if ( ((v14 - v41) | v14) < 0 )
            {
              if ( (v11 & 1) == 0 )
              {
                v28 = 0;
                v32 = 0;
                goto LABEL_156;
              }
              v28 = 0;
LABEL_131:
              v28 = -v28;
              v32 = v62;
              if ( v62 )
              {
                v32 = 0;
                v65 = (unsigned int)v57 >> 31;
                goto LABEL_133;
              }
LABEL_159:
              if ( v28 >= 0 )
                goto LABEL_154;
              if ( v32 >= v57 && !((unsigned int)v57 >> 31) )
                goto LABEL_154;
              v53 = (int)a2;
              v54 = v32 - v28;
              if ( a2 )
                v53 = 1;
              v60 = v13;
              while ( 1 )
              {
                ++v32;
                if ( !(*a1 ? v53 | 1 : v53) )
                  return 0;
                if ( !sub_B3E30(a1, a2, &v67, a3, 32) )
                  return 0;
                if ( v32 != v54 && (v32 < v57 || (unsigned int)v57 >> 31) )
                  continue;
                goto LABEL_153;
              }
            }
LABEL_84:
            v32 = v11 & 1;
            if ( (v11 & 1) != 0 )
              goto LABEL_131;
            if ( v28 )
            {
              v65 = (unsigned int)v57 >> 31;
              if ( v57 )
              {
                v33 = (int)a2;
                if ( a2 )
                  v33 = 1;
                v66 = v13;
                while ( 1 )
                {
                  ++v32;
                  if ( *a1 )
                    v35 = v33 | 1;
                  else
                    v35 = v33;
                  if ( !v35 )
                    return 0;
                  if ( !sub_B3E30(a1, a2, &v67, a3, 32) )
                    return 0;
                  if ( !--v28 )
                    break;
                  v34 = v57 < 0;
                  if ( v32 < v57 )
                    v34 = 1;
                  if ( !v34 )
                  {
                    v13 = v66;
                    goto LABEL_156;
                  }
                }
                v13 = v66;
                if ( !v62 )
                  goto LABEL_154;
                goto LABEL_133;
              }
LABEL_154:
              a7 = v64;
LABEL_48:
              v7 = 0;
              v10 = *v13;
              v11 = 0;
              v12 = 0;
              v14 = 0;
              ++v13;
              v57 = -1;
              goto LABEL_2;
            }
            v32 = 0;
LABEL_156:
            if ( !v62 )
              goto LABEL_154;
            v65 = (unsigned int)v57 >> 31;
LABEL_133:
            if ( v32 < v57 )
              v42 = (unsigned __int8)v65 | 1;
            else
              v42 = (unsigned __int8)v65;
            if ( !v42 )
              goto LABEL_154;
            v43 = v62;
            v44 = (int)a2;
            if ( a2 )
              v44 = 1;
            v63 = v28;
            v60 = v13;
            v45 = v44;
            v46 = &v26[v43];
            while ( 1 )
            {
              ++v32;
              v48 = *a1 ? v45 | 1 : v45;
              v50 = *v26++;
              v49 = v50;
              if ( !v48 )
                return 0;
              if ( !sub_B3E30(a1, a2, &v67, a3, v49) )
                return 0;
              if ( v26 == v46 )
              {
                v28 = v63;
                v13 = v60;
                goto LABEL_159;
              }
              if ( v32 < v57 )
                v47 = (unsigned __int8)v65 | 1;
              else
                v47 = (unsigned __int8)v65;
              if ( !v47 )
              {
LABEL_153:
                v13 = v60;
                goto LABEL_154;
              }
            }
          case 'w':
            ++v13;
            goto LABEL_48;
          default:
            goto LABEL_48;
        }
    }
  }
}
