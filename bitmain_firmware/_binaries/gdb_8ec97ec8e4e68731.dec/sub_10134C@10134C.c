int __fastcall sub_10134C(int a1, int a2, __int64 a3, int a4, int a5, int block, void *a7, int *a8, int a9, int a10)
{
  int v10; // r4
  int v11; // r2
  bool v12; // zf
  int v13; // r5
  int v14; // r1
  int v15; // r6
  int v16; // r5
  int v17; // r8
  int v18; // r3
  __int16 *v19; // r1
  void *v20; // r0
  int v21; // r2
  void *v22; // r3
  int v23; // r0
  __int64 v24; // kr00_8
  __int64 v25; // r2
  int v26; // r1
  int v27; // r7
  int v28; // r3
  int v29; // r0
  int v30; // r1
  int v31; // r1
  int v32; // r0
  int v33; // r2
  unsigned int v34; // r0
  int v36; // r5
  void *v37; // r6
  int v38; // r2
  int v39; // r6
  char *v40; // r3
  __int64 v41; // kr18_8
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r2
  int v46; // r8
  int v47; // r3
  int v48; // r3
  int v49; // r0
  int v50; // r3
  int v51; // r3
  int v52; // r3
  char *v53; // r0
  char *v54; // r2
  int v55; // r3
  int v56; // t1
  void *v57; // r8
  int v58; // r7
  char *v59; // r2
  int v60; // r3
  int v61; // r8
  char *v62; // r0
  unsigned int v63; // r2
  char *v64; // r1
  int v65; // t1
  bool v66; // cf
  int v67; // r0
  int v68; // r2
  void *v69; // r0
  int v70; // r6
  int v71; // r0
  void *v72; // r8
  __int16 *v73; // r3
  int v74; // r0
  int v75; // r3
  int v76; // r3
  struct _obstack_chunk *v77; // r1
  unsigned int v78; // r4
  int v79; // r8
  int v80; // r0
  int v81; // t1
  int v82; // r8
  int *v83; // r1
  __int64 v84; // r0
  char object_base; // r2
  bool v86; // zf
  char *chunk_limit; // r3
  int v88; // r1
  int v89; // r8
  int v90; // r7
  int v91; // r0
  void *src; // [sp+10h] [bp-BCh]
  int v93; // [sp+24h] [bp-A8h]
  int v95; // [sp+30h] [bp-9Ch]
  __int64 v96; // [sp+30h] [bp-9Ch]
  int v97; // [sp+30h] [bp-9Ch]
  int v98; // [sp+38h] [bp-94h]
  char *v99; // [sp+3Ch] [bp-90h]
  char *v100; // [sp+40h] [bp-8Ch]
  void *v101; // [sp+40h] [bp-8Ch]
  int v102; // [sp+44h] [bp-88h]
  int v103; // [sp+44h] [bp-88h]
  int v104; // [sp+44h] [bp-88h]
  __int64 v106; // [sp+4Ch] [bp-80h]
  int v107; // [sp+4Ch] [bp-80h]
  int v108; // [sp+4Ch] [bp-80h]
  int v109; // [sp+4Ch] [bp-80h]
  unsigned int v110; // [sp+50h] [bp-7Ch]
  unsigned int v111; // [sp+54h] [bp-78h]
  int v112; // [sp+54h] [bp-78h]
  void *v113; // [sp+60h] [bp-6Ch]
  __int64 v114; // [sp+60h] [bp-6Ch]
  void *v115; // [sp+60h] [bp-6Ch]
  void *v116; // [sp+60h] [bp-6Ch]
  struct _obstack_chunk *next_free; // [sp+70h] [bp-5Ch]
  int v118; // [sp+78h] [bp-54h] BYREF
  _BYTE dest[76]; // [sp+7Ch] [bp-50h] BYREF

  v10 = sub_171258(a1);
  if ( block )
    goto LABEL_4;
  if ( dword_47B1BC != dword_47B1B8 )
  {
    obstack_free((struct obstack *)&unk_47B1B0, 0);
    obstack_begin((struct obstack *)&unk_47B1B0, 128, 0, (void *(*)(int))sub_93028, sub_101178);
    if ( stru_47B1DC.next_free == stru_47B1DC.object_base )
      goto LABEL_4;
    goto LABEL_76;
  }
  if ( stru_47B1DC.next_free != stru_47B1DC.object_base )
  {
LABEL_76:
    obstack_free(&stru_47B1DC, 0);
    obstack_begin(&stru_47B1DC, 128, 0, (void *(*)(int))sub_93028, sub_101178);
  }
LABEL_4:
  sub_25A418(a5, "{");
  v11 = *(_DWORD *)(v10 + 24);
  v98 = *(__int16 *)(v11 + 4);
  if ( (*(_WORD *)(v11 + 2) & 0x380) != 0x80 )
  {
    v93 = 0;
    goto LABEL_6;
  }
  v73 = *(__int16 **)(v11 + 28);
  if ( v73 == &word_3B4A2C )
  {
    v93 = 0;
    goto LABEL_6;
  }
  v93 = *v73;
  if ( v93 > 0 )
  {
    next_free = (struct _obstack_chunk *)stru_47B208.next_free;
    v113 = (void *)(block + 1);
    *(struct obstack *)dest = stru_47B208;
    v112 = sub_26E718(a7, stru_47B208.extra_arg);
    if ( !a9 )
    {
      object_base = (char)stru_47B208.object_base;
      v86 = stru_47B208.object_base == stru_47B208.next_free;
      if ( stru_47B208.object_base == stru_47B208.next_free )
        object_base = *((_BYTE *)&stru_47B208 + 40);
      chunk_limit = (char *)((int)&stru_47B208.next_free[stru_47B208.alignment_mask] & ~stru_47B208.alignment_mask);
      stru_47B208.next_free = chunk_limit;
      if ( v86 )
        *((_BYTE *)&stru_47B208 + 40) = object_base | 2;
      if ( (char *)(chunk_limit - (char *)stru_47B208.chunk) > (char *)(stru_47B208.chunk_limit
                                                                      - (char *)stru_47B208.chunk) )
      {
        chunk_limit = stru_47B208.chunk_limit;
        stru_47B208.next_free = stru_47B208.chunk_limit;
      }
      stru_47B208.object_base = chunk_limit;
    }
    v36 = 0;
    while ( 1 )
    {
      v44 = sub_171258(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 24 * v36 + 12));
      v45 = *(_DWORD *)(v10 + 24);
      v46 = v44;
      v99 = *(char **)(*(_DWORD *)(v44 + 24) + 8);
      if ( (*(_WORD *)(v45 + 2) & 0x380) == 0x80 )
      {
        v47 = *(_DWORD *)(v45 + 28);
        if ( (__int16 *)v47 != &word_3B4A2C )
        {
          v48 = *(_DWORD *)(v47 + 16);
          if ( v48 )
          {
            if ( (((int)*(unsigned __int8 *)(v48 + (v36 >> 3)) >> (v36 & 7)) & 1) != 0 )
            {
              v53 = stru_47B208.next_free;
              v54 = stru_47B208.next_free;
              v55 = (stru_47B208.next_free - stru_47B208.object_base) >> 2;
              while ( --v55 >= 0 )
              {
                v56 = *((_DWORD *)v54 - 1);
                v54 -= 4;
                if ( v46 == v56 )
                  goto LABEL_71;
              }
              if ( (unsigned int)(stru_47B208.chunk_limit - stru_47B208.next_free) <= 3 )
              {
                obstack_newchunk(&stru_47B208, 4);
                v53 = stru_47B208.next_free;
              }
              *(_DWORD *)v53 = v46;
              stru_47B208.next_free += 4;
            }
          }
        }
      }
      v37 = sub_92E28();
      v96 = sub_FC59C(v10, v36, v112, SHIDWORD(a3), a3, SHIDWORD(a3), a4, (int)a7);
      sub_92E40((int)v37);
      v38 = *(_DWORD *)(v10 + 24);
      if ( (*(_WORD *)(v38 + 2) & 0x380) != 0x80 )
        break;
      v50 = *(_DWORD *)(v38 + 28);
      if ( (__int16 *)v50 == &word_3B4A2C )
        break;
      v39 = *(_DWORD *)(v50 + 16);
      if ( !v39 )
        goto LABEL_84;
      v39 = ((int)*(unsigned __int8 *)(v39 + (v36 >> 3)) >> (v36 & 7)) & 1;
      if ( !v39 )
        goto LABEL_84;
      if ( (((unsigned __int64)(a3 + (int)v96) >> 32) & 0x80000000) != 0LL
        || a3 + (int)v96 >= *(unsigned int *)(a2 + 20) )
      {
        v68 = *(_DWORD *)(v46 + 20);
        if ( v68 )
        {
          v69 = sub_9836C(*(_DWORD *)(v46 + 20));
          v68 = *(_DWORD *)(v46 + 20);
          v104 = (int)v69;
        }
        else
        {
          v104 = 0;
        }
        v97 = a4 + v96;
        v70 = sub_230020(v97, v104, v68);
        v71 = v46;
        v72 = (void *)v104;
        v39 = v70 != 0;
        v101 = (void *)sub_26DD30(v71, v104, v97);
        v103 = sub_26BC70(v101);
        if ( v72 )
          sub_339E64(v72);
        v96 = 0;
        v46 = v103;
        v106 = 0;
      }
      else
      {
        v39 = 0;
        v101 = a7;
        v103 = a2;
        v106 = a3;
      }
      if ( *a8 )
        goto LABEL_85;
LABEL_64:
      sub_25A6BC(&word_364FA4, a5);
      v40 = v99;
      if ( !v99 )
        v40 = "";
      sub_25A6BC(v40, a5);
      sub_25A6BC("> = ", a5);
      if ( v39 == 1 )
      {
        sub_2669DC(a5);
      }
      else
      {
        v41 = v106 + v96;
        if ( a8[16]
          || (v42 = ((int (__fastcall *)(void *))loc_26C09C)(v101),
              !((int (__fastcall *)(int, char **, _DWORD, _DWORD, int, int, void *, void *, int *, char **))loc_157D94)(
                 v46,
                 off_46D5A4[0],
                 v41,
                 HIDWORD(v41),
                 v42,
                 a5,
                 v113,
                 v101,
                 a8,
                 off_46D5A4[0])) )
        {
          v43 = ((int (__fastcall *)(void *))loc_26C09C)(v101);
          sub_10134C(v46, v103, v41, SHIDWORD(v41), v43, a5, v113, (int)v101, (int)a8, (int)stru_47B208.object_base, 0);
        }
      }
      sub_25A6BC(", ", a5);
LABEL_71:
      if ( ++v36 >= v93 )
      {
        if ( !a9 )
        {
          if ( stru_47B208.chunk >= next_free || stru_47B208.chunk_limit <= (char *)next_free )
            obstack_free(&stru_47B208, next_free);
          stru_47B208 = *(struct obstack *)dest;
        }
        goto LABEL_6;
      }
    }
    v39 = 0;
LABEL_84:
    v101 = a7;
    v103 = a2;
    v106 = a3;
    if ( !*a8 )
      goto LABEL_64;
LABEL_85:
    sub_25A418(a5, (const char *)&word_356638);
    sub_25A7A0(2 * (_DWORD)v113, a5);
    goto LABEL_64;
  }
LABEL_6:
  v12 = v98 == 0;
  if ( v98 )
    v12 = v98 == v93;
  v13 = v12;
  if ( v12 )
  {
    sub_25A418(a5, "<No data fields>");
    return sub_25A418(a5, "}");
  }
  v118 = v13;
  if ( a10 )
  {
    v102 = sub_173244(v10, &v118);
    if ( v98 <= v93 )
      goto LABEL_49;
    v111 = v13;
    v110 = v13;
  }
  else
  {
    v110 = dword_47B1BC - dword_47B1B8;
    if ( dword_46D428 == block )
    {
      v111 = 0;
    }
    else
    {
      dword_46D428 = block;
      v111 = stru_47B1DC.next_free - stru_47B1DC.object_base;
    }
    v102 = sub_173244(v10, &v118);
    if ( v98 <= v93 )
    {
LABEL_44:
      if ( dword_47B1BC - dword_47B1B8 > v110 )
        dword_47B1BC = v110 + dword_47B1B8;
      if ( dword_46D428 != block )
      {
        if ( stru_47B1DC.next_free - stru_47B1DC.object_base > v111 )
        {
          v77 = (struct _obstack_chunk *)&stru_47B1DC.next_free[v111 - (stru_47B1DC.next_free - stru_47B1DC.object_base)];
          if ( v77 <= stru_47B1DC.chunk || (char *)v77 >= stru_47B1DC.chunk_limit )
          {
            obstack_free(&stru_47B1DC, v77);
          }
          else
          {
            stru_47B1DC.object_base = &stru_47B1DC.next_free[v111 - (stru_47B1DC.next_free - stru_47B1DC.object_base)];
            stru_47B1DC.next_free = (char *)v77;
          }
        }
        dword_46D428 = -1;
      }
      goto LABEL_49;
    }
  }
  v15 = v93;
  v100 = (char *)(block + 1);
  v95 = 2 * (block + 1);
  v16 = 24 * v93;
  v17 = 0;
  do
  {
    v27 = sub_26E718(a7, v14);
    if ( a8[14] )
    {
      if ( v17 )
        goto LABEL_88;
      goto LABEL_27;
    }
    if ( !sub_174F0C(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v16, v26) )
    {
      if ( v17 )
      {
LABEL_88:
        sub_25A418(a5, ", ");
        v28 = *a8;
LABEL_80:
        if ( v28 )
        {
          sub_25A418(a5, (const char *)&word_356638);
          sub_25A7A0(v95, a5);
LABEL_30:
          sub_B77D4();
          if ( sub_174F0C(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v16, v30) )
            sub_25A6BC("static ", a5);
          sub_25A850(a5, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v16 + 16), off_46D5A4[0][2], 3);
          sub_B7814();
          if ( **(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v16 + 16) )
            sub_25A6BC(" = ", a5);
          sub_B7834();
          v32 = sub_174F0C(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v16, v31);
          v33 = *(_DWORD *)(v10 + 24);
          if ( v32 )
          {
            v18 = *(_WORD *)(v33 + 2) & 0x380;
          }
          else
          {
            v19 = (__int16 *)(*(_DWORD *)(v33 + 24) + v16);
            v34 = *((_DWORD *)v19 + 2);
            v18 = *(_WORD *)(v33 + 2) & 0x380;
            if ( (v34 & 0xFFFFFFF0) != 0 )
            {
              if ( v18 != 128
                || (v75 = *(_DWORD *)(v33 + 28), (__int16 *)v75 == &word_3B4A2C)
                || (v76 = *(_DWORD *)(v75 + 28)) == 0
                || (((int)*(unsigned __int8 *)(v76 + (v15 >> 3)) >> (v15 & 7)) & 1) == 0 )
              {
                if ( sub_26BFB8(a7, 0, *(_DWORD *)v19, *((_DWORD *)v19 + 1), v34 >> 4, 0) )
                {
                  sub_25A6BC("<synthetic pointer>", a5);
                }
                else
                {
                  memcpy(dest, a8, sizeof(dest));
                  *(_DWORD *)&dest[52] = 0;
                  v74 = sub_26D768(v10, v15, v27, HIDWORD(a3), a3, HIDWORD(a3), a7);
                  sub_266BC4(v74, a5, v100, dest, off_46D5A4[0]);
                }
                goto LABEL_23;
              }
LABEL_89:
              sub_25A6BC("<optimized out or zero length>", a5);
LABEL_23:
              v17 = 1;
              sub_B7854();
              goto LABEL_24;
            }
          }
          if ( v18 != 128
            || (v51 = *(_DWORD *)(v33 + 28), v19 = &word_3B4A2C, (__int16 *)v51 == &word_3B4A2C)
            || (v52 = *(_DWORD *)(v51 + 28)) == 0
            || (v19 = (__int16 *)(v15 & 7), (((int)*(unsigned __int8 *)(v52 + (v15 >> 3)) >> (v15 & 7)) & 1) == 0) )
          {
            if ( sub_174F0C(*(_DWORD *)(v33 + 24) + v16, v19) )
            {
              v57 = sub_92E28();
              v58 = ((int (__fastcall *)(int, int))loc_26D23C)(v10, v15);
              sub_92E40((int)v57);
              v107 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v16 + 12);
              if ( sub_26E710(v58) )
              {
                sub_2666C0(v58, a5);
              }
              else
              {
                v59 = *(char **)(v107 + 24);
                v60 = *v59;
                if ( v60 == 3 )
                {
                  v115 = (void *)v10;
                  v78 = (unsigned int)(dword_47B1BC - dword_47B1B8) >> 2;
                  v79 = dword_47B1B8 + 4 * v78;
                  do
                  {
                    v66 = v78-- != 0;
                    if ( !v66 )
                    {
                      v10 = (int)v115;
                      v82 = ((int (__fastcall *)(int))loc_26C09C)(v58);
                      v83 = (int *)dword_47B1BC;
                      if ( (unsigned int)(dword_47B1C0 - dword_47B1BC) <= 3 )
                      {
                        obstack_newchunk((struct obstack *)&unk_47B1B0, 4);
                        v83 = (int *)dword_47B1BC;
                      }
                      *v83 = v82;
                      dword_47B1BC += 4;
                      v108 = sub_171258(v107);
                      v116 = (void *)sub_26BD30(v58);
                      v84 = sub_26BFE0(v58);
                      sub_10134C(v108, (int)v116, v84, SHIDWORD(v84), v82, a5, v100, v58, (int)a8, 0, 1);
                      goto LABEL_23;
                    }
                    v80 = ((int (__fastcall *)(int))loc_26C09C)(v58);
                    v81 = *(_DWORD *)(v79 - 4);
                    v79 -= 4;
                  }
                  while ( v80 != v81 );
                  v10 = (int)v115;
LABEL_143:
                  sub_25A6BC("<same as static member of an already seen type>", a5);
                }
                else
                {
                  if ( v60 == 2 )
                  {
                    v61 = *((_DWORD *)v59 + 5);
                    v62 = stru_47B1DC.next_free;
                    v63 = (unsigned int)(stru_47B1DC.next_free - stru_47B1DC.object_base) >> 2;
                    v64 = &stru_47B1DC.object_base[4 * v63];
                    while ( 1 )
                    {
                      v66 = v63-- != 0;
                      if ( !v66 )
                        break;
                      v65 = *((_DWORD *)v64 - 1);
                      v64 -= 4;
                      if ( v61 == v65 )
                        goto LABEL_143;
                    }
                    if ( (unsigned int)(stru_47B1DC.chunk_limit - stru_47B1DC.next_free) <= 3 )
                    {
                      obstack_newchunk(&stru_47B1DC, 4);
                      v62 = stru_47B1DC.next_free;
                    }
                    *(_DWORD *)v62 = v61;
                    stru_47B1DC.next_free += 4;
                  }
                  memcpy(dest, a8, sizeof(dest));
                  *(_DWORD *)&dest[52] = 0;
                  v114 = sub_26BFE0(v58);
                  v67 = ((int (__fastcall *)(int))loc_26C09C)(v58);
                  sub_2669E8(
                    v107,
                    (int)off_46D5A4[0],
                    v114,
                    SHIDWORD(v114),
                    v67,
                    a5,
                    (int)v100,
                    v58,
                    dest,
                    (int)off_46D5A4[0]);
                }
              }
            }
            else if ( v102 == v15 && v118 == v10 )
            {
              v88 = *(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v16;
              v109 = *(_DWORD *)(v88 + 12);
              v89 = *(_QWORD *)v88 / 8LL + a3;
              if ( sub_266704(a5, v109, v89, v89 >> 31, a7) )
              {
                v90 = sub_15AEA8(v27 + v89, v109);
                v91 = sub_170040(v10);
                sub_267E04(a8, v91, v90, a5);
              }
            }
            else
            {
              v20 = memcpy(dest, a8, sizeof(dest));
              v21 = *(_DWORD *)(v10 + 24);
              v22 = v20;
              *(_DWORD *)&dest[52] = 0;
              v23 = *(_DWORD *)(v21 + 24);
              src = v22;
              HIDWORD(v24) = *(_DWORD *)(v23 + v16 + 4);
              LODWORD(v24) = ((SHIDWORD(v24) >> 31) & 7) + *(_DWORD *)(v23 + v16);
              v25 = __PAIR64__((unsigned __int64)(v24 / 8) >> 32, *(_QWORD *)(v23 + v16) / 8LL) + a3;
              sub_2669E8(
                *(_DWORD *)(v23 + v16 + 12),
                SHIDWORD(a3),
                v25,
                SHIDWORD(v25),
                a4,
                a5,
                (int)v100,
                (int)a7,
                src,
                (int)off_46D5A4[0]);
            }
            goto LABEL_23;
          }
          goto LABEL_89;
        }
LABEL_29:
        v29 = sub_25A704(v95);
        sub_259B58(v29);
        goto LABEL_30;
      }
LABEL_27:
      v28 = *a8;
      if ( v93 <= 0 )
        goto LABEL_80;
      if ( v28 )
      {
        sub_25A418(a5, (const char *)&word_356638);
        sub_25A7A0(v95, a5);
        sub_25A6BC("members of ", a5);
        v49 = sub_170CC4(v10);
        sub_25A6BC(v49, a5);
        sub_25A6BC(&word_3B6A00, a5);
        v28 = *a8;
        goto LABEL_80;
      }
      goto LABEL_29;
    }
LABEL_24:
    ++v15;
    v16 += 24;
  }
  while ( v15 < v98 );
  if ( !a10 )
    goto LABEL_44;
LABEL_49:
  if ( *a8 )
  {
    sub_25A418(a5, (const char *)&word_356638);
    sub_25A7A0(2 * block, a5);
  }
  return sub_25A418(a5, "}");
}
