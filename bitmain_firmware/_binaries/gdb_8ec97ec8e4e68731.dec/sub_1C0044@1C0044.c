int __fastcall sub_1C0044(int result, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r7
  int v8; // r3
  char *v9; // r3
  int v10; // r1
  char *v11; // r0
  int v12; // r1
  int v13; // r3
  const char *v14; // r1
  int v15; // r0
  int v16; // r4
  int v17; // r10
  __int64 v18; // r2
  int v19; // r1
  int v20; // r10
  int v21; // r10
  int v22; // r0
  int v23; // r10
  int v24; // r0
  int v25; // r2
  int v26; // r5
  int v27; // r12
  const char *v28; // r3
  int v29; // r2
  int v30; // r0
  const char *v31; // r2
  __int16 *v32; // r3
  char *v33; // r0
  int v34; // r2
  int v35; // r3
  int v36; // r2
  const char *v37; // r2
  int v38; // r3
  int v39; // r0
  int v40; // r0
  int v41; // r3
  int v42; // r2
  int v43; // r2
  __int16 *v44; // r2
  int v45; // r7
  __int64 v46; // r0
  unsigned int v47; // r2
  int v48; // r8
  int v49; // r5
  int v50; // r9
  int v51; // r2
  int v52; // r3
  int v53; // r2
  int v54; // r2
  __int16 *v55; // r3
  int v56; // r4
  int v57; // r3
  int v58; // r9
  int v59; // r2
  __int16 *v60; // r3
  int v61; // r3
  int v62; // r10
  const char **v63; // r4
  int v64; // r6
  int v65; // r3
  const char *v66; // r1
  int v67; // r3
  const char *v68; // r5
  int v69; // r7
  int v70; // r8
  int v71; // r3
  int v72; // r0
  int v73; // r6
  int v74; // r7
  __int64 v75; // r4
  __int64 v76; // r2
  bool v77; // zf
  __int64 v78; // r0
  char *v79; // r0
  int v81; // [sp+8h] [bp-2Ch]
  int v82; // [sp+Ch] [bp-28h]
  char *s2; // [sp+10h] [bp-24h]
  int v84; // [sp+1Ch] [bp-18h]
  int v85; // [sp+20h] [bp-14h]
  int v86; // [sp+24h] [bp-10h]
  int v87; // [sp+2Ch] [bp-8h]

  v5 = (_DWORD *)result;
  while ( 2 )
  {
    sub_258BD4(result);
    sub_259B58("    ");
    if ( !v5 )
      return sub_25A6BC("<type unknown>", a2);
    v8 = v5[6];
    if ( *(_BYTE *)v8 == 1 && **(_BYTE **)(*(_DWORD *)(v8 + 20) + 24) == 10 )
    {
      v11 = *(char **)(v8 + 8);
      v10 = a2;
      if ( !v11 )
        v11 = "pointer";
      return sub_25A6BC(v11, v10);
    }
    if ( a3 <= 0 )
    {
      v9 = *(char **)(v8 + 8);
      if ( v9 )
      {
        v10 = a2;
        v11 = v9;
        return sub_25A6BC(v11, v10);
      }
    }
    result = sub_171258(v5);
    v13 = *(_DWORD *)(result + 24);
    switch ( *(_BYTE *)v13 )
    {
      case 0:
        v14 = "record <unknown>";
        v15 = a2;
        return sub_25A418(v15, v14);
      case 1:
      case 0x12:
      case 0x17:
        v5 = *(_DWORD **)(v13 + 20);
        continue;
      case 2:
        return sub_1C13F0(*(_DWORD *)(v13 + 20), 0, a2, 0, 0, a5);
      case 3:
        v23 = result;
        v39 = *(_DWORD *)(v13 + 12);
        if ( v39 )
        {
          sub_25A6BC(v39, a2);
          sub_25A6BC(" = ", a2);
          v13 = *(_DWORD *)(v23 + 24);
        }
        if ( (*(_WORD *)(v13 + 2) & 0x380) != 0x80 || *(__int16 **)(v13 + 28) == &word_3B4A2C )
          sub_25A418(a2, "record ");
        else
          sub_25A418(a2, "class ");
        goto LABEL_31;
      case 4:
        v23 = result;
        v24 = *(_DWORD *)(v13 + 12);
        if ( v24 )
        {
          sub_25A6BC(v24, a2);
          sub_25A6BC(" = ", a2);
        }
        sub_25A418(a2, "case <?> of ");
LABEL_31:
        result = sub_259B58("    ");
        if ( a3 < 0 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v23 + 24) + 12) )
            return result;
          v14 = "{...}";
          v15 = a2;
          return sub_25A418(v15, v14);
        }
        v25 = *(_DWORD *)(v23 + 24);
        if ( a3 || !*(_DWORD *)(v25 + 12) )
        {
          v26 = 0;
          while ( 1 )
          {
            if ( (*(_WORD *)(v25 + 2) & 0x380) == 0x80 )
              v32 = *(__int16 **)(v25 + 28);
            else
              v32 = &word_3B4A2C;
            if ( *v32 <= v26 )
            {
              if ( v26 )
                sub_25A6BC(&word_3E1F84, a2);
              v40 = sub_25A418(a2, (const char *)&word_356638);
              v41 = *(_DWORD *)(v23 + 24);
              v82 = *(__int16 *)(v41 + 4);
              v42 = *(_WORD *)(v41 + 2) & 0x380;
              if ( !*(_WORD *)(v41 + 4) )
              {
                if ( v42 == 128 )
                {
                  v44 = *(__int16 **)(v41 + 28);
                  if ( v44[2] )
                  {
LABEL_77:
                    v45 = *v44;
                    if ( v45 >= v82 )
                    {
                      if ( (*(_WORD *)(v41 + 2) & 0x380) != 0x80 )
                      {
                        v87 = 0;
                        v56 = 0;
                        goto LABEL_112;
                      }
                      v54 = 0;
                      v87 = 0;
LABEL_166:
                      v55 = *(__int16 **)(v41 + 28);
                      goto LABEL_107;
                    }
                    v87 = 0;
                    while ( 2 )
                    {
                      sub_258BD4(v40);
                      v48 = *(_DWORD *)(v23 + 24);
                      v49 = 24 * v45;
                      v50 = *(_DWORD *)(*(_DWORD *)(v48 + 24) + 24 * v45 + 16);
                      if ( !strncmp((const char *)v50, "_vptr", 5u) )
                      {
                        v40 = sub_10A844(*(unsigned __int8 *)(v50 + 5));
                        if ( !v40 )
                        {
                          v48 = *(_DWORD *)(v23 + 24);
                          goto LABEL_79;
                        }
                      }
                      else
                      {
LABEL_79:
                        if ( (*(_WORD *)(v48 + 2) & 0x380) == 0x80 )
                        {
                          v51 = *(_DWORD *)(v48 + 28);
                          if ( (__int16 *)v51 != &word_3B4A2C )
                          {
                            v52 = *(_DWORD *)(v51 + 24);
                            if ( v52 && (((int)*(unsigned __int8 *)(v52 + (v45 >> 3)) >> (v45 & 7)) & 1) != 0 )
                            {
                              if ( v87 != 3 )
                              {
                                sub_25A7C0(a4 + 2, a2, "protected\n");
                                v87 = 3;
                              }
                            }
                            else
                            {
                              v71 = *(_DWORD *)(v51 + 20);
                              if ( v71 && (((int)*(unsigned __int8 *)(v71 + (v45 >> 3)) >> (v45 & 7)) & 1) != 0 )
                              {
                                if ( v87 != 2 )
                                {
                                  sub_25A7C0(a4 + 2, a2, "private\n");
                                  v87 = 2;
                                }
                              }
                              else if ( v87 != 1 )
                              {
                                v87 = 1;
                                sub_25A7C0(a4 + 2, a2, "public\n");
                              }
                            }
                          }
                        }
                        sub_25A7A0(a4 + 4, a2);
                        if ( sub_174F0C(*(_DWORD *)(*(_DWORD *)(v23 + 24) + 24) + v49) )
                          sub_25A418(a2, "static ");
                        v46 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v23 + 24) + 24) + v49 + 12);
                        sub_1C13F0(v46, HIDWORD(v46), a2, a3 - 1, a4 + 4, a5);
                        if ( !sub_174F0C(*(_DWORD *)(*(_DWORD *)(v23 + 24) + 24) + v49) )
                        {
                          v47 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v23 + 24) + 24) + v49 + 8);
                          if ( (v47 & 0xFFFFFFF0) != 0 )
                            sub_25A418(a2, " : %d", v47 >> 4, v47 & 0xFFFFFFF0);
                        }
                        v40 = sub_25A418(a2, ";\n");
                      }
                      if ( ++v45 == v82 )
                      {
                        v41 = *(_DWORD *)(v23 + 24);
                        v54 = v87;
                        if ( v87 )
                          v54 = 1;
                        if ( (*(_WORD *)(v41 + 2) & 0x380) != 0x80 )
                        {
                          v55 = &word_3B4A2C;
LABEL_107:
                          v56 = v55[2];
                          if ( v55[2] )
                            v57 = v54;
                          else
                            v57 = 0;
                          if ( v57 )
                            sub_25A418(a2, (const char *)&word_356638);
LABEL_112:
                          if ( v56 > 0 )
                          {
                            v58 = v87;
                            v86 = v23;
                            v85 = 12 * v56;
                            v84 = 0;
                            do
                            {
                              v59 = *(_DWORD *)(v86 + 24);
                              if ( (*(_WORD *)(v59 + 2) & 0x380) == 0x80 )
                                v60 = *(__int16 **)(v59 + 28);
                              else
                                v60 = &word_3B4A2C;
                              v61 = *((_DWORD *)v60 + 8) + v84;
                              v62 = *(_DWORD *)(v61 + 4);
                              v63 = *(const char ***)(v61 + 8);
                              s2 = *(char **)v61;
                              if ( v62 > 0 )
                              {
                                v64 = 0;
                                while ( 1 )
                                {
                                  v68 = *v63;
                                  v69 = strncmp(*v63, "__ct__", 6u);
                                  v70 = strncmp(v68, "__dt__", 6u);
                                  sub_258BD4(v70);
                                  if ( ((_BYTE)v63[3] & 8) != 0 )
                                  {
                                    if ( v58 != 3 )
                                    {
                                      v58 = 3;
                                      sub_25A7C0(a4 + 2, a2, "protected\n");
                                    }
                                  }
                                  else if ( ((_BYTE)v63[3] & 4) != 0 )
                                  {
                                    if ( v58 != 2 )
                                    {
                                      v58 = 2;
                                      sub_25A7C0(a4 + 2, a2, "private\n");
                                    }
                                  }
                                  else if ( v58 != 1 )
                                  {
                                    v58 = 1;
                                    sub_25A7C0(a4 + 2, a2, "public\n");
                                  }
                                  sub_25A7A0(a4 + 4, a2);
                                  if ( *((_WORD *)v63 + 7) == 1 )
                                    sub_25A418(a2, "static ");
                                  v65 = *(_DWORD *)(*((_DWORD *)v63[1] + 6) + 20);
                                  if ( !v65 )
                                    break;
                                  if ( v69 )
                                  {
                                    if ( v70 )
                                    {
                                      if ( **(_BYTE **)(v65 + 24) == 10 )
                                        LOWORD(v66) = -21928;
                                      else
                                        LOWORD(v66) = -21940;
                                      HIWORD(v66) = 60;
                                      sub_25A418(a2, v66);
                                    }
                                    else
                                    {
                                      sub_25A418(a2, "destructor  ");
                                    }
                                  }
                                  else
                                  {
                                    sub_25A418(a2, "constructor ");
                                  }
                                  sub_1BFEF8(v68, (int)s2, a2);
                                  v67 = *(_DWORD *)(*((_DWORD *)v63[1] + 6) + 20);
                                  if ( v67 && **(_BYTE **)(v67 + 24) != 10 )
                                  {
                                    sub_25A6BC(&off_3A6E68, a2);
                                    sub_255DB0(*(_DWORD *)(*((_DWORD *)v63[1] + 6) + 20), "", a2, -1);
                                  }
                                  if ( *((unsigned __int16 *)v63 + 7) > 1u )
                                    sub_25A418(a2, "; virtual");
                                  ++v64;
                                  sub_25A418(a2, ";\n");
                                  v63 += 4;
                                  if ( v64 == v62 )
                                    goto LABEL_145;
                                }
                                sub_25A418(a2, "<undefined type> %s;\n", *v63);
                              }
LABEL_145:
                              v77 = v85 == v84 + 12;
                              v84 += 12;
                            }
                            while ( !v77 );
                          }
                          return sub_25A7C0(a4, a2, "end");
                        }
                        goto LABEL_166;
                      }
                      continue;
                    }
                  }
                }
                if ( (*(_BYTE *)(v41 + 1) & 4) != 0 )
                  LOWORD(v43) = -20272;
                else
                  LOWORD(v43) = -20252;
                HIWORD(v43) = 56;
                v40 = sub_25A7C0(a4 + 4, a2, v43);
                v41 = *(_DWORD *)(v23 + 24);
                v42 = *(_WORD *)(v41 + 2) & 0x380;
                v82 = *(__int16 *)(v41 + 4);
              }
              if ( v42 == 128 )
                v44 = *(__int16 **)(v41 + 28);
              else
                v44 = &word_3B4A2C;
              goto LABEL_77;
            }
            v33 = v26 ? ", " : (char *)&word_3B6A00;
            sub_25A6BC(v33, a2);
            v34 = *(_DWORD *)(v23 + 24);
            if ( (*(_WORD *)(v34 + 2) & 0x380) != 0x80 )
              break;
            v35 = *(_DWORD *)(v34 + 28);
            if ( (__int16 *)v35 == &word_3B4A2C )
              break;
            v36 = *(_DWORD *)(v35 + 20);
            if ( v36 && (*(unsigned __int8 *)(v36 + (v26 >> 3)) & (1 << (v26 & 7))) != 0
              || (v53 = *(_DWORD *)(v35 + 24)) != 0 && (*(unsigned __int8 *)(v53 + (v26 >> 3)) & (1 << (v26 & 7))) != 0 )
            {
              v37 = "private";
              if ( (__int16 *)v35 == &word_3B4A2C )
                goto LABEL_55;
            }
            else
            {
              v37 = "public";
            }
            v38 = *(_DWORD *)(v35 + 16);
            if ( !v38 )
              goto LABEL_55;
            v27 = *(unsigned __int8 *)(v38 + (v26 >> 3));
            v28 = "";
            if ( ((v27 >> (v26 & 7)) & 1) != 0 )
              v28 = " virtual";
LABEL_39:
            sub_25A418(a2, "%s%s ", v37, v28);
            v29 = 3 * v26++;
            v30 = sub_170CC4(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v23 + 24) + 24) + 8 * v29 + 12));
            v31 = "(null)";
            if ( v30 )
              v31 = (const char *)v30;
            sub_25A418(a2, "%s", v31);
            v25 = *(_DWORD *)(v23 + 24);
          }
          v37 = "public";
LABEL_55:
          v28 = "";
          goto LABEL_39;
        }
        return result;
      case 5:
        v21 = result;
        v22 = *(_DWORD *)(v13 + 12);
        if ( v22 )
        {
          sub_25A6BC(v22, a2);
          if ( a3 > 0 )
          {
            sub_25A6BC(&word_3E1F84, a2);
            sub_25A418(a2, " = ");
            sub_259B58("    ");
LABEL_156:
            v72 = sub_25A418(a2, "(");
            v81 = *(__int16 *)(*(_DWORD *)(v21 + 24) + 4);
            if ( v81 > 0 )
            {
              sub_258BD4(v72);
              v73 = 0;
              v74 = 0;
              v75 = 0;
              while ( 1 )
              {
                sub_259B58("    ");
                sub_25A6BC(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + 24) + 24) + v73 + 16), a2);
                v76 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + 24) + 24) + v73);
                v77 = HIDWORD(v76) == HIDWORD(v75);
                LODWORD(v78) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + 24) + 24) + v73);
                if ( HIDWORD(v76) == HIDWORD(v75) )
                  v77 = (_DWORD)v76 == (_DWORD)v75;
                if ( !v77 )
                {
                  HIDWORD(v78) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + 24) + 24) + v73 + 4);
                  v79 = sub_988AC(v78);
                  LODWORD(v78) = sub_25A418(a2, " := %s", v79);
                  v75 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + 24) + 24) + v73);
                }
                ++v74;
                ++v75;
                v73 += 24;
                if ( v81 == v74 )
                  break;
                sub_258BD4(v78);
                sub_25A418(a2, ", ");
              }
            }
            v14 = ")";
            v15 = a2;
            return sub_25A418(v15, v14);
          }
        }
        sub_25A418(a2, " = ");
        result = sub_259B58("    ");
        if ( a3 >= 0 )
        {
          if ( !a3 && *(_DWORD *)(*(_DWORD *)(v21 + 24) + 12) )
            return result;
          goto LABEL_156;
        }
        if ( *(_DWORD *)(*(_DWORD *)(v21 + 24) + 12) )
          return result;
        v14 = "(...)";
        v15 = a2;
        return sub_25A418(v15, v14);
      case 7:
      case 0xF:
        return result;
      case 0xA:
        v14 = "void";
        v15 = a2;
        return sub_25A418(v15, v14);
      case 0xB:
        v20 = result;
        sub_25A6BC("set of ", a2);
        return sub_1C13F0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v20 + 24) + 24) + 12), "", a2, a3 - 1, a4, a5);
      case 0xC:
        v16 = *(_DWORD *)(v13 + 20);
        v17 = result;
        sub_255F50(v16, v12, *(_DWORD *)(*(_DWORD *)(v13 + 24) + 8), *(_DWORD *)(*(_DWORD *)(v13 + 24) + 12), a2);
        sub_25A6BC(&word_3BB850, a2);
        v18 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v17 + 24) + 24) + 24);
        return sub_255F50(v16, v19, v18, HIDWORD(v18), a2);
      case 0xD:
        v11 = "String";
        v10 = a2;
        return sub_25A6BC(v11, v10);
      case 0xE:
        v14 = "%s";
        v15 = a2;
        return sub_25A418(v15, v14);
      default:
        v11 = *(char **)(v13 + 8);
        if ( v11 )
        {
          v10 = a2;
          return sub_25A6BC(v11, v10);
        }
        v14 = "<invalid unnamed pascal type code %d>";
        v15 = a2;
        return sub_25A418(v15, v14);
    }
  }
}
