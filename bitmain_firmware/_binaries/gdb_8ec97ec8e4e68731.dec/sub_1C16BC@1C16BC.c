int __fastcall sub_1C16BC(_DWORD *a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, int *a8, int a9, int a10)
{
  int v10; // r4
  int v11; // r12
  int v12; // r6
  int v13; // r7
  int v14; // r8
  int v15; // r5
  int v16; // r3
  int v17; // r0
  _BOOL4 v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r7
  int v23; // r4
  int v24; // r9
  int v25; // r0
  int v26; // t1
  int v27; // r9
  int *v28; // r2
  int v29; // r1
  __int64 v30; // r0
  char v31; // r2
  bool v32; // zf
  int v33; // r3
  int v34; // r5
  int v35; // r8
  void *v36; // r7
  void *v37; // r7
  char *v38; // r3
  int v39; // r6
  int v40; // r0
  int v41; // r2
  int v42; // r3
  int v43; // r3
  int v44; // r0
  _DWORD *v45; // r1
  unsigned int v46; // r0
  int v48; // r2
  void *src; // r0
  int v50; // r2
  int v51; // r3
  int v52; // r3
  char *v53; // r0
  char *v54; // r2
  int v55; // r3
  int v56; // t1
  void *v57; // r0
  bool v58; // zf
  __int16 *v59; // r3
  char *chunk_limit; // r3
  int v61; // r0
  int v62; // r3
  int v63; // r3
  __int64 v64; // [sp+20h] [bp-CCh]
  int v65; // [sp+30h] [bp-BCh]
  int v67; // [sp+3Ch] [bp-B0h]
  _BOOL4 v68; // [sp+3Ch] [bp-B0h]
  int v69; // [sp+40h] [bp-ACh]
  char *v71; // [sp+48h] [bp-A4h]
  void *v72; // [sp+4Ch] [bp-A0h]
  __int64 v73; // [sp+50h] [bp-9Ch]
  int v74; // [sp+54h] [bp-98h]
  int v75; // [sp+54h] [bp-98h]
  void *block; // [sp+58h] [bp-94h]
  int v77; // [sp+5Ch] [bp-90h]
  int v78; // [sp+5Ch] [bp-90h]
  int v79; // [sp+60h] [bp-8Ch]
  struct _obstack_chunk *next_free; // [sp+64h] [bp-88h]
  int v81; // [sp+70h] [bp-7Ch]
  int v82; // [sp+74h] [bp-78h]
  int v83; // [sp+78h] [bp-74h]
  int v84; // [sp+7Ch] [bp-70h]
  int v85; // [sp+80h] [bp-6Ch]
  int v86; // [sp+84h] [bp-68h]
  int v87; // [sp+88h] [bp-64h]
  int v88; // [sp+8Ch] [bp-60h]
  int v89; // [sp+90h] [bp-5Ch]
  int v90; // [sp+94h] [bp-58h]
  int v91; // [sp+98h] [bp-54h]
  _BYTE dest[76]; // [sp+9Ch] [bp-50h] BYREF

  block = (void *)dword_487C4C;
  v10 = sub_171258(a1);
  sub_25A418(a5, "{");
  v11 = *(_DWORD *)(v10 + 24);
  v69 = *(__int16 *)(v11 + 4);
  if ( (*(_WORD *)(v11 + 2) & 0x380) == 0x80 )
  {
    v59 = *(__int16 **)(v11 + 28);
    if ( v59 == &word_3B4A2C )
    {
      v65 = 0;
    }
    else
    {
      v65 = *v59;
      if ( v65 > 0 )
      {
        *(struct obstack *)dest = stru_487C6C;
        v79 = a6 + 1;
        next_free = (struct _obstack_chunk *)stru_487C6C.next_free;
        if ( !a9 )
        {
          if ( stru_487C6C.object_base == stru_487C6C.next_free )
            *((_BYTE *)&stru_487C6C + 40) |= 2u;
          chunk_limit = (char *)((int)&stru_487C6C.next_free[stru_487C6C.alignment_mask] & ~stru_487C6C.alignment_mask);
          stru_487C6C.next_free = chunk_limit;
          if ( (char *)(chunk_limit - (char *)stru_487C6C.chunk) > (char *)(stru_487C6C.chunk_limit
                                                                          - (char *)stru_487C6C.chunk) )
          {
            chunk_limit = stru_487C6C.chunk_limit;
            stru_487C6C.next_free = stru_487C6C.chunk_limit;
          }
          stru_487C6C.object_base = chunk_limit;
        }
        v34 = 0;
        v35 = a4;
        while ( 1 )
        {
          v39 = sub_171258(*(_DWORD **)(*(_DWORD *)(v11 + 24) + 24 * v34 + 12));
          v40 = sub_170CC4(v39);
          v41 = *(_DWORD *)(v10 + 24);
          v71 = (char *)v40;
          if ( (*(_WORD *)(v41 + 2) & 0x380) == 0x80 )
          {
            v42 = *(_DWORD *)(v41 + 28);
            if ( (__int16 *)v42 != &word_3B4A2C )
            {
              v43 = *(_DWORD *)(v42 + 16);
              if ( v43 )
              {
                if ( (((int)*(unsigned __int8 *)(v43 + (v34 >> 3)) >> (v34 & 7)) & 1) != 0 )
                {
                  v53 = stru_487C6C.next_free;
                  v54 = stru_487C6C.next_free;
                  v55 = (stru_487C6C.next_free - stru_487C6C.object_base) >> 2;
                  while ( --v55 >= 0 )
                  {
                    v56 = *((_DWORD *)v54 - 1);
                    v54 -= 4;
                    if ( v39 == v56 )
                      goto LABEL_50;
                  }
                  if ( (unsigned int)(stru_487C6C.chunk_limit - stru_487C6C.next_free) <= 3 )
                  {
                    obstack_newchunk(&stru_487C6C, 4);
                    v53 = stru_487C6C.next_free;
                  }
                  *(_DWORD *)v53 = v39;
                  stru_487C6C.next_free += 4;
                }
              }
            }
          }
          v36 = sub_92E28();
          v64 = sub_FC59C(v10, v34, a2, SHIDWORD(a3), a3, SHIDWORD(a3), v35, a7);
          sub_92E40((int)v36);
          if ( (int)v64 >> 31 == -1 || (int)v64 >= (__int64)*(unsigned int *)(v10 + 20) )
          {
            v48 = *(_DWORD *)(v39 + 20);
            if ( v48 )
            {
              v57 = sub_9836C(*(_DWORD *)(v39 + 20));
              v48 = *(_DWORD *)(v39 + 20);
              v72 = v57;
            }
            else
            {
              v72 = 0;
            }
            v37 = v72;
            v35 += v64;
            v73 = 0;
            v64 = 0;
            v68 = sub_230020(v35, v72, v48) != 0;
          }
          else
          {
            v37 = 0;
            v68 = 0;
            v73 = a3;
            v72 = (void *)a2;
          }
          if ( *a8 )
          {
            sub_25A418(a5, (const char *)&word_356638);
            sub_25A7A0(2 * v79, a5);
          }
          sub_25A6BC(&word_364FA4, a5);
          v38 = v71;
          if ( !v71 )
            v38 = "";
          sub_25A6BC(v38, a5);
          sub_25A6BC("> = ", a5);
          if ( v68 )
            sub_2669DC(a5);
          else
            sub_1C16BC(
              v39,
              v72,
              v64 + v73,
              (unsigned __int64)(v64 + v73) >> 32,
              v35,
              a5,
              v79,
              a7,
              a8,
              stru_487C6C.object_base,
              0);
          sub_25A6BC(", ", a5);
          if ( v37 )
            sub_339E64(v37);
LABEL_50:
          if ( ++v34 >= v65 )
            break;
          v11 = *(_DWORD *)(v10 + 24);
        }
        if ( !a9 )
        {
          if ( next_free <= stru_487C6C.chunk || stru_487C6C.chunk_limit <= (char *)next_free )
            obstack_free(&stru_487C6C, next_free);
          stru_487C6C = *(struct obstack *)dest;
        }
        v58 = v69 == 0;
        if ( !v69 )
          v58 = v65 == 1;
        if ( v58 )
        {
          sub_25A418(a5, "<No data fields>");
          return sub_25A418(a5, "}");
        }
      }
    }
  }
  else
  {
    v65 = 0;
  }
  v81 = unk_487C40;
  v82 = dword_487C44;
  v83 = dword_487C48;
  v84 = dword_487C4C;
  v85 = dword_487C50;
  v86 = *(_DWORD *)algn_487C54;
  v87 = dword_487C58;
  v88 = *(_DWORD *)algn_487C5C;
  v89 = unk_487C60;
  v90 = unk_487C64;
  v91 = *(_DWORD *)&byte_487C68;
  if ( a10 )
  {
    if ( v69 <= v65 )
      goto LABEL_71;
  }
  else
  {
    v31 = dword_487C48;
    v32 = dword_487C4C == dword_487C48;
    if ( dword_487C4C == dword_487C48 )
      v31 = byte_487C68;
    v33 = (dword_487C4C + dword_487C58) & ~dword_487C58;
    dword_487C4C = v33;
    if ( v32 )
      byte_487C68 = v31 | 2;
    if ( v33 - dword_487C44 > (unsigned int)(dword_487C50 - dword_487C44) )
    {
      v33 = dword_487C50;
      dword_487C4C = dword_487C50;
    }
    dword_487C48 = v33;
    if ( v69 <= v65 )
    {
LABEL_68:
      if ( (unsigned int)block <= dword_487C44 || (unsigned int)block >= dword_487C50 )
        obstack_free((struct obstack *)&unk_487C40, block);
      unk_487C40 = v81;
      dword_487C44 = v82;
      dword_487C48 = v83;
      dword_487C4C = v84;
      dword_487C50 = v85;
      *(_DWORD *)algn_487C54 = v86;
      dword_487C58 = v87;
      *(_DWORD *)algn_487C5C = v88;
      unk_487C60 = v89;
      unk_487C64 = v90;
      *(_DWORD *)&byte_487C68 = v91;
      goto LABEL_71;
    }
  }
  v12 = v65;
  v13 = 0;
  v67 = a6 + 1;
  v14 = 2 * (a6 + 1);
  v15 = 24 * v65;
  do
  {
    if ( a8[15] )
    {
      if ( v13 )
        goto LABEL_81;
      goto LABEL_8;
    }
    if ( !sub_174F0C(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v15) )
    {
      if ( v13 )
      {
LABEL_81:
        sub_25A418(a5, ", ");
        v16 = *a8;
LABEL_57:
        if ( v16 )
        {
          sub_25A418(a5, (const char *)&word_356638);
          sub_25A7A0(v14, a5);
LABEL_11:
          sub_B77D4();
          if ( sub_174F0C(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v15) )
            sub_25A6BC("static ", a5);
          sub_25A850(a5, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v15 + 16), 4, 3);
          sub_B7814();
          sub_25A6BC(" = ", a5);
          sub_B7834();
          v18 = sub_174F0C(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v15);
          v19 = *(_DWORD *)(v10 + 24);
          if ( v18 )
          {
            v20 = *(_WORD *)(v19 + 2) & 0x380;
LABEL_15:
            if ( v20 != 128
              || (v51 = *(_DWORD *)(v19 + 28), (__int16 *)v51 == &word_3B4A2C)
              || (v52 = *(_DWORD *)(v51 + 28)) == 0
              || (((int)*(unsigned __int8 *)(v52 + (v12 >> 3)) >> (v12 & 7)) & 1) == 0 )
            {
              if ( sub_174F0C(*(_DWORD *)(v19 + 24) + v15) )
              {
                v21 = sub_26D768(v10, v12, a2, HIDWORD(a3), a3, HIDWORD(a3), a7);
                v22 = v21;
                if ( v21 )
                {
                  v74 = sub_26BC70(v21);
                  if ( !sub_26E710(v22) )
                  {
                    if ( **(_BYTE **)(v74 + 24) == 3 )
                    {
                      v77 = v10;
                      v23 = dword_487C4C;
                      v24 = (dword_487C4C - dword_487C48) >> 2;
                      while ( --v24 >= 0 )
                      {
                        v25 = ((int (__fastcall *)(int))loc_26C09C)(v22);
                        v26 = *(_DWORD *)(v23 - 4);
                        v23 -= 4;
                        if ( v25 == v26 )
                        {
                          v10 = v77;
                          sub_25A6BC("<same as static member of an already seen type>", a5);
                          goto LABEL_65;
                        }
                      }
                      v10 = v77;
                      v27 = ((int (__fastcall *)(int))loc_26C09C)(v22);
                      v28 = (int *)dword_487C4C;
                      if ( (unsigned int)(dword_487C50 - dword_487C4C) <= 3 )
                      {
                        obstack_newchunk((struct obstack *)&unk_487C40, 4);
                        v28 = (int *)dword_487C4C;
                      }
                      *v28 = v27;
                      dword_487C4C += 4;
                      v75 = sub_171258((_DWORD *)v74);
                      v78 = sub_26E718(v22, v29);
                      v30 = sub_26BFE0(v22);
                      sub_1C16BC(v75, v78, v30, HIDWORD(v30), v27, a5, v67, v22, a8, 0, 1);
                    }
                    else
                    {
                      memcpy(dest, a8, sizeof(dest));
                      *(_DWORD *)&dest[52] = 0;
                      sub_266BC4(v22, a5, v67, dest, off_46D5A4[0]);
                    }
                    goto LABEL_65;
                  }
                  v21 = v22;
                }
                sub_2666C0(v21, a5);
              }
              else
              {
                src = memcpy(dest, a8, sizeof(dest));
                v50 = *(_DWORD *)(v10 + 24);
                *(_DWORD *)&dest[52] = 0;
                sub_2669E8(
                  *(_DWORD *)(*(_DWORD *)(v50 + 24) + v15 + 12),
                  SHIDWORD(a3),
                  *(_QWORD *)(*(_DWORD *)(v50 + 24) + v15) / 8LL + a3,
                  (unsigned __int64)(*(_QWORD *)(*(_DWORD *)(v50 + 24) + v15) / 8LL + a3) >> 32,
                  a4,
                  a5,
                  v67,
                  a7,
                  src,
                  (int)off_46D5A4[0]);
              }
LABEL_65:
              v13 = 1;
              sub_B7854();
              goto LABEL_66;
            }
          }
          else
          {
            v45 = (_DWORD *)(*(_DWORD *)(v19 + 24) + v15);
            v46 = v45[2];
            v20 = *(_WORD *)(v19 + 2) & 0x380;
            if ( (v46 & 0xFFFFFFF0) == 0 )
              goto LABEL_15;
            if ( v20 != 128
              || (v62 = *(_DWORD *)(v19 + 28), (__int16 *)v62 == &word_3B4A2C)
              || (v63 = *(_DWORD *)(v62 + 28)) == 0
              || (((int)*(unsigned __int8 *)(v63 + (v12 >> 3)) >> (v12 & 7)) & 1) == 0 )
            {
              if ( sub_26BFB8(a7, 0, *v45, v45[1], v46 >> 4, 0) )
              {
                sub_25A6BC("<synthetic pointer>", a5);
              }
              else
              {
                memcpy(dest, a8, sizeof(dest));
                v61 = sub_26D768(v10, v12, a2, HIDWORD(a3), a3, HIDWORD(a3), a7);
                *(_DWORD *)&dest[52] = 0;
                sub_266BC4(v61, a5, v67, dest, off_46D5A4[0]);
              }
              goto LABEL_65;
            }
          }
          sub_25A6BC("<optimized out or zero length>", a5);
          goto LABEL_65;
        }
LABEL_10:
        v17 = sub_25A704(v14);
        sub_259B58(v17);
        goto LABEL_11;
      }
LABEL_8:
      v16 = *a8;
      if ( v65 <= 0 )
        goto LABEL_57;
      if ( v16 )
      {
        sub_25A418(a5, (const char *)&word_356638);
        sub_25A7A0(v14, a5);
        sub_25A6BC("members of ", a5);
        v44 = sub_170CC4(v10);
        sub_25A6BC(v44, a5);
        sub_25A6BC(&word_3B6A00, a5);
        v16 = *a8;
        goto LABEL_57;
      }
      goto LABEL_10;
    }
LABEL_66:
    ++v12;
    v15 += 24;
  }
  while ( v12 < v69 );
  if ( !a10 )
    goto LABEL_68;
LABEL_71:
  if ( *a8 )
  {
    sub_25A418(a5, (const char *)&word_356638);
    sub_25A7A0(2 * a6, a5);
  }
  return sub_25A418(a5, "}");
}
