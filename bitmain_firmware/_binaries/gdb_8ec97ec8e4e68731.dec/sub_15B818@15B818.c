int __fastcall sub_15B818(const char **a1, int a2, int a3)
{
  int v4; // r9
  __int64 v7; // r0
  int v8; // r0
  int v9; // r3
  char *v10; // r0
  int (__fastcall **v11)(const char **, int); // r2
  int v12; // r4
  int *v14; // r0
  int *v15; // r5
  int *v16; // r0
  _DWORD *v17; // r0
  int v18; // r5
  int v19; // r3
  int (__fastcall *v20)(int, int); // r3
  int v21; // r0
  const char **v22; // r0
  const char *v23; // r1
  int v24; // r0
  const char *v25; // r1
  int v26; // r4
  int v27; // r4
  int v28; // r0
  int v29; // r0
  int v30; // r4
  int v31; // r0
  const char *v32; // r1
  int v33; // r1
  __int64 v34; // r0
  const char *v35; // r5
  int v36; // r1
  __int64 v37; // r0
  int v38; // r0
  int v39; // r3
  int v40; // r4
  int v41; // r0
  int v42; // r1
  int v43; // r5
  int v44; // r6
  int v45; // r7
  __int64 v46; // r0
  void *v47; // r0
  __int64 v48; // r0
  int v49; // r5
  int v50; // r8
  int v51; // r0
  int v52; // r0
  int v53; // r3
  int (__fastcall *v54)(const char **, int); // r7
  int v55; // r0
  int v56; // r0
  int v57; // r7
  const char *v58; // r1
  int v59; // r0
  int v60; // r0
  int v61; // r0
  const char **v62; // r0
  int v63; // r0
  const char *v64; // r1
  const char *v65; // r1
  const char *v66; // r1
  int v67; // [sp+Ch] [bp-10h] BYREF
  int v68; // [sp+10h] [bp-Ch]
  int v69; // [sp+14h] [bp-8h]

  v4 = (int)a1[6];
  v7 = sub_171258(v4);
  v8 = ((int (__fastcall *)(const char **, _DWORD))loc_15B2CC)(a1, HIDWORD(v7));
  if ( v8 == 2 )
  {
    if ( !a3 )
    {
      sub_94700(
        (int)"findvar.c",
        604,
        "%s: Assertion `%s' failed.",
        "value* default_read_var_value(symbol*, const block*, frame_info*)",
        "frame != NULL");
LABEL_86:
      v30 = (int)a1[2];
      return sub_260F84(v4, v30);
    }
  }
  else
  {
    if ( v8 == 1 && !sub_22EB0C(1) )
    {
      if ( dword_46D448 )
        v25 = (const char *)sub_21B3C4(a1);
      else
        v25 = *a1;
      sub_946E0("Cannot read `%s' without registers", v25);
    }
    if ( !a3 )
      goto LABEL_4;
  }
  if ( ((int (__fastcall *)(const char **))loc_15B2CC)(a1) != 2 )
  {
LABEL_4:
    a3 = 0;
    goto LABEL_5;
  }
  if ( a2 )
  {
    if ( a2 != sub_C269C(a2) && a2 != sub_C2668(a2) )
    {
      v14 = sub_C32A8(a3, 0);
      v15 = v14;
      if ( (int *)a2 != v14 )
      {
        sub_258BD4(v14);
        if ( !v15 )
          goto LABEL_33;
LABEL_15:
        v16 = (int *)sub_C269C((int)v15);
        if ( v15 == v16 )
          goto LABEL_24;
        if ( !v15[2] )
        {
          v15 = (int *)v15[3];
          goto LABEL_31;
        }
        v17 = (_DWORD *)sub_C2874(v15);
        if ( !v17 || !sub_118754(v17, a3, 0, &v67) )
          goto LABEL_24;
        while ( 1 )
        {
          v18 = sub_C3410(a3);
          sub_258BD4(v18);
          if ( v18 )
          {
            v19 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v18 + 32) >> 3) + 2);
            if ( v19 )
            {
              v20 = *(int (__fastcall **)(int, int))(v19 + 4);
              if ( v20 )
              {
                v21 = v20(v18, a3);
                if ( v21 == v67 )
                  break;
              }
            }
          }
          a3 = ((int (__fastcall *)(int))loc_15FA88)(a3);
          if ( !a3 )
            goto LABEL_24;
        }
        v16 = sub_C32A8(a3, 0);
        v15 = v16;
        if ( v16 )
        {
LABEL_31:
          while ( (int *)a2 != v15 )
          {
            sub_258BD4(v16);
            if ( v15 )
              goto LABEL_15;
LABEL_33:
            v24 = ((int (__fastcall *)(int))loc_15FA88)(a3);
            a3 = v24;
            if ( !v24 )
              goto LABEL_24;
            v16 = sub_C32A8(v24, (unsigned int *)v15);
            v15 = v16;
          }
        }
        else
        {
LABEL_24:
          a3 = sub_C37D4(a2);
          if ( !a3 )
          {
            if ( *(_DWORD *)(a2 + 8) && !sub_C23FC(a2) )
            {
              v22 = *(const char ***)(a2 + 8);
              if ( dword_46D448 )
              {
                if ( sub_21B3C4(v22) )
                {
                  v62 = *(const char ***)(a2 + 8);
                  if ( dword_46D448 )
                    v23 = (const char *)sub_21B3C4(v62);
                  else
                    v23 = *v62;
LABEL_29:
                  sub_946E0("No frame is currently executing in block %s.", v23);
                }
              }
              else
              {
                v23 = *v22;
                if ( *v22 )
                  goto LABEL_29;
              }
            }
            sub_946E0("No frame is currently executing in specified block");
          }
        }
      }
    }
  }
LABEL_5:
  v9 = *((unsigned __int8 *)a1 + 32) >> 3;
  v10 = (char *)off_46DBB8 + 16 * v9;
  v11 = (int (__fastcall **)(const char **, int))*((_DWORD *)v10 + 1);
  if ( !v11 )
  {
    switch ( *((_DWORD *)off_46DBB8 + 4 * v9) )
    {
      case 1:
        if ( sub_172880(v4) )
          v4 = sub_176ED4(v4, 0);
        v48 = sub_26BB80(v4);
        v12 = v48;
        v49 = sub_26BCB8(v48, HIDWORD(v48));
        v50 = *(_DWORD *)(v4 + 20);
        v51 = sub_170040(v4);
        v52 = ((int (__fastcall *)(int))loc_165BB8)(v51);
        sub_15C2E8(v49, v50, v52, v53, a1[2], a1[3]);
        *(_DWORD *)nullsub_31(v12) = 0;
        return v12;
      case 2:
        if ( !dword_489690 )
          goto LABEL_86;
        v30 = (int)a1[2];
        if ( *((__int16 *)a1 + 11) >= 0 )
          goto LABEL_84;
        goto LABEL_55;
      case 3:
      case 6:
        v54 = (int (__fastcall *)(const char **, int))**((_DWORD **)v10 + 3);
        v55 = sub_15ECB4(a3);
        v56 = v54(a1, v55);
        v57 = v56;
        if ( *((_DWORD *)off_46DBB8 + 4 * (*((unsigned __int8 *)a1 + 32) >> 3)) != 6 )
        {
          v12 = sub_15B6A4(v4, v56, a3);
          if ( v12 )
            return v12;
LABEL_78:
          if ( dword_46D448 )
            v58 = (const char *)sub_21B3C4(a1);
          else
            v58 = *a1;
          sub_946E0("Value of register variable not available for `%s'.", v58);
        }
        v59 = sub_1700C0(v4);
        v60 = sub_15B6A4(v59, v57, a3);
        if ( !v60 )
          goto LABEL_78;
        v30 = sub_26EBA8(v60);
        return sub_260F84(v4, v30);
      case 4:
        v31 = sub_15D9B4(a3);
        if ( !v31 )
          goto LABEL_49;
        v30 = (int)&a1[2][v31];
        return sub_260F84(v4, v30);
      case 5:
        v26 = sub_15D9B4(a3);
        if ( !v26 )
        {
LABEL_49:
          if ( dword_46D448 )
            v32 = (const char *)sub_21B3C4(a1);
          else
            v32 = *a1;
          sub_946E0("Unknown argument list address for `%s'.", v32);
        }
        v27 = (int)&a1[2][v26];
        v28 = sub_1700C0(v4);
        v29 = sub_260F7C(v28, v27);
        v30 = sub_26EBA8(v29);
        return sub_260F84(v4, v30);
      case 7:
        v30 = (int)&a1[2][sub_15D924(a3)];
        return sub_260F84(v4, v30);
      case 8:
        goto LABEL_104;
      case 9:
        v34 = sub_26BB80(v4);
        v12 = v34;
        if ( dword_489690 )
        {
          v35 = a1[2];
          if ( *((__int16 *)a1 + 11) >= 0 )
            v36 = *(_DWORD *)(sub_22099C(a1) + 168) + 12 * *((__int16 *)a1 + 11);
          else
            v36 = 0;
          v37 = sub_2147DC(v35, v36);
          v38 = sub_26BCB8(v12, HIDWORD(v37));
          sub_15AF04(v38, v4);
        }
        else
        {
          v61 = sub_26BCB8(v34, HIDWORD(v34));
          sub_15AF04(v61, v4);
        }
        goto LABEL_62;
      case 0xA:
        v30 = *(_DWORD *)a1[2];
        if ( !dword_489690 )
          return sub_260F84(v4, v30);
        if ( *((__int16 *)a1 + 11) < 0 )
          goto LABEL_55;
LABEL_84:
        v33 = *(_DWORD *)(sub_22099C(a1) + 168) + 12 * *((__int16 *)a1 + 11);
        goto LABEL_56;
      case 0xB:
        if ( sub_172880(v4) )
          v4 = sub_176ED4(v4, 0);
        v46 = sub_26BB80(v4);
        v12 = v46;
        v47 = (void *)sub_26BCB8(v46, HIDWORD(v46));
        memcpy(v47, a1[2], *(_DWORD *)(v4 + 20));
LABEL_62:
        *(_DWORD *)nullsub_31(v12) = 0;
        return v12;
      case 0xC:
        v39 = (int)*a1;
        v69 = 0;
        v68 = 0;
        v67 = v39;
        v40 = sub_2209C0(a1);
        v41 = sub_22099C(a1);
        ((void (__fastcall *)(int, void *, int *, int))loc_16E100)(v40, &loc_15AD3C, &v67, v41);
        if ( !v68 )
        {
          v63 = sub_22099C(a1);
          v64 = (const char *)sub_1B87D4(v63);
          if ( v64 )
            sub_946E0("Missing %s symbol \"%s\".", v64, *a1);
          sub_94700(
            (int)"findvar.c",
            770,
            "%s: Assertion `%s' failed.",
            "value* default_read_var_value(symbol*, const block*, frame_info*)",
            "flavour_name != NULL");
LABEL_103:
          sub_94700(
            (int)"findvar.c",
            743,
            "%s: %s",
            "value* default_read_var_value(symbol*, const block*, frame_info*)",
            "LOC_COMPUTED variable missing a method");
LABEL_104:
          if ( dword_46D448 )
            v65 = (const char *)sub_21B3C4(a1);
          else
            v65 = *a1;
          sub_946E0("Cannot look up value of a typedef `%s'.", v65);
        }
        v42 = *(__int16 *)(v68 + 22);
        v30 = *(_DWORD *)(v68 + 8);
        if ( v42 < 0 || (v43 = 12 * v42, v44 = *(_DWORD *)(v69 + 168), (v45 = v44 + 12 * v42) == 0) )
        {
          if ( dword_489690 )
          {
LABEL_55:
            v33 = 0;
LABEL_56:
            v30 = sub_2147DC(v30, v33);
          }
          return sub_260F84(v4, v30);
        }
        if ( (*(_DWORD *)(*(_DWORD *)(v44 + 12 * v42) + 20) & 0x400) != 0 )
        {
          if ( !dword_489690 )
          {
LABEL_69:
            v30 = sub_22F1D8(*(_DWORD *)(v45 + 4), v30);
            return sub_260F84(v4, v30);
          }
        }
        else
        {
          v30 += *(_DWORD *)(*(_DWORD *)(v69 + 144) + 4 * v42);
          if ( !dword_489690 )
            return sub_260F84(v4, v30);
        }
        v30 = sub_2147DC(v30, v44 + 12 * v42);
        if ( (*(_DWORD *)(*(_DWORD *)(v44 + v43) + 20) & 0x400) != 0 )
          goto LABEL_69;
        return sub_260F84(v4, v30);
      case 0xD:
        return sub_26BC1C(v4);
      case 0xE:
        goto LABEL_103;
      default:
        if ( dword_46D448 )
          v66 = (const char *)sub_21B3C4(a1);
        else
          v66 = *a1;
        sub_946E0("Cannot look up value of a botched symbol `%s'.", v66);
    }
  }
  return (*v11)(a1, a3);
}
