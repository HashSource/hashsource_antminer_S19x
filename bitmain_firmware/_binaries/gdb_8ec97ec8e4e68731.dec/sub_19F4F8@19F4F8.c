int __fastcall sub_19F4F8(_DWORD *a1, int a2, int a3, int a4, int block, void *a6, _DWORD *a7)
{
  int v11; // r6
  _DWORD *v12; // r0
  int v13; // r2
  _DWORD *v14; // r4
  int v15; // r4
  int v16; // r8
  int v17; // r7
  int v18; // r5
  __int64 v19; // r0
  _DWORD *v20; // r4
  int v21; // r6
  int v22; // r0
  int v23; // r3
  int v24; // r4
  __int64 v25; // r2
  int v26; // r0
  _DWORD *v28; // r0
  int v29; // r0
  int v30; // r3
  int v31; // r10
  int v32; // r7
  __int64 v33; // r8
  int v34; // r5
  int v35; // r0
  int v36; // r1
  int v37; // r6
  int v38; // r2
  bool v39; // zf
  int v40; // r0
  int v41; // r4
  int v42; // r2
  __int16 *v43; // r3
  int v44; // r7
  _DWORD *v45; // r0
  __int64 v46; // r8
  int v47; // r10
  int v48; // r11
  __int64 v49; // kr08_8
  int v50; // r4
  int v51; // r0
  int v52; // r0
  int v53; // r5
  int v54; // r1
  _DWORD *v55; // r4
  int v56; // r2
  int v57; // r7
  int v58; // r7
  __int64 v59; // kr10_8
  int v60; // r1
  int v61; // r1
  int v62; // r5
  int v63; // r7
  int v64; // r8
  int v65; // r6
  int v66; // r0
  int v67; // r0
  int v68; // r8
  int v69; // r9
  int v70; // r10
  int v71; // r3
  int v72; // r3
  char *v73; // r2
  bool v74; // zf
  _DWORD *v75; // r0
  int v76; // r4
  int v77; // r0
  int v78; // r0
  int v79; // r3
  bool v80; // zf
  unsigned int v81; // r3
  unsigned int v82; // r1
  int v83; // lr
  int v84; // r12
  int v85; // t1
  bool v86; // cc
  int v87; // r3
  bool v88; // zf
  __int64 v89; // [sp+20h] [bp-64h]
  int v90; // [sp+20h] [bp-64h]
  _DWORD *v91; // [sp+28h] [bp-5Ch]
  __int64 v92; // [sp+28h] [bp-5Ch]
  int v93; // [sp+30h] [bp-54h]
  int v94; // [sp+34h] [bp-50h]
  int v95; // [sp+38h] [bp-4Ch]
  int v96; // [sp+4Ch] [bp-38h]
  __int64 v97; // [sp+60h] [bp-24h] BYREF
  __int64 v98; // [sp+68h] [bp-1Ch] BYREF
  __int64 v99; // [sp+70h] [bp-14h] BYREF
  __int64 v100; // [sp+78h] [bp-Ch] BYREF

  v11 = sub_26E718(a6, a2);
  v12 = (_DWORD *)sub_171258(a1);
  v13 = v12[6];
  v14 = v12;
  switch ( *(_BYTE *)v13 )
  {
    case 1:
      if ( (v12[4] & 1) != 0 )
      {
        v62 = v11 + a2;
        v63 = sub_170040((int)v12);
        v64 = sub_26D230(v14, v62);
        v65 = sub_171258(*(_DWORD **)(v14[6] + 20));
        sub_25A418(a4, "[");
        v66 = sub_25AC8C(v63, v64);
        sub_25A6BC(v66, a4);
        sub_25A418(a4, "] : ");
        if ( **(_BYTE **)(v65 + 24) )
        {
          v75 = v14;
          v76 = *(_DWORD *)(v14[6] + 20);
          v77 = sub_26D230(v75, v62);
          v78 = sub_260F7C(v76, v77);
          sub_266BC4(v78, a4, block, a7, off_46D5A4[0]);
        }
        else
        {
          sub_25A6BC("???", a4);
        }
      }
      else
      {
        v38 = a7[10];
        v39 = v38 == 115;
        if ( v38 != 115 )
          v39 = v38 == 0;
        if ( v39 )
        {
          v40 = sub_26D230(v12, v11 + a2);
          sub_19F318((int)v14, v40, a3, (int)a7, a4);
        }
        else
        {
          sub_266D40(v12, a6, a2, a2 >> 31, a6, a7, v12[4] & 1, a4);
        }
      }
      return sub_25680C(a4);
    case 2:
      if ( !v12[5] || (v28 = *(_DWORD **)(v13 + 20), !v28[5]) )
      {
        sub_19F318((int)v14, a3, a3, (int)a7, a4);
        return sub_25680C(a4);
      }
      v67 = sub_171258(v28);
      v68 = v67;
      v69 = *(_DWORD *)(v67 + 20);
      v70 = v14[5];
      if ( a7[1] )
      {
        sub_25A7A0(2 * (block + 1), a4);
        v71 = *(_DWORD *)(v68 + 20);
      }
      else
      {
        v71 = *(_DWORD *)(v67 + 20);
      }
      if ( v71 != 1 )
        goto LABEL_89;
      v72 = **(char **)(v68 + 24);
      if ( v72 != 8 )
      {
        v73 = off_46D5A4[0][2];
        v74 = v73 == (char *)8;
        if ( v73 == (char *)8 )
          v74 = v72 == 20;
        if ( !v74 )
          goto LABEL_89;
      }
      v79 = a7[10];
      v80 = v79 == 0;
      if ( v79 )
        v80 = v79 == 115;
      if ( v80 )
      {
        v81 = sub_347418(v70, v69);
        if ( a7[11] )
        {
          v82 = v81 == 0;
          if ( !*(_BYTE *)(v11 + a2) )
            v82 = 1;
          if ( v82 || (v83 = a7[7]) == 0 )
          {
            v81 = 0;
          }
          else
          {
            v84 = v11 + a2;
            do
            {
              v85 = *(unsigned __int8 *)++v84;
              ++v82;
              v86 = v85 != 0;
              if ( v85 )
                v86 = v81 > v82;
            }
            while ( v86 && v82 != v83 );
            v81 = v82;
          }
        }
        (*((void (__fastcall **)(int, _DWORD, int, unsigned int, _DWORD, _DWORD, _DWORD *))off_46D5A4[0] + 13))(
          a4,
          *(_DWORD *)(v14[6] + 20),
          v11 + a2,
          v81,
          0,
          0,
          a7);
      }
      else
      {
LABEL_89:
        sub_25A418(a4, "{");
        sub_267F74((int)v14, 0, a2, a2 >> 31, a3, a4, block, (int)a6, a7, 0);
        sub_25A418(a4, "}");
      }
      return sub_25680C(a4);
    case 3:
      goto LABEL_4;
    case 4:
      if ( block && !a7[4] )
      {
        sub_25A418(a4, "{...}");
      }
      else
      {
LABEL_4:
        if ( sub_19E630((int)v12) )
        {
          v41 = sub_171258(v14);
          sub_25A418(a4, "{");
          v96 = *(__int16 *)(*(_DWORD *)(v41 + 24) + 4);
          if ( sub_19F44C(v41, &v97, &v98) )
          {
            v42 = *(_DWORD *)(v41 + 24);
            if ( (*(_WORD *)(v42 + 2) & 0x380) == 0x80 )
              v43 = *(__int16 **)(v42 + 28);
            else
              v43 = &word_3B4A2C;
            v44 = *v43;
            v45 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v42 + 24) + 24 * v44 + 12) + 24) + 24)
                             + 12);
            v93 = *(_DWORD *)(v45[6] + 20);
            if ( sub_17195C(v45, &v99, &v100) >= 0 )
            {
              v46 = v97;
              if ( v98 >= v97 )
              {
                v92 = 0;
                v95 = a4;
                v47 = 0;
                v48 = v41;
                v94 = 1;
                v90 = a2;
                v49 = 0;
                while ( 1 )
                {
                  v50 = 24 * v44;
                  v51 = *(_DWORD *)(*(_DWORD *)(v48 + 24) + 24) + 24 * v44;
                  v52 = sub_25DEE0(*(_DWORD *)(v51 + 12), v11 + v90 + *(_QWORD *)v51 / 8LL, v46);
                  v53 = v52;
                  if ( v52 < 0 )
                    sub_946E0("bit test is out of range");
                  if ( v52 )
                  {
                    if ( v47 )
                    {
                      v92 = v46;
                    }
                    else
                    {
                      if ( !v94 )
                        sub_25A418(v95, ", ");
                      v47 = 1;
                      v92 = v46;
                      sub_255F50(v93, v60, v46, HIDWORD(v46), v95);
                      v49 = v46;
                      v94 = 0;
                    }
                  }
                  else if ( v47 )
                  {
                    if ( v49 + 1 < v92 )
                    {
                      sub_25A418(v95, (const char *)&word_3BB850);
                      v47 = v53;
                      sub_255F50(v93, v54, v92, HIDWORD(v92), v95);
                    }
                    else
                    {
                      v47 = v52;
                    }
                  }
                  if ( v100 == v46 )
                  {
                    if ( v96 == ++v44
                      || (v55 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v48 + 24) + 24)
                                                                               + v50
                                                                               + 36)
                                                                   + 24)
                                                       + 24)
                                           + 12),
                          sub_17195C(v55, &v99, &v100) < 0) )
                    {
LABEL_73:
                      a4 = v95;
                      if ( v47 && v49 + 1 < v92 )
                      {
                        sub_25A418(v95, (const char *)&word_3BB850);
                        sub_255F50(v93, v61, v92, HIDWORD(v92), v95);
                      }
                      break;
                    }
                    v93 = *(_DWORD *)(v55[6] + 20);
                  }
                  if ( v98 < ++v46 )
                    goto LABEL_73;
                }
              }
              sub_25A418(a4, "}");
              return sub_25680C(a4);
            }
          }
          else
          {
            sub_25A418(a4, " %s }", "<unknown bounds of set>");
          }
        }
        else if ( sub_19E8AC((int)v14) )
        {
          v15 = sub_171258(v14);
          v16 = sub_26D230(
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v15 + 24) + 24) + 12),
                  v11 + a2 + *(_QWORD *)*(_DWORD *)(*(_DWORD *)(v15 + 24) + 24) / 8LL);
          v17 = sub_260F84(
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v15 + 24) + 24) + 12) + 24) + 20),
                  v16);
          v18 = sub_26D64C(v15, v11 + a2, 1);
          sub_25A418(a4, "{");
          v19 = sub_26BC70(v17);
          v20 = (_DWORD *)v19;
          sub_26E718(v17, HIDWORD(v19));
          v21 = sub_26BFE0(v17);
          v22 = sub_171258(v20);
          v23 = *(_DWORD *)(v22 + 20);
          v24 = v22;
          if ( v23 )
          {
            if ( a7[1] )
            {
              sub_25A7A0(2 * (block + 1), a4);
              v23 = *(_DWORD *)(v24 + 20);
            }
            if ( v23 != 1 )
              goto LABEL_13;
            LODWORD(v25) = **(char **)(v24 + 24);
            if ( (_DWORD)v25 != 8 )
            {
              HIDWORD(v25) = off_46D5A4[0][2];
              if ( v25 != 0x800000014LL )
                goto LABEL_13;
            }
            v87 = a7[10];
            v88 = v87 == 115;
            if ( v87 != 115 )
              v88 = v87 == 0;
            if ( v88 )
            {
              sub_269EC4(v24, 0, v16, v18 + 1, a4, a7);
            }
            else
            {
LABEL_13:
              sub_25A418(a4, "{");
              sub_267F74(v24, 0, v21, v21 >> 31, v16, a4, block, v17, a7, 0);
              sub_25A418(a4, "}");
            }
          }
          sub_25A418(a4, ", HIGH = %d}", v18);
        }
        else
        {
          sub_10134C((int)v14, (int)v14, a2, a3, a4, block, a6, a7, 0, 0);
        }
      }
      return sub_25680C(a4);
    case 0xB:
      v29 = sub_171258(*(_DWORD **)(*(_DWORD *)(v13 + 24) + 12));
      v30 = *(_DWORD *)(v29 + 24);
      v91 = (_DWORD *)v29;
      v31 = *(_BYTE *)(v30 + 1) & 4;
      if ( (*(_BYTE *)(v30 + 1) & 4) == 0 )
      {
        sub_25A6BC("{", a4);
        if ( sub_17195C(v91, &v99, &v100) >= 0 )
        {
          v32 = v99;
          v33 = (int)v99;
          if ( v100 < (int)v99 )
          {
LABEL_30:
            sub_25A6BC("}", a4);
            return sub_25680C(a4);
          }
          v34 = v11 + a2;
          while ( 1 )
          {
            v35 = sub_25DEE0(v14, v34, v32);
            if ( v35 < 0 )
              break;
            v37 = v32 + 1;
            v89 = v32 + 1;
            if ( v35 )
            {
              if ( v31 )
                sub_25A6BC(", ", a4);
              sub_255F50(v91, v36, v33, HIDWORD(v33), a4);
              if ( v100 < v37 )
                goto LABEL_30;
              v56 = v32 + 1;
              v57 = v32 + 2;
              v33 = v57;
              if ( sub_25DEE0(v14, v34, v56) )
              {
                sub_25A6BC(&word_3BB850, a4);
                v58 = v37;
                v59 = v89 + 1;
                while ( 1 )
                {
                  v33 = v59;
                  ++v37;
                  if ( v100 < v59 )
                    goto LABEL_69;
                  ++v59;
                  if ( !sub_25DEE0(v14, v34, v37) )
                    break;
                  v58 = v37;
                }
                v37 = v58 + 2;
                v33 = v58 + 2;
LABEL_69:
                v31 = 1;
                sub_255F50(v91, HIDWORD(v59), v58, v58 >> 31, a4);
              }
              else
              {
                v37 = v57;
                v31 = 1;
              }
            }
            else
            {
              v33 = v32 + 1;
            }
            v32 = v37;
            if ( v100 < v33 )
              goto LABEL_30;
          }
        }
        sub_25A6BC("<error value>", a4);
        goto LABEL_30;
      }
      sub_25A418(a4, "<incomplete type>");
      sub_25680C(a4);
      return sub_25680C(a4);
    case 0xC:
      v26 = *(_DWORD *)(v13 + 20);
      if ( v14[5] != *(_DWORD *)(v26 + 20) )
        goto LABEL_16;
      sub_19F4F8(v26, a2, a3, a4, block, (int)a6, a7);
      return sub_25680C(a4);
    default:
LABEL_16:
      sub_26833C(v14, a2, a3, a4, block, a6, a7, &off_3C32EC);
      return sub_25680C(a4);
  }
}
