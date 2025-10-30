int __fastcall sub_1FA9C0(_DWORD *a1, const char *a2, int a3, int a4, int a5, int a6)
{
  int v10; // r3
  int v11; // r0
  int result; // r0
  int v13; // r4
  _BYTE *v14; // r0
  int v15; // r0
  size_t v16; // r7
  int v17; // r0
  int v18; // r3
  int v19; // r6
  int v20; // r8
  int v21; // r3
  const char *v22; // r11
  int v23; // r0
  int v24; // r5
  const char *v25; // r6
  int v26; // r7
  char *v27; // r0
  char *v28; // r6
  int v29; // r3
  int v30; // r9
  int v31; // r8
  int v32; // r5
  char *v33; // r0
  char *v34; // r3
  int v35; // r3
  int v36; // r0
  int v37; // r5
  int v38; // r6
  int v39; // r0
  int v40; // r0
  char *v41; // r0
  int v42; // r0
  int v43; // r11
  int v44; // r6
  int v45; // r7
  int v46; // r0
  char *v47; // r0
  int v48; // [sp+10h] [bp-34h]
  int v49; // [sp+18h] [bp-2Ch]
  int v50; // [sp+20h] [bp-24h]
  int v51; // [sp+2Ch] [bp-18h]
  __int64 v52; // [sp+30h] [bp-14h] BYREF
  __int64 v53; // [sp+38h] [bp-Ch] BYREF

  sub_258BD4(a1);
  if ( a4 > 0 || (v10 = a1[6], (v11 = *(_DWORD *)(v10 + 8)) == 0) )
  {
    v13 = sub_171258(a1);
    v14 = *(_BYTE **)(v13 + 24);
    switch ( *v14 )
    {
      case 2:
        sub_25A6BC("[", a3);
        sub_1FA9C0(*(_DWORD *)(*(_DWORD *)(v13 + 24) + 20), 0, a3, a4 - 1, a5, a6);
        if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 24) + 24) + 12)
                                                              + 24)
                                                  + 24)
                                      + 16)
                          - 3) <= 1 )
        {
          sub_25A418(a3, "; variable length");
        }
        else if ( sub_171B30(v13, &v52, &v53) )
        {
          v41 = sub_988AC(v53 - v52 + 1);
          sub_25A418(a3, "; %s", v41);
        }
        return sub_25A6BC(&word_419FC8, a3);
      case 3:
        return sub_1FA768(v13, a2, a3, a4, a5, a6);
      case 4:
        if ( sub_1F925C((int)v14) )
          return sub_1FA768(v13, a2, a3, a4, a5, a6);
        sub_25A6BC("enum ", a3);
        v23 = *(_DWORD *)(*(_DWORD *)(v13 + 24) + 12);
        if ( v23 )
        {
          sub_25A6BC(v23, a3);
          sub_25A6BC(&word_3E1F84, a3);
        }
        sub_25A6BC("{\n", a3);
        v24 = *(_DWORD *)(v13 + 24);
        v25 = *(const char **)(*(_DWORD *)(v24 + 24) + 16);
        v26 = strncmp(v25, "RUST$ENCODED$ENUM$", 0x12u);
        if ( v26 )
        {
          v29 = *(__int16 *)(v24 + 4);
          v26 = v29 != 1;
        }
        else
        {
          v27 = strrchr(v25, 36);
          v28 = v27;
          if ( v27 && strlen(v27) > 1 )
          {
            sub_25A7C0(a5 + 2, a3, "%s,\n", v28 + 1);
            v24 = *(_DWORD *)(v13 + 24);
            v29 = *(__int16 *)(v24 + 4);
          }
          else
          {
            v29 = *(__int16 *)(v24 + 4);
            v26 = 1;
          }
        }
        if ( v29 <= 0 )
          return sub_25A6BC("}", a3);
        v49 = a4;
        v30 = 0;
        v48 = 24 * v26;
        v31 = a5 + 2;
        break;
      case 5:
        sub_25A6BC("enum ", a3);
        v15 = *(_DWORD *)(*(_DWORD *)(v13 + 24) + 12);
        if ( v15 )
        {
          sub_25A6BC(v15, a3);
          sub_25A6BC(&word_3E1F84, a3);
          v16 = strlen(*(const char **)(*(_DWORD *)(v13 + 24) + 12));
        }
        else
        {
          v16 = 0;
        }
        v17 = sub_25A6BC("{\n", a3);
        v18 = *(_DWORD *)(v13 + 24);
        if ( *(__int16 *)(v18 + 4) > 0 )
        {
          v19 = 0;
          v20 = 0;
          do
          {
            ++v20;
            v21 = *(_DWORD *)(v18 + 24) + v19;
            v19 += 24;
            v22 = *(const char **)(v21 + 16);
            sub_258BD4(v17);
            if ( v16
              && !strncmp(v22, *(const char **)(*(_DWORD *)(v13 + 24) + 12), v16)
              && v22[v16] == 58
              && v22[v16 + 1] == 58 )
            {
              v22 += v16 + 2;
            }
            v17 = sub_25A7C0(a5 + 2, a3, "%s,\n", v22);
            v18 = *(_DWORD *)(v13 + 24);
          }
          while ( *(__int16 *)(v18 + 4) > v20 );
        }
        return sub_25A6BC("}", a3);
      case 7:
        if ( (char)v14[1] < 0 )
          return sub_E9398(v13, a2, a3, a4, a5, a6);
        sub_25A6BC("fn ", a3);
        if ( a2 )
          sub_25A6BC(a2, a3);
        v36 = sub_25A6BC("(", a3);
        if ( *(__int16 *)(*(_DWORD *)(v13 + 24) + 4) > 0 )
        {
          v37 = 0;
          v38 = 0;
          sub_258BD4(v36);
          while ( 1 )
          {
            ++v38;
            v39 = *(_DWORD *)(*(_DWORD *)(v13 + 24) + 24) + v37;
            v37 += 24;
            v40 = sub_1FA9C0(*(_DWORD *)(v39 + 12), "", a3, -1, 0, a6);
            if ( *(__int16 *)(*(_DWORD *)(v13 + 24) + 4) <= v38 )
              break;
            sub_258BD4(v40);
            sub_25A6BC(", ", a3);
          }
        }
        result = sub_25A6BC(")", a3);
        if ( **(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v13 + 24) + 20) + 24) != 10 )
        {
          sub_25A6BC(" -> ", a3);
          return sub_1FA9C0(*(_DWORD *)(*(_DWORD *)(v13 + 24) + 20), "", a3, -1, 0, a6);
        }
        return result;
      case 0xA:
        return sub_25A6BC("()", a3);
      default:
        return sub_E9398(v13, a2, a3, a4, a5, a6);
    }
    while ( 1 )
    {
      v32 = *(_DWORD *)(*(_DWORD *)(v24 + 24) + 24 * v30 + 12);
      v33 = strrchr(*(const char **)(*(_DWORD *)(v32 + 24) + 8), 58);
      v34 = v33;
      if ( v33 )
        v34 = v33 + 1;
      sub_25A7C0(v31, a3, "%s", v34);
      v35 = *(_DWORD *)(v32 + 24);
      if ( *(__int16 *)(v35 + 4) <= v26 )
        goto LABEL_39;
      if ( *(_WORD *)(*(_DWORD *)(v13 + 24) + 4) == 1 )
      {
        v50 = sub_1FA398(v32);
      }
      else
      {
        if ( *(_BYTE *)v35 != 3 )
          goto LABEL_53;
        v50 = sub_1F91A0((int *)(v32 + 24), 1);
      }
      if ( !v50 )
      {
LABEL_53:
        sub_25A6BC("{", a3);
        v42 = *(_DWORD *)(v32 + 24);
        if ( v26 < *(__int16 *)(v42 + 4) )
        {
          v50 = 0;
LABEL_55:
          v43 = v48;
          v44 = v26;
          v51 = v26;
          v45 = v49 - 1;
          while ( 1 )
          {
            ++v44;
            v46 = *(_DWORD *)(v42 + 24) + v43;
            if ( v50 )
            {
              sub_1FA9C0(*(_DWORD *)(v46 + 12), 0, a3, v45, v31, a6);
              if ( *(__int16 *)(*(_DWORD *)(v32 + 24) + 4) <= v44 )
              {
                v26 = v51;
                goto LABEL_64;
              }
            }
            else
            {
              sub_25A418(a3, "%s: ", *(_DWORD *)(v46 + 16), v45);
              sub_1FA9C0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v32 + 24) + 24) + v43 + 12), 0, a3, v45, v31, a6);
              if ( *(__int16 *)(*(_DWORD *)(v32 + 24) + 4) <= v44 )
              {
                v26 = v51;
                break;
              }
            }
            sub_25A6BC(", ", a3);
            v43 += 24;
            v42 = *(_DWORD *)(v32 + 24);
          }
        }
        v47 = "}";
        goto LABEL_62;
      }
      sub_25A6BC("(", a3);
      v42 = *(_DWORD *)(v32 + 24);
      if ( v26 < *(__int16 *)(v42 + 4) )
        goto LABEL_55;
LABEL_64:
      v47 = ")";
LABEL_62:
      sub_25A6BC(v47, a3);
LABEL_39:
      ++v30;
      sub_25A6BC(",\n", a3);
      v24 = *(_DWORD *)(v13 + 24);
      if ( *(__int16 *)(v24 + 4) <= v30 )
        return sub_25A6BC("}", a3);
    }
  }
  if ( *(_BYTE *)v10 == 10 )
    return sub_25A6BC("()", a3);
  else
    return sub_25A6BC(v11, a3);
}
