int sub_8301C()
{
  unsigned __int8 *v0; // r5
  int v1; // r4
  unsigned __int8 *v2; // r9
  char **v3; // r7
  size_t v4; // r10
  int v5; // r6
  char *i; // r8
  char *v7; // t1
  char **v8; // r6
  int v9; // r3
  int v10; // r1
  size_t v12; // r7
  int v13; // r6
  char *v14; // r10
  int *v15; // r8
  unsigned __int8 *v16; // r2
  int v17; // r2
  int v18; // r3
  int *v19; // r8
  unsigned __int8 *v20; // r5
  int v21; // r3
  int v22; // r2
  int v23; // r2
  unsigned __int8 *v24; // r1
  int v25; // r1
  unsigned __int8 *v26; // r6
  _BOOL4 v27; // r7
  int v28; // lr
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r12
  int v33; // t1
  unsigned __int8 v34; // r3
  bool v35; // zf
  unsigned __int8 *j; // r1
  int v37; // t1
  bool v38; // zf
  int v39; // r6
  bool v40; // r2
  _BOOL4 v41; // r2
  bool v42; // zf
  const char *v43; // r7
  char **v44; // r9
  size_t v45; // r0
  int v46; // r4
  const char *v47; // t1
  char **v48; // r4
  const char *v49; // r0
  int v50; // r1
  _BYTE *v51; // r9
  int v52; // r3
  int v53; // t1
  _DWORD *v54; // r12
  int v55; // r7
  int v56; // r2
  int v57; // r2
  int v58; // r1
  unsigned int v59; // r2
  int v60; // r3
  int v61; // r2
  _BYTE v62[4]; // [sp+8h] [bp-74h] BYREF
  char *v63; // [sp+Ch] [bp-70h]
  char *v64; // [sp+10h] [bp-6Ch]
  char *s2; // [sp+14h] [bp-68h]
  int *v66; // [sp+18h] [bp-64h]
  int *v67; // [sp+1Ch] [bp-60h]
  int v68; // [sp+20h] [bp-5Ch] BYREF
  int v69; // [sp+24h] [bp-58h]
  _DWORD v70[3]; // [sp+28h] [bp-54h] BYREF
  _DWORD v71[3]; // [sp+34h] [bp-48h] BYREF
  _BYTE v72[28]; // [sp+40h] [bp-3Ch] BYREF

  v0 = (unsigned __int8 *)dword_487CC0;
  v67 = &dword_487CC4;
  v63 = ".true.";
  s2 = ".and.";
  v64 = "**";
  v66 = &dword_487CC0;
  while ( 2 )
  {
    *v67 = (int)v0;
    v2 = v0 + 1;
    v1 = *v0;
    if ( v1 != 46 )
    {
LABEL_3:
      v3 = &off_368560;
      v4 = 5;
      v5 = 0;
      for ( i = s2; ; v4 = strlen(i) )
      {
        if ( !strncmp((const char *)v0, i, v4) )
        {
          v8 = &(&off_368408)[3 * v5];
          v9 = (int)v8[87];
          v10 = (int)v8[88];
          *v66 = (int)&v0[v4];
          dword_475070 = v10;
          return v9;
        }
        v7 = v3[3];
        v3 += 3;
        i = v7;
        ++v5;
        if ( !v7 )
          break;
      }
      if ( !strncmp((const char *)v0, v64, 2u) )
      {
        v9 = 294;
        *v66 = (int)(v0 + 2);
        dword_475070 = 24;
        return v9;
      }
      v9 = v1;
      switch ( v1 )
      {
        case 0:
          return 0;
        case 9:
        case 10:
        case 32:
          ++v0;
          *v66 = (int)v2;
          continue;
        case 33:
        case 37:
        case 38:
        case 42:
        case 43:
        case 45:
        case 47:
        case 58:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 91:
        case 93:
        case 94:
        case 123:
        case 124:
        case 125:
        case 126:
          v15 = v66;
          v16 = v0 + 1;
          goto LABEL_19;
        case 39:
          v17 = v0[1];
          v18 = 0;
          v19 = v66;
          v20 = v0 + 1;
          dword_475088 = 0;
          if ( !v17 )
            goto LABEL_106;
          while ( 2 )
          {
            if ( v18 + 1 >= dword_47508C )
            {
              v50 = dword_47508C + 64;
              dword_47508C += 64;
              if ( dword_475090 )
                dword_475090 = sub_93050(dword_475090, v50);
              else
                dword_475090 = sub_93028(v50);
            }
            v23 = *v20;
            if ( *(unsigned __int8 *)*v19 == v23 )
            {
              if ( v20[1] != v23 )
              {
                if ( !*(_BYTE *)*v19 || (v57 = dword_475088) == 0 )
                {
LABEL_106:
                  v9 = 39;
LABEL_107:
                  sub_946E0("Invalid character '%c' in expression.", v9);
                }
                v58 = dword_475090;
                v9 = 260;
                *(_BYTE *)(dword_475090 + dword_475088) = 0;
                *v19 = (int)(v20 + 1);
                dword_475070 = v58;
                dword_475074 = v57;
                return v9;
              }
              v24 = v20 + 1;
            }
            else
            {
              v24 = v20;
            }
            v21 = dword_475088;
            v20 = v24 + 1;
            *(_BYTE *)(dword_475090 + dword_475088) = v23;
            v18 = v21 + 1;
            v22 = v24[1];
            dword_475088 = v18;
            if ( !v22 )
              goto LABEL_106;
            continue;
          }
        case 40:
          v9 = 40;
          v25 = dword_487CC8;
          *v66 = (int)v2;
          dword_487CC8 = v25 + 1;
          return v9;
        case 41:
          v9 = dword_487CC8;
          if ( dword_487CC8 )
          {
            *v66 = (int)v2;
            dword_487CC8 = v9 - 1;
            return 41;
          }
          return v9;
        case 44:
          if ( !dword_487CCC || (v9 = dword_487CC8) != 0 )
          {
            *v66 = (int)v2;
            return 44;
          }
          return v9;
        case 46:
          v16 = v0 + 1;
          v15 = v66;
          if ( (unsigned int)v0[1] - 48 <= 9 )
          {
            v26 = v0;
            v27 = (unsigned int)dword_46DE54 > 0xA;
LABEL_38:
            v28 = 0;
            v29 = v27;
            v30 = 0;
            v31 = 0;
            v32 = v27;
            while ( 1 )
            {
              if ( v29 || (v1 & 0xDF) != 0x45 )
              {
                if ( v32 || (v1 & 0xDF) != 0x44 )
                {
                  if ( !(v31 | v27) && v1 == 46 )
                  {
                    v31 = 1;
                  }
                  else if ( ((!v30 || (*(v26 - 1) & 0xDF) != 0x45) && (!v28 || (*(v26 - 1) & 0xDF) != 0x44)
                          || ((v1 - 43) & 0xFD) != 0)
                         && (unsigned int)(v1 - 48) > 9
                         && (v1 & 0xFFFFFFDF) - 65 > 0x19 )
                  {
                    v9 = sub_82A98(dword_475068, v0, v26 - v0, v31 | v28 | v30, (int)&dword_475070);
                    if ( v9 == 266 )
                    {
                      v49 = (const char *)memcpy(v62, v0, v26 - v0);
                      v62[v26 - v0] = 0;
                      sub_946E0("Invalid number \"%s\".", v49);
                    }
                    *v15 = (int)v26;
                    return v9;
                  }
                }
                else
                {
                  v28 = 1;
                  v32 = v27 | 1;
                  v31 = 1;
                }
              }
              else
              {
                v30 = 1;
                v29 = v27 | 1;
                v31 = 1;
              }
              v33 = *++v26;
              v1 = v33;
            }
          }
          v9 = 46;
LABEL_19:
          *v15 = (int)v16;
          return v9;
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
          v15 = v66;
          v27 = (unsigned int)dword_46DE54 > 0xA;
          if ( v1 != 48 )
            goto LABEL_108;
          v34 = v0[1];
          if ( (v34 & 0xDF) == 0x58 )
          {
            v26 = v0 + 2;
            v1 = v0[2];
            v27 = 1;
          }
          else if ( (v34 & 0xCF) == 0x44 )
          {
            v26 = v0 + 2;
            v1 = v0[2];
            v27 = 0;
          }
          else
          {
LABEL_108:
            v26 = v0;
          }
          goto LABEL_38;
        default:
          v35 = v1 == 95;
          if ( v1 != 95 )
            v35 = v1 == 36;
          if ( v35 || v1 == 58 || (unsigned int)(v1 - 97) <= 0x19 )
            goto LABEL_53;
          if ( (unsigned int)(v1 - 65) > 0x19 )
            goto LABEL_107;
          v1 = *v0;
          v9 = v1;
LABEL_53:
          for ( j = v0; ; ++j )
          {
            v38 = v9 == 95;
            if ( v9 != 95 )
              v38 = v9 == 36;
            v39 = j - v0;
            v40 = !v38;
            v41 = v9 != 58 && v40;
            if ( v41 && (unsigned int)(v9 - 48) > 9 && (v9 & 0xFFFFFFDF) - 65 > 0x19 )
              break;
            v37 = j[1];
            v9 = v37;
          }
          v42 = v1 == 105;
          if ( v1 == 105 )
            v42 = v39 == 2;
          if ( v42 && v0[1] == 102 )
            return 0;
          v43 = "complex_16";
          v44 = &off_368674;
          v45 = 10;
          v46 = 0;
          *v66 += v39;
          while ( 2 )
          {
            if ( v39 == v45 && !strncmp((const char *)v0, v43, v39) )
            {
              v48 = &(&off_368408)[3 * v46];
              v9 = (int)v48[156];
              dword_475070 = (int)v48[157];
              return v9;
            }
            v47 = v44[3];
            v44 += 3;
            v43 = v47;
            ++v46;
            if ( v47 )
            {
              v45 = strlen(v43);
              continue;
            }
            break;
          }
          dword_475070 = (int)v0;
          dword_475074 = v39;
          if ( *v0 == 36 )
          {
            sub_1C4F9C(dword_475068, dword_475070, dword_475074);
            return 283;
          }
          v67 = (int *)sub_1C3E58(dword_475070, dword_475074);
          v51 = v71;
          v71[0] = 2;
          v71[1] = 1;
          v71[2] = 3;
          do
          {
            memset(v70, 0, sizeof(v70));
            v53 = *(_DWORD *)v51;
            v51 += 4;
            v52 = v53;
            if ( *(_DWORD *)(**(_DWORD **)(dword_475068 + 4) + 8) == 4 )
              v54 = v70;
            else
              v54 = 0;
            sub_21D6B0(&v68, v67, dword_487CD0, v52, v54);
            if ( v68 )
            {
              v55 = v68;
              if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v68 + 32) >> 3)) == 8 )
              {
                v9 = 263;
                dword_475078 = *(_DWORD *)(v68 + 24);
                return v9;
              }
              dword_475078 = sub_1946C8(
                               **(_DWORD **)(dword_475068 + 4),
                               *(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4),
                               v67);
              if ( dword_475078 )
                return 263;
              goto LABEL_99;
            }
          }
          while ( v72 != v51 );
          v55 = v68;
          dword_475078 = sub_1946C8(
                           **(_DWORD **)(dword_475068 + 4),
                           *(_DWORD *)(*(_DWORD *)(dword_475068 + 4) + 4),
                           v67);
          if ( dword_475078 )
            return 263;
          v59 = *v0;
          if ( v59 > 0x60 )
          {
            v60 = dword_46DE54;
            if ( v59 >= dword_46DE54 + 87 )
            {
LABEL_120:
              if ( v60 + 55 <= v59 )
                goto LABEL_99;
            }
            if ( sub_82A98(dword_475068, v0, v39, 0, (int)v72) == 258 )
            {
              v68 = 0;
              v9 = 264;
              v61 = v70[0];
              if ( v70[0] )
                v61 = 1;
              dword_475078 = 0;
              *(_DWORD *)algn_47507C = v69;
              dword_475080 = v61;
              return v9;
            }
          }
          else if ( v59 > 0x40 )
          {
            v60 = dword_46DE54;
            goto LABEL_120;
          }
LABEL_99:
          v56 = v70[0];
          v68 = v55;
          v9 = 262;
          if ( v70[0] )
            v56 = 1;
          dword_475080 = v56;
          dword_475078 = v55;
          *(_DWORD *)algn_47507C = v69;
          return v9;
      }
    }
    break;
  }
  v12 = 6;
  v13 = 0;
  v14 = v63;
  while ( strncmp((const char *)v0, v14, v12) )
  {
    ++v13;
    v14 = (&off_368538)[2 * v13];
    if ( !v14 )
      goto LABEL_3;
    v12 = strlen((&off_368538)[2 * v13]);
  }
  *v66 = (int)&v0[v12];
  *(_QWORD *)&dword_475070 = (int)(&off_368408)[2 * v13 + 77];
  return 261;
}
