int sub_875FC()
{
  int *v0; // r5
  unsigned __int8 *v1; // r8
  char *v2; // r6
  const char *v3; // r4
  unsigned __int8 *v4; // r10
  int v5; // r7
  int v6; // r2
  unsigned __int8 *v7; // r4
  int v8; // r3
  int v9; // r3
  _BOOL4 v11; // r12
  unsigned __int8 *v12; // r1
  unsigned int v13; // r3
  bool v14; // cc
  _BOOL4 v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r12
  int v19; // r0
  int v20; // r12
  bool v21; // cc
  unsigned int v22; // r3
  unsigned int v23; // r1
  unsigned __int8 *v24; // r0
  char v25; // lr
  unsigned int v26; // r3
  int v27; // r1
  int v28; // r7
  int v29; // r3
  bool v30; // cc
  _BOOL4 v31; // r3
  unsigned __int8 *v32; // r3
  int v33; // t1
  unsigned __int8 *v34; // r8
  unsigned __int8 *v35; // r10
  _BOOL4 v36; // r6
  signed __int64 v37; // r4
  int v38; // lr
  int v39; // lr
  int v40; // t1
  unsigned __int64 v41; // r2
  int v42; // r12
  bool v43; // zf
  __int64 v44; // r0
  _BOOL4 v45; // r2
  _BOOL4 v46; // r12
  int v47; // r3
  size_t v48; // r5
  const char *v49; // r0
  bool v50; // zf
  int i; // r0
  int v52; // t1
  bool v53; // zf
  size_t v54; // r4
  bool v55; // zf
  const char *v56; // r7
  int v57; // r9
  int v58; // r6
  int v59; // r7
  int *v60; // r3
  int v61; // r5
  int v62; // r8
  int v63; // r0
  __int64 v64; // r6
  int v65; // r0
  int *v66; // [sp+8h] [bp-5Ch] BYREF
  unsigned __int8 *v67; // [sp+Ch] [bp-58h]
  unsigned __int8 *v68; // [sp+10h] [bp-54h]
  const char *v69; // [sp+14h] [bp-50h]
  void *src; // [sp+18h] [bp-4Ch]
  _BOOL4 v71; // [sp+1Ch] [bp-48h]
  size_t n; // [sp+20h] [bp-44h]
  char *v73; // [sp+24h] [bp-40h]
  __int64 v74; // [sp+28h] [bp-3Ch]
  signed __int64 v75; // [sp+30h] [bp-34h]
  int v76[3]; // [sp+38h] [bp-2Ch] BYREF

  v0 = &dword_487CC0;
  v1 = (unsigned __int8 *)dword_487CC0;
  v2 = asc_46BA28;
  while ( 2 )
  {
    v3 = asc_46BA28;
    v4 = v1;
    v5 = 0;
    dword_487CC4 = (int)v1;
    do
    {
      if ( !strncmp(v3, (const char *)v1, 2u) )
      {
        dword_487CC0 = (int)(v1 + 2);
        return *(_DWORD *)&asc_46BA28[8 * v5 + 4];
      }
      ++v5;
      v3 += 8;
    }
    while ( v5 != 5 );
    v7 = v1 + 1;
    v6 = *v1;
    v8 = v6;
    switch ( *v1 )
    {
      case 0u:
        return 0;
      case 9u:
      case 0xAu:
      case 0x20u:
        dword_487CC0 = (int)++v1;
        continue;
      case 0x22u:
      case 0x27u:
        v9 = v1[1];
        if ( v6 == v9 )
        {
          dword_487CC0 = (int)(v1 + 2);
          v9 = 266;
          dword_475138 = (int)(v1 + 1);
          dword_47513C = 0;
        }
        else
        {
          if ( !v1[1] )
LABEL_129:
            sub_946E0("Unterminated string or character constant.");
          v16 = 1;
          while ( 1 )
          {
            v43 = v9 == 92;
            v17 = v16 + 1;
            v18 = v16 + 1;
            v9 = v1[v16 + 1];
            if ( v43 )
            {
              v18 = v16 + 2;
              if ( (unsigned int)(v9 - 48) <= 9 )
              {
                v26 = v1[v18] - 48;
                if ( v26 <= 9 )
                  v17 = v16 + 4;
                else
                  v17 = v16 + 3;
                if ( v26 <= 9 )
                  v16 += 3;
                else
                  v16 += 2;
                v9 = v1[v17];
                v18 = v17;
              }
              else
              {
                ++v16;
                v9 = v1[v18];
                v17 = v18;
              }
            }
            if ( v6 == v9 )
              break;
            v16 = v17;
            if ( !v9 )
              goto LABEL_129;
          }
          dword_487CC0 = (int)&v1[v18 + 1];
          dword_475138 = (int)(v1 + 1);
          if ( v17 != 2 )
            v9 = 266;
          dword_47513C = v16;
          if ( v17 == 2 )
          {
            v9 = 264;
            *(_QWORD *)&dword_475138 = v1[1];
          }
        }
        return v9;
      case 0x23u:
      case 0x26u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Du:
      case 0x2Fu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x40u:
      case 0x5Bu:
      case 0x5Du:
      case 0x5Eu:
      case 0x7Bu:
      case 0x7Du:
      case 0x7Eu:
        goto LABEL_19;
      case 0x28u:
        dword_487CC0 = (int)(v1 + 1);
        v9 = 40;
        ++dword_487CC8;
        return v9;
      case 0x29u:
        v9 = dword_487CC8;
        if ( dword_487CC8 )
        {
          dword_487CC0 = (int)(v1 + 1);
          --dword_487CC8;
          return 41;
        }
        return v9;
      case 0x2Cu:
        if ( !dword_487CCC || (v9 = dword_487CC8) != 0 )
        {
          dword_487CC0 = (int)(v1 + 1);
          return 44;
        }
        return v9;
      case 0x2Eu:
        if ( (unsigned int)v1[1] - 48 > 9 )
        {
          dword_487CC0 = (int)(v1 + 1);
          return 302;
        }
        v8 = 46;
        goto LABEL_35;
      default:
        if ( (unsigned int)(v6 - 48) > 9 )
        {
          v50 = v6 == 95;
          if ( v6 != 95 )
            v50 = v6 == 36;
          if ( !v50 && (v6 & 0xFFFFFFDF) - 65 > 0x19 )
LABEL_35:
            sub_946E0("Invalid character '%c' in expression.", v8);
          for ( i = (int)v1; ; ++i )
          {
            v53 = v8 == 95;
            if ( v8 != 95 )
              v53 = v8 == 36;
            v54 = i - (_DWORD)v1;
            if ( !v53 && (unsigned int)(v8 - 48) > 9 && (v8 & 0xFFFFFFDF) - 65 > 0x19 )
              break;
            v52 = *(unsigned __int8 *)(i + 1);
            v8 = v52;
          }
          v55 = v54 == 2;
          if ( v54 == 2 )
            v55 = v6 == 105;
          if ( v55 && v1[1] == 102 )
            return 0;
          v56 = aOr;
          v57 = 0;
          dword_487CC0 = i;
          do
          {
            if ( strlen(v56) == v54 && !strncmp((const char *)v1, v56, v54) )
              return *(_DWORD *)&asc_46BA28[16 * v57 + 56];
            ++v57;
            v56 += 16;
          }
          while ( v57 != 23 );
          dword_475138 = (int)v1;
          dword_47513C = v54;
          if ( *v1 == 36 )
          {
            sub_1C4F9C(dword_475148, dword_475138, dword_47513C);
            return 290;
          }
          else
          {
            v58 = sub_1C3E58(dword_475138, dword_47513C);
            if ( sub_21AB84(v58) )
              return 268;
            sub_21D6B0(v76, v58, dword_487CD0, 1, 0);
            v59 = v76[0];
            if ( v76[0] )
            {
              if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v76[0] + 32) >> 3)) == 10 )
              {
                return 268;
              }
              else
              {
                v60 = *(int **)(dword_475148 + 4);
                v61 = *v60;
                v62 = v60[1];
                v63 = sub_1C3E58(dword_475138, dword_47513C);
                if ( !sub_170CD8(v61, v62, v63, dword_487CD0, 1) )
                {
                  switch ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v59 + 32) >> 3)) )
                  {
                    case 0:
                      sub_946E0("internal:  Undefined class in m2lex()");
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 0xB:
                    case 0xD:
                    case 0xE:
                      return 267;
                    case 8:
                      return 271;
                    case 9:
                    case 0xC:
                      sub_946E0("internal:  Unforseen case in m2lex()");
                    case 0xA:
                      return 268;
                    default:
                      sub_946E0("unhandled token in m2lex()");
                  }
                }
                return 271;
              }
            }
            else
            {
              v64 = *(_QWORD *)*(_DWORD *)(dword_475148 + 4);
              v65 = sub_1C3E58(dword_475138, dword_47513C);
              if ( sub_170CD8(v64, HIDWORD(v64), v65, dword_487CD0, 1) )
                return 271;
              if ( !strncmp((const char *)v1, "TRUE", 4u) )
              {
                v9 = 262;
                *(_QWORD *)&dword_475138 = 1;
              }
              else if ( !strncmp((const char *)v1, "FALSE", 5u) )
              {
                v9 = 263;
                *(_QWORD *)&dword_475138 = 0;
              }
              else
              {
                return 267;
              }
            }
          }
          return v9;
        }
        v19 = 0;
        v20 = 0;
        while ( 1 )
        {
          v22 = *v7;
          if ( v19 )
          {
            if ( v20 )
            {
              v24 = v7;
              v23 = *v7;
            }
            else
            {
              if ( v22 != 46 )
              {
                v25 = *(v7 - 1);
                goto LABEL_61;
              }
              v23 = v7[1];
              v24 = v7 + 1;
            }
LABEL_67:
            LOBYTE(v22) = *(v24 - 1);
            v20 = 1;
LABEL_60:
            while ( 1 )
            {
              v25 = v22;
              v7 = v24;
              v22 = v23;
LABEL_61:
              if ( (v25 & 0xDF) != 0x45 || ((v22 - 43) & 0xFD) != 0 )
                break;
              v24 = v7 + 1;
              v23 = v7[1];
              if ( !v20 && v23 == 46 )
              {
                v24 = v7 + 2;
                v23 = v7[2];
                goto LABEL_67;
              }
            }
            v19 = 1;
          }
          else
          {
            if ( v22 == 101 || v22 == 69 )
              goto LABEL_57;
            if ( !v20 )
            {
              if ( v22 == 46 )
              {
                v22 = *++v7;
                if ( v22 != 101 && v22 != 69 )
                {
                  v19 = 0;
                  v20 = 1;
                  goto LABEL_50;
                }
LABEL_57:
                v22 = *++v7;
                if ( ((v22 - 43) & 0xFD) == 0 )
                {
                  v23 = v7[1];
                  v24 = v7 + 1;
                  v20 = 1;
                  goto LABEL_60;
                }
                v20 = 1;
              }
              v19 = v20;
            }
          }
LABEL_50:
          if ( (unsigned __int8)(v22 - 48) > 9u )
          {
            v21 = v22 > 0x48;
            if ( v22 != 72 )
              v21 = (unsigned __int8)(v22 - 65) > 5u;
            if ( v21 )
              break;
          }
          ++v7;
        }
        v27 = *(v7 - 1);
        v28 = dword_46DE54;
        n = v7 - v1;
        v11 = dword_46BA50 == 1;
        if ( v27 == 72 )
        {
          v28 = 16;
          v27 = v7 - v1 - 1;
          v71 = 0;
        }
        else
        {
          v29 = v27 - 66;
          v30 = (unsigned int)(v27 - 66) > 1;
          if ( (unsigned int)(v27 - 66) > 1 )
            v27 = v7 - v1;
          else
            v29 = v27 - 67;
          if ( v30 )
          {
            v31 = 0;
            v71 = 0;
          }
          else
          {
            v28 = 8;
            v31 = v29 == 0;
          }
          if ( !v30 )
          {
            v71 = v31;
            v27 = v7 - v1 - 1;
          }
        }
        if ( v27 <= 0 )
        {
          v68 = v1;
          v75 = 0;
LABEL_9:
          v12 = v68;
          *v0 = (int)v68;
          v13 = *v12;
          v14 = v13 > 0x48;
          if ( v13 != 72 )
            v14 = v13 - 66 > 1;
          v15 = v71;
          if ( !v14 )
            *v0 = (int)(v12 + 1);
          if ( v15 )
          {
            v8 = 264;
            *(_QWORD *)&dword_475138 = v75;
            goto LABEL_19;
          }
          if ( v11 )
          {
            if ( *((_DWORD *)v2 + 10) == 1 )
            {
              v8 = 261;
              *(_QWORD *)&dword_475138 = v75;
              goto LABEL_19;
            }
            if ( v75 < 0 )
              sub_194338("Overflow on numeric constant -- number too large.");
          }
          v8 = 258;
          *(_QWORD *)&dword_475138 = v75;
          goto LABEL_19;
        }
        v32 = &v1[v27 - 1];
        while ( 2 )
        {
          if ( v28 == 10 && (unsigned int)(v6 - 48) > 9 )
            sub_946E0("Invalid digit '%c' in number.", v6);
          if ( v32 == v1 )
          {
            v67 = v7;
            v34 = v4;
            src = v4;
            v73 = asc_46BA28;
            v35 = &v4[v27];
            v66 = &dword_487CC0;
            v36 = dword_46BA50 == 1;
            v68 = v35;
            v37 = 0;
            v69 = "Overflow on numeric constant.";
            v74 = v28;
            while ( 1 )
            {
              if ( v34 == v35 )
              {
                v75 = v37;
                v11 = v36;
                v7 = v67;
                v2 = v73;
                v0 = v66;
                goto LABEL_9;
              }
              v40 = *v34++;
              v39 = v40;
              v41 = __PAIR64__(HIDWORD(v74), v28) * v37;
              if ( v28 == 8 )
                break;
              v42 = v39 - 48;
              if ( (unsigned int)(v39 - 48) <= 9 )
                goto LABEL_123;
              v43 = v39 == 70;
              if ( (unsigned int)(v39 - 65) <= 5 )
                v43 = v28 == 16;
              if ( !v43 )
                goto LABEL_124;
              v42 = v39 - 55;
              v44 = v39 - 55;
              v75 = v41 + v44;
LABEL_114:
              v45 = v44 != v75;
              v46 = v42 != 0;
              v47 = dword_4879EC;
              if ( dword_4879EC )
                v47 = 1;
              if ( v36 )
              {
                if ( (v47 & (v46 && v45)) == 0 )
                  goto LABEL_105;
                goto LABEL_118;
              }
              v38 = *((_DWORD *)v73 + 10);
              if ( v38 == 1 )
              {
                if ( v37 < v75 )
                  goto LABEL_105;
                if ( (v47 & (v46 && v45)) != 0 )
                {
LABEL_118:
                  if ( (unsigned int)v37 >= (unsigned int)v75 )
                  {
                    v36 = 1;
LABEL_120:
                    sub_194338(v69);
                    goto LABEL_105;
                  }
                }
                v36 = 1;
                goto LABEL_105;
              }
              if ( (v46 & v47 & v45) != 0 && v37 >= v75 && v38 == -1 )
                goto LABEL_120;
LABEL_105:
              v37 = v75;
            }
            if ( (unsigned int)(v39 - 56) <= 1 )
              sub_946E0("Invalid digit '%c' in octal number.", v39);
            v42 = v39 - 48;
            if ( (unsigned int)(v39 - 48) > 9 )
            {
LABEL_124:
              v4 = (unsigned __int8 *)src;
              goto LABEL_125;
            }
LABEL_123:
            v44 = v42;
            v75 = v41 + v42;
            if ( v28 <= v42 )
              goto LABEL_124;
            goto LABEL_114;
          }
          v33 = *++v1;
          v6 = v33;
          if ( v33 != 46 )
            continue;
          break;
        }
        if ( v28 != 10 )
          sub_946E0("Floating point numbers must be base 10.");
        LODWORD(v75) = v27;
        sub_19E4F0(*(_DWORD *)(*(_DWORD *)(dword_475148 + 4) + 4));
        if ( !sub_1C44E4(v4, v75) )
        {
LABEL_125:
          v48 = n;
          v49 = (const char *)memcpy(&v66, v4, n);
          *((_BYTE *)&v66 + v48) = 0;
          sub_946E0("Invalid number \"%s\".", v49);
        }
        v8 = 265;
LABEL_19:
        *v0 = (int)v7;
        return v8;
    }
  }
}
