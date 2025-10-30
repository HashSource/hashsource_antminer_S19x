int __fastcall sub_853EC(int a1)
{
  unsigned __int8 *v1; // r4
  int v2; // r5
  const char *v3; // r1
  int v4; // r10
  int **v5; // r5
  int v6; // r10
  const char *i; // r1
  const char *v8; // t1
  char **v9; // r10
  int result; // r0
  int v11; // r5
  char **v12; // r5
  int v13; // r10
  unsigned __int8 *v14; // r10
  int v15; // r9
  unsigned __int8 *v16; // r1
  int v17; // r8
  int v18; // r4
  char *next_free; // r0
  _BOOL4 v20; // r2
  int v21; // r6
  int v22; // r3
  int v23; // r12
  int v24; // r0
  int v25; // t1
  const char *v26; // r0
  unsigned __int8 *v27; // r4
  const char *v28; // r5
  int v29; // r4
  int v30; // r0
  _BOOL4 v31; // r3
  bool v32; // zf
  unsigned __int8 *j; // r3
  int v34; // t1
  bool v35; // zf
  size_t v36; // r8
  int v37; // r9
  unsigned __int8 *v38; // r5
  int v39; // r3
  bool v40; // zf
  size_t v41; // r8
  int v42; // r3
  unsigned __int8 *v43; // r4
  bool v44; // zf
  int v45; // t1
  bool v46; // zf
  int v47; // r4
  char **v48; // r5
  int v49; // r0
  const char *v50; // r1
  const char *v51; // r8
  const char *v52; // t1
  int v53; // r0
  char **v54; // r4
  char *object_base; // r12
  int v56; // r1
  int v57; // r0
  int v58; // [sp+8h] [bp-3Ch] BYREF
  int v59; // [sp+Ch] [bp-38h]
  unsigned __int8 *v60; // [sp+10h] [bp-34h]
  int v61; // [sp+14h] [bp-30h]
  unsigned __int8 *v62; // [sp+1Ch] [bp-28h] BYREF

  v1 = (unsigned __int8 *)dword_487CC0;
  v61 = (int)&dword_364FD8;
  v59 = a1;
  v58 = dword_4750D0;
  dword_4750D0 = 0;
  while ( 2 )
  {
    v2 = 0;
    v3 = (const char *)&off_364FD0;
    v4 = 0;
    v60 = v1;
    dword_487CC4 = (int)v1;
    while ( 1 )
    {
      if ( !strncmp((const char *)v1, v3, 3u) )
      {
        v12 = &(&off_3692EC)[3 * v4];
        dword_487CC0 = (int)(v1 + 3);
        result = (int)v12[83];
        dword_4750D8 = (int)v12[84];
        return result;
      }
      ++v4;
      v2 += 3;
      if ( v4 == 3 )
        break;
      v3 = (const char *)(&off_369434)[v2];
    }
    v5 = &off_369458;
    v6 = 0;
    for ( i = (const char *)v61; ; i = v8 )
    {
      if ( !strncmp((const char *)v1, i, 2u) )
      {
        v9 = &(&off_3692EC)[3 * v6];
        dword_487CC0 = (int)(v1 + 2);
        result = (int)v9[92];
        dword_4750D8 = (int)v9[93];
        return result;
      }
      if ( ++v6 == 19 )
        break;
      v8 = (const char *)v5[3];
      v5 += 3;
    }
    v11 = *v1;
    result = v11;
    switch ( *v1 )
    {
      case 0u:
        if ( dword_4750F0 )
        {
          dword_4750F0 = 0;
          return 265;
        }
        else
        {
          result = 265;
          if ( !v58 )
            return 0;
        }
        return result;
      case 9u:
      case 0xAu:
      case 0x20u:
        dword_487CC0 = (int)++v1;
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
      case 0x5Eu:
      case 0x7Bu:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
        v13 = (int)(v1 + 1);
        goto LABEL_15;
      case 0x22u:
      case 0x27u:
      case 0x60u:
        v14 = v1 + 1;
        v62 = v1;
        if ( dword_4750F4 )
          obstack_free(&stru_4750F8, 0);
        else
          dword_4750F4 = 1;
        obstack_begin(&stru_4750F8, 0, 0, (void *(*)(int))sub_93028, sub_84DC0);
        v15 = 0;
        v16 = v62 + 1;
        v17 = *v62++;
        v61 = (int)&v62;
LABEL_19:
        v18 = *v16;
        if ( !*v16 )
          goto LABEL_25;
        do
        {
          if ( v18 == 92 )
          {
            v62 = v16 + 1;
            v53 = sub_759A8((char **)v61, &stru_4750F8);
            v16 = v62;
            v15 += v53;
            goto LABEL_19;
          }
          next_free = stru_4750F8.next_free;
          if ( v17 == v18 )
          {
            object_base = stru_4750F8.object_base;
            v56 = (int)(v16 + 1);
            v57 = stru_4750F8.next_free - stru_4750F8.object_base;
            if ( v17 != 39 )
              goto LABEL_113;
            dword_4750DC = (int)stru_4750F8.object_base;
            dword_4750E0 = stru_4750F8.next_free - stru_4750F8.object_base;
            dword_487CC0 = v56;
            dword_4750D8 = 4;
            if ( !v15 )
              sub_946E0("Empty character constant.");
            if ( v15 <= 2 )
            {
              if ( v15 != 2 )
                return 262;
            }
            else if ( v11 == 39 )
            {
              v60 = v14;
              v37 = v56 - (_DWORD)v14 - 1;
LABEL_96:
              v47 = 0;
              dword_4750DC = v37;
              v48 = &off_36953C;
              dword_4750D8 = (int)v60;
              v49 = sub_1C3E58(v60, v37);
              v50 = "true";
              v51 = (const char *)v49;
              while ( 1 )
              {
                if ( !strcmp(v51, v50) )
                {
                  v54 = &(&off_3692EC)[3 * v47];
                  result = (int)v54[149];
                  dword_4750D8 = (int)v54[150];
                  return result;
                }
                if ( ++v47 == 13 )
                  break;
                v52 = v48[3];
                v48 += 3;
                v50 = v52;
              }
              if ( *v60 == 36 )
                return 284;
              if ( !dword_487CAC || *(_BYTE *)dword_487CC0 )
                return 263;
              dword_4750F0 = 1;
              return 263;
            }
            sub_946E0("Invalid character constant.");
          }
          if ( stru_4750F8.chunk_limit == stru_4750F8.next_free )
          {
            obstack_newchunk(&stru_4750F8, 1);
            next_free = stru_4750F8.next_free;
          }
          ++v15;
          stru_4750F8.next_free = next_free + 1;
          *next_free = v18;
          v16 = v62 + 1;
          v62 = v16;
          v18 = *v16;
        }
        while ( *v16 );
LABEL_25:
        if ( v17 )
        {
          if ( v17 != 34 )
            sub_946E0("Unmatched single quote.");
          sub_946E0("Unterminated string in expression.");
        }
        object_base = stru_4750F8.object_base;
        v56 = (int)(v16 + 1);
        v57 = stru_4750F8.next_free - stru_4750F8.object_base;
LABEL_113:
        dword_4750E0 = v57;
        dword_487CC0 = v56;
        dword_4750DC = (int)object_base;
        dword_4750D8 = 0;
        return 261;
      case 0x28u:
      case 0x5Bu:
        dword_487CC0 = (int)(v1 + 1);
        ++dword_487CC8;
        return result;
      case 0x29u:
      case 0x5Du:
        if ( !dword_487CC8 )
          return 0;
        dword_487CC0 = (int)(v1 + 1);
        --dword_487CC8;
        return result;
      case 0x2Cu:
        if ( !dword_487CCC || (result = dword_487CC8) != 0 )
        {
          dword_487CC0 = (int)(v1 + 1);
          return 44;
        }
        return result;
      case 0x2Eu:
        v13 = (int)(v1 + 1);
        if ( (unsigned int)v1[1] - 48 > 9 )
        {
          result = 46;
          if ( dword_487CAC )
            dword_4750D0 = 1;
          goto LABEL_15;
        }
        v21 = (int)v1;
        v20 = (unsigned int)dword_46DE54 > 0xA;
LABEL_32:
        v22 = 0;
        v23 = v20 | 1;
        v24 = 0;
        while ( 2 )
        {
          if ( v20 || (v11 & 0xDF) != 0x45 )
          {
            if ( !v24 && v11 == 46 )
            {
              v24 = 1;
            }
            else if ( (!v22 || (*(_BYTE *)(v21 - 1) & 0xDF) != 0x45 || ((v11 - 43) & 0xFD) != 0)
                   && (unsigned int)(v11 - 48) > 9
                   && (unsigned __int8)((v11 & 0xDF) - 65) > 0x19u )
            {
              result = sub_84DCC(v59, v1, v21 - (_DWORD)v1, v24 | v22, (int)&dword_4750D8);
              if ( result == 282 )
              {
                v26 = (const char *)memcpy(&v58, v1, v21 - (_DWORD)v1);
                *((_BYTE *)&v58 + v21 - (_DWORD)v1) = 0;
                sub_946E0("Invalid number \"%s\".", v26);
              }
              dword_487CC0 = v21;
              return result;
            }
          }
          else
          {
            v22 = 1;
            v20 = v23;
            v24 = 1;
          }
          v25 = *(unsigned __int8 *)++v21;
          v11 = v25;
          continue;
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
        v20 = (unsigned int)dword_46DE54 > 0xA;
        if ( v11 == 48 && (v1[1] & 0xDF) == 0x58 )
        {
          v11 = v1[2];
          v21 = (int)(v1 + 2);
          v20 = 1;
        }
        else
        {
          v21 = (int)v1;
        }
        goto LABEL_32;
      case 0x40u:
        v13 = (int)(v1 + 1);
        v27 = v1 + 1;
        do
          v28 = (const char *)v27++;
        while ( isspace(*(unsigned __int8 *)v28) );
        if ( strncmp(v28, "entry", 5u) )
          goto LABEL_54;
        v29 = *((unsigned __int8 *)v28 + 5);
        v30 = isalnum(v29);
        v31 = v29 != 95;
        if ( v30 )
          v31 = 0;
        if ( v31 )
        {
          dword_487CC0 = (int)(v28 + 5);
          return 281;
        }
        else
        {
LABEL_54:
          result = 64;
LABEL_15:
          dword_487CC0 = v13;
        }
        return result;
      default:
        v32 = v11 == 95;
        if ( v11 != 95 )
          v32 = v11 == 36;
        if ( !v32 && (v11 & 0xFFFFFFDF) - 65 > 0x19 )
          sub_946E0("Invalid character '%c' in expression.", *v1);
        for ( j = v1; ; ++j )
        {
          v35 = result == 95;
          if ( result != 95 )
            v35 = result == 36;
          v36 = j - v1;
          v37 = j - v1;
          if ( !v35 && (unsigned int)(result - 48) > 9 && (result & 0xFFFFFFDF) - 65 > 0x19 )
            break;
          v34 = j[1];
          result = v34;
        }
        if ( v36 == 2 )
        {
          if ( v11 == 105 && v1[1] == 102 )
            return 0;
          v38 = v1 + 2;
        }
        else
        {
          v38 = j;
          if ( !v36 )
            goto LABEL_95;
        }
        result = strncmp((const char *)v1, "thread", v36);
        if ( !result )
        {
          v39 = *v38;
          v40 = v39 == 32;
          if ( v39 != 32 )
            v40 = v39 == 9;
          if ( v40 )
          {
            v41 = v36 + 1;
            v42 = v1[v41];
            v43 = &v1[v41];
            v44 = v42 == 32;
            if ( v42 != 32 )
              v44 = v42 == 9;
            if ( v44 )
            {
              do
              {
                v45 = *++v43;
                v42 = v45;
                v46 = v45 == 9;
                if ( v45 != 9 )
                  v46 = v42 == 32;
              }
              while ( v46 );
            }
            if ( (unsigned int)(v42 - 48) <= 9 )
              return result;
          }
        }
LABEL_95:
        dword_487CC0 = (int)v38;
        goto LABEL_96;
    }
  }
}
