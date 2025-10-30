int __fastcall sub_7FE74(int a1)
{
  unsigned __int8 *v1; // r10
  int v2; // r4
  const char *v3; // r1
  int v4; // r8
  int **v5; // r4
  const char *v6; // r1
  int v7; // r8
  const char *v8; // t1
  char **v9; // r8
  int result; // r0
  unsigned __int8 *v11; // r3
  unsigned int v12; // r4
  char **v13; // r4
  unsigned __int8 *v14; // r8
  unsigned __int8 *v15; // r8
  int v16; // r9
  char *v17; // r3
  int v18; // r10
  int v19; // r6
  char *next_free; // r2
  bool v21; // zf
  _BOOL4 v22; // r9
  unsigned __int8 *v23; // r5
  int v24; // r7
  unsigned __int8 *v25; // r8
  unsigned __int8 *v26; // r10
  unsigned int v27; // r5
  int v28; // r4
  int v29; // r0
  bool v30; // zf
  bool v31; // cc
  int v32; // r6
  bool v33; // zf
  unsigned __int8 *i; // r3
  int v35; // t1
  bool v36; // zf
  size_t v37; // r6
  int v38; // r7
  unsigned __int8 *v39; // r4
  int v40; // r8
  _UNKNOWN **v41; // r4
  int v42; // r0
  const char *v43; // r1
  const char *v44; // r6
  const char *v45; // t1
  char **v46; // r8
  int v47; // r5
  unsigned __int8 *v48; // r10
  int v49; // r3
  int v50; // r0
  int v51; // r3
  bool v52; // zf
  int v53; // r2
  unsigned __int8 *v54; // r3
  bool v55; // zf
  int v56; // t1
  bool v57; // zf
  char *object_base; // r1
  char *v59; // r3
  int v60; // r2
  unsigned int v61; // r2
  const char *v62; // r0
  int v63; // [sp+8h] [bp-54h] BYREF
  int v64; // [sp+Ch] [bp-50h]
  unsigned __int8 *v65; // [sp+10h] [bp-4Ch]
  int *v66; // [sp+14h] [bp-48h]
  char *v67; // [sp+1Ch] [bp-40h] BYREF
  char v68[24]; // [sp+20h] [bp-3Ch] BYREF

  v66 = &dword_487CC0;
  v1 = (unsigned __int8 *)dword_487CC0;
  v64 = a1;
  v63 = dword_474FF0;
  dword_474FF0 = 0;
  while ( 2 )
  {
    v2 = 0;
    v3 = "^^=";
    v4 = 0;
    v65 = v1;
    dword_487CC4 = (int)v1;
    while ( 1 )
    {
      if ( !strncmp((const char *)v1, v3, 3u) )
      {
        v13 = &(&off_36715C)[3 * v4];
        *v66 = (int)(v1 + 3);
        result = (int)v13[108];
        dword_474FD8 = (int)v13[109];
        return result;
      }
      ++v4;
      v2 += 3;
      if ( v4 == 3 )
        break;
      v3 = (&off_367308)[v2];
    }
    v5 = &off_36732C;
    v6 = (const char *)&dword_364FD8;
    v7 = 0;
    while ( 1 )
    {
      if ( !strncmp((const char *)v1, v6, 2u) )
      {
        v9 = &(&off_36715C)[3 * v7];
        result = (int)v9[117];
        *v66 = (int)(v1 + 2);
        dword_474FD8 = (int)v9[118];
        return result;
      }
      if ( ++v7 == 20 )
        break;
      v8 = (const char *)v5[3];
      v5 += 3;
      v6 = v8;
    }
    v11 = v1 + 1;
    v12 = *v1;
    result = v12;
    switch ( *v1 )
    {
      case 0u:
        if ( dword_474FF4 )
        {
          dword_474FF4 = 0;
          return 261;
        }
        else
        {
          result = 261;
          if ( !v63 )
            return 0;
        }
        return result;
      case 9u:
      case 0xAu:
      case 0x20u:
        ++v1;
        *v66 = (int)v11;
        continue;
      case 0x21u:
      case 0x25u:
      case 0x26u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Du:
      case 0x2Fu:
      case 0x3Au:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
        v14 = v1 + 1;
        goto LABEL_15;
      case 0x22u:
      case 0x27u:
        v15 = v1 + 1;
        v67 = (char *)v1;
        if ( dword_474FF8 )
          obstack_free(&stru_474FFC, 0);
        else
          dword_474FF8 = 1;
        obstack_begin(&stru_474FFC, 0, 0, (void *(*)(int))sub_93028, sub_7F808);
        v16 = 0;
        v17 = v67 + 1;
        v18 = (unsigned __int8)*v67++;
LABEL_19:
        v19 = (unsigned __int8)*v17;
        if ( !*v17 )
          goto LABEL_25;
        do
        {
          if ( v19 == 92 )
          {
            v67 = v17 + 1;
            v50 = sub_759A8(&v67, &stru_474FFC);
            v17 = v67;
            v16 += v50;
            goto LABEL_19;
          }
          next_free = stru_474FFC.next_free;
          if ( v18 == v19 )
          {
            object_base = stru_474FFC.object_base;
            v59 = v17 + 1;
            v67 = v59;
            v60 = stru_474FFC.next_free - stru_474FFC.object_base;
            if ( v18 != 39 )
              goto LABEL_117;
            dword_474FE0 = stru_474FFC.next_free - stru_474FFC.object_base;
            dword_474FDC = (int)stru_474FFC.object_base;
            dword_474FD8 = 4;
            *v66 = (int)v59;
            if ( !v16 )
              sub_946E0("Empty character constant.");
            if ( v16 <= 2 )
            {
              if ( v16 != 2 )
                return 265;
LABEL_133:
              sub_946E0("Invalid character constant.");
            }
            if ( v12 != 39 )
              goto LABEL_133;
            v65 = v15;
            v38 = v59 - (char *)v15 - 1;
LABEL_82:
            v40 = 0;
            dword_474FDC = v38;
            v41 = &off_36741C;
            dword_474FD8 = (int)v65;
            v42 = sub_1C3E58(v65, v38);
            v43 = "is";
            v44 = (const char *)v42;
            while ( 1 )
            {
              if ( !strcmp(v44, v43) )
              {
                v46 = &(&off_36715C)[3 * v40];
                result = (int)v46[177];
                dword_474FD8 = (int)v46[178];
                return result;
              }
              if ( ++v40 == 22 )
                break;
              v45 = (const char *)v41[3];
              v41 += 3;
              v43 = v45;
            }
            if ( *v65 == 36 )
              return 289;
            dword_474FE0 = sub_1946C8(**(_DWORD **)(v64 + 4), *(_DWORD *)(*(_DWORD *)(v64 + 4) + 4), v44);
            if ( dword_474FE0 )
              return 260;
            v61 = *v65;
            if ( v61 <= 0x60 )
            {
              if ( v61 <= 0x40 )
                goto LABEL_127;
            }
            else if ( v61 < dword_46DE54 + 87 )
            {
              goto LABEL_125;
            }
            if ( v61 < dword_46DE54 + 55 )
            {
LABEL_125:
              if ( sub_7F814(v64, v65, v38, 0, (int)v68) == 263 )
                return 262;
            }
LABEL_127:
            if ( !dword_487CAC || *(_BYTE *)*v66 )
              return 258;
            dword_474FF4 = 1;
            return 258;
          }
          if ( stru_474FFC.chunk_limit == stru_474FFC.next_free )
          {
            obstack_newchunk(&stru_474FFC, 1);
            next_free = stru_474FFC.next_free;
          }
          ++v16;
          stru_474FFC.next_free = next_free + 1;
          *next_free = v19;
          v17 = v67 + 1;
          v67 = v17;
          v19 = (unsigned __int8)*v17;
        }
        while ( *v17 );
LABEL_25:
        if ( v18 )
        {
          v21 = v18 == 96;
          if ( v18 != 96 )
            v21 = v18 == 34;
          if ( !v21 )
            sub_946E0("Unmatched single quote.");
          sub_946E0("Unterminated string in expression.");
        }
        object_base = stru_474FFC.object_base;
        v59 = v17 + 1;
        v60 = stru_474FFC.next_free - stru_474FFC.object_base;
LABEL_117:
        dword_474FE0 = v60;
        dword_474FDC = (int)object_base;
        dword_474FD8 = 0;
        *v66 = (int)v59;
        return 266;
      case 0x28u:
        *v66 = (int)(v1 + 1);
        ++dword_487CC8;
        return result;
      case 0x29u:
        if ( !dword_487CC8 )
          return 0;
        --dword_487CC8;
        *v66 = (int)(v1 + 1);
        return result;
      case 0x2Cu:
        if ( !dword_487CCC || (result = dword_487CC8) != 0 )
        {
          *v66 = (int)(v1 + 1);
          return 44;
        }
        return result;
      case 0x2Eu:
        v14 = v1 + 1;
        if ( (unsigned int)v1[1] - 48 > 9 )
        {
          result = 46;
          if ( dword_487CAC )
            dword_474FF0 = 1;
LABEL_15:
          *v66 = (int)v14;
          return result;
        }
        v23 = v1;
        v22 = (unsigned int)dword_46DE54 > 0xA;
LABEL_35:
        v24 = 0;
        v63 = (int)v1;
        v25 = (unsigned __int8 *)v22;
        v26 = v23;
        v65 = (unsigned __int8 *)(v22 | 1);
        v27 = v12;
        v28 = 0;
        while ( 1 )
        {
          if ( v25 )
          {
            v32 = (v24 ^ 1) & v22;
            if ( v32 && tolower(v27 == 112) )
            {
              v24 = (v24 ^ 1) & v22;
              v27 = v26[1];
              v28 = v32;
              v25 = (unsigned __int8 *)(v32 | v22);
              goto LABEL_49;
            }
          }
          else if ( tolower(v27) == 101 )
          {
            v24 = 1;
            v27 = v26[1];
            v28 = 1;
            v25 = v65;
            goto LABEL_49;
          }
          if ( v28 || v27 != 46 )
          {
            if ( !v24 )
              goto LABEL_45;
            v29 = tolower(*(v26 - 1));
            v30 = v29 == 101;
            if ( v29 != 101 )
              v30 = v29 == 112;
            if ( !v30 || ((v27 - 43) & 0xFD) != 0 )
              goto LABEL_45;
            goto LABEL_48;
          }
          if ( v26[1] == 46 )
          {
            if ( !v24 )
            {
              v47 = (int)v26;
              v49 = 0;
              v48 = (unsigned __int8 *)v63;
              goto LABEL_90;
            }
LABEL_45:
            v31 = v27 > 0x5F;
            if ( v27 != 95 )
              v31 = v27 - 48 > 9;
            if ( v31 && (unsigned __int8)((v27 & 0xDF) - 65) > 0x19u )
            {
              v47 = (int)v26;
              v48 = (unsigned __int8 *)v63;
              v49 = v28;
LABEL_90:
              result = sub_7F814(v64, v48, v47 - (_DWORD)v48, v49 | v24, (int)&dword_474FD8);
              if ( result == 268 )
              {
                v62 = (const char *)memcpy(&v63, v48, v47 - (_DWORD)v48);
                *((_BYTE *)&v63 + v47 - (_DWORD)v48) = 0;
                sub_946E0("Invalid number \"%s\".", v62);
              }
              *v66 = v47;
              return result;
            }
LABEL_48:
            v27 = v26[1];
            goto LABEL_49;
          }
          v27 = v26[1];
          v28 = 1;
LABEL_49:
          ++v26;
        }
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
        v22 = (unsigned int)dword_46DE54 > 0xA;
        if ( v12 == 48 && (v1[1] & 0xDF) == 0x58 )
        {
          v12 = v1[2];
          v23 = v1 + 2;
          v22 = 1;
        }
        else
        {
          v23 = v1;
        }
        goto LABEL_35;
      default:
        v33 = v12 == 95;
        if ( v12 != 95 )
          v33 = v12 == 36;
        if ( !v33 && (v12 & 0xFFFFFFDF) - 65 > 0x19 )
          sub_946E0("Invalid character '%c' in expression", *v1);
        for ( i = v1; ; ++i )
        {
          v36 = result == 95;
          if ( result != 95 )
            v36 = result == 36;
          v37 = i - v1;
          v38 = i - v1;
          if ( !v36 && (unsigned int)(result - 48) > 9 && (result & 0xFFFFFFDF) - 65 > 0x19 )
            break;
          v35 = i[1];
          result = v35;
        }
        if ( v37 == 2 )
        {
          if ( v12 == 105 && v1[1] == 102 )
            return 0;
          v39 = v1 + 2;
        }
        else
        {
          v39 = i;
          if ( !v37 )
          {
LABEL_81:
            *v66 = (int)v39;
            goto LABEL_82;
          }
        }
        if ( strncmp((const char *)v1, "thread", v37) && strncmp((const char *)v1, "task", v37) )
          goto LABEL_81;
        v51 = *v39;
        v52 = v51 == 32;
        if ( v51 != 32 )
          v52 = v51 == 9;
        if ( !v52 )
          goto LABEL_81;
        v53 = v1[v37 + 1];
        v54 = &v1[v37 + 1];
        v55 = v53 == 32;
        if ( v53 != 32 )
          v55 = v53 == 9;
        if ( v55 )
        {
          do
          {
            v56 = *++v54;
            v53 = v56;
            v57 = v56 == 9;
            if ( v56 != 9 )
              v57 = v53 == 32;
          }
          while ( v57 );
        }
        if ( (unsigned int)(v53 - 48) > 9 )
          goto LABEL_81;
        return 0;
    }
  }
}
