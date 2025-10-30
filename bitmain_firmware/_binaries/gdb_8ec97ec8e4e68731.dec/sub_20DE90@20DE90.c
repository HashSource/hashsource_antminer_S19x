int __fastcall sub_20DE90(int *a1, int a2, unsigned int a3, int a4, int a5)
{
  int v9; // r6
  int v10; // r5
  int v11; // r7
  int v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r3
  int v19; // r6
  unsigned int v20; // r7
  int v21; // r0
  int v23; // r11
  bool v24; // cc
  int v25; // r7
  int v26; // r0
  int v27; // r2
  int v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r2
  int v32; // r3
  char *v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r2
  int v37; // r3
  int v38; // r9
  void *v39; // r9
  int v40; // r10
  _DWORD *v41; // r0
  int v42; // r0
  int v43; // r9
  int v44; // r2
  int v45; // r3
  int v46; // r2
  int v47; // r3
  int v48; // r2
  int v49; // r9
  unsigned int v50; // r0
  _DWORD *v51; // r9
  int v52; // r2
  int v53; // r3
  int v54; // r2
  int v55; // r3
  unsigned int v56; // r3
  int v57; // r8
  int v58; // r10
  int v59; // r0
  int v60; // r0
  _DWORD *v61; // r0
  int v62; // r2
  int v63; // r3
  char *v64; // r0
  int v65; // r0
  int v66; // r0
  unsigned int v67; // r6
  int v68; // r0
  int v69; // r0
  int v70; // r2
  int v71; // r3
  int v72; // r0
  int v73; // [sp+8h] [bp-BCh]
  int v74; // [sp+Ch] [bp-B8h]
  int v75; // [sp+10h] [bp-B4h]
  int v76; // [sp+10h] [bp-B4h]
  unsigned int v77; // [sp+14h] [bp-B0h]
  unsigned int v78; // [sp+18h] [bp-ACh]
  _BOOL4 v79; // [sp+1Ch] [bp-A8h]
  int v80; // [sp+20h] [bp-A4h] BYREF
  int v81; // [sp+24h] [bp-A0h] BYREF
  int v82; // [sp+28h] [bp-9Ch] BYREF
  void *ptr; // [sp+2Ch] [bp-98h] BYREF
  _DWORD v84[3]; // [sp+30h] [bp-94h] BYREF
  char v85; // [sp+3Ch] [bp-88h] BYREF
  int v86; // [sp+4Ch] [bp-78h] BYREF
  int v87; // [sp+50h] [bp-74h]
  int v88; // [sp+5Ch] [bp-68h]
  unsigned int v89; // [sp+60h] [bp-64h]
  unsigned int v90; // [sp+64h] [bp-60h]
  int v91[5]; // [sp+74h] [bp-50h] BYREF
  int v92; // [sp+88h] [bp-3Ch]

  v9 = sub_15ECB4((int)a1);
  v10 = *(_DWORD *)sub_242FDC(v9);
  if ( sub_15DA8C((int)a1) != 1 && sub_15DA8C((int)a1) != 4 && sub_15DA8C((int)a1) != 5 )
  {
    ((void (__fastcall *)(int *, int *))loc_15E200)(&v86, a1);
    v23 = v87;
    v73 = v88;
    v24 = v87 != 0;
    if ( v87 )
      v24 = a3 > 2;
    v78 = v89;
    v79 = v87 == 0;
    v77 = v90;
    if ( v24 )
    {
LABEL_50:
      v56 = (a3 + 1) & 0xFFFFFFFD;
      if ( (dword_489688 & 0xFFFFFFFD) != 0 )
      {
        v62 = v23;
        if ( v23 )
          v62 = 1;
        if ( v56 )
          v63 = 0;
        else
          v63 = v62;
        if ( !v63 )
        {
LABEL_61:
          if ( a5 )
          {
            if ( sub_15E124((int)a1, v91) )
            {
              dword_489680 = v23;
              dword_489678 = v86;
              dword_489684 = v73;
              dword_48967C = v91[0];
              dword_489674 = 1;
              if ( !v86 )
              {
                dword_489674 = 0;
                dword_48967C = 0;
                dword_489680 = 0;
                dword_489684 = 0;
                sub_94700((int)"stack.c", 949, "Trying to set NULL pspace.");
                goto LABEL_65;
              }
            }
            else
            {
              dword_489674 = 0;
              dword_489678 = 0;
              dword_48967C = 0;
              dword_489680 = 0;
              dword_489684 = 0;
            }
          }
          v60 = sub_B7D94();
          v61 = (_DWORD *)sub_242F8C(v60);
          return sub_25680C(*v61);
        }
      }
      else
      {
        if ( v56 )
          goto LABEL_61;
        if ( !v23 )
        {
          v10 = sub_15ECB4((int)a1);
          v67 = sub_15DDFC((int)a1);
          v68 = sub_15DDFC((int)a1);
          sub_20C57C(v10, 1, v67, v68 + 1);
          goto LABEL_61;
        }
      }
      if ( a3 == -1 )
      {
        v66 = sub_20C86C(a1, v73, v78, v77);
        v58 = v66;
        if ( v66 )
          v58 = 1;
        v57 = v58;
      }
      else
      {
        v57 = 0;
        v58 = 0;
      }
      if ( !dword_48968C || (v65 = sub_15DDFC((int)a1), !sub_204F60(v23, v73, v57, v65)) )
      {
        if ( off_48A584 )
        {
          off_48A584(v23, v73, v73 + 1, 0);
        }
        else
        {
          sub_2665F0(v91);
          if ( !v92 )
            v58 = 0;
          if ( v58 )
          {
            v69 = sub_15DDFC((int)a1);
            sub_257630(v10, "addr", v9, v69);
            sub_257380(v10, "\t", v70, v71);
          }
          sub_2053D0(v23, v73, v73 + 1, 0);
        }
      }
      if ( !dword_489688 )
      {
        v59 = sub_15ECB4((int)a1);
        sub_20C57C(v59, -1, v78, v77);
      }
      goto LABEL_61;
    }
    v75 = sub_15ECB4((int)a1);
    v25 = *(_DWORD *)sub_242FDC(v75);
    v82 = 0;
    v80 = 0;
    v74 = sub_15E124((int)a1, &v82);
    sub_20DC2C((int *)&ptr, (int)a1, &v80, &v81);
    if ( a2 )
      v26 = sub_15DA7C((int)a1);
    else
      v26 = 0;
    sub_B7BD0(v26, v75, v82);
    sub_2578AC(v25, 0);
    if ( a2 )
    {
      sub_257380(v25, "#", v27, v28);
      v29 = sub_15DA7C((int)a1);
      sub_25754C(v25, 2, -1, "level", v29);
    }
    sub_2665F0(v91);
    if ( v92 )
    {
      if ( !v23 )
        goto LABEL_30;
      v30 = sub_20C86C(a1, v73, v78, v77) != 0;
      if ( a3 == 2 )
        v30 |= 1u;
      if ( v30 )
      {
LABEL_30:
        sub_B7C54();
        if ( v74 )
          sub_257630(v25, "addr", v75, v82);
        else
          sub_2575E8(v25, "addr", "<unavailable>");
        sub_B7C74();
        sub_257380(v25, " in ", v31, v32);
      }
    }
    sub_B7C94();
    sub_256760(v84);
    v33 = (char *)ptr;
    v84[1] = &v85;
    if ( !ptr )
      v33 = "??";
    v84[0] = &off_3F2924;
    v84[2] = 0;
    v85 = 0;
    sub_25A850(v84, v33, v80, 2);
    sub_25765C(v25, "func", v84);
    sub_2573C0(v25, "   ");
    sub_B7CB4();
    sub_257380(v25, " (", v34, v35);
    if ( a4 )
    {
      v38 = sub_15ECB4((int)a1);
      if ( ((int (*)(void))loc_169B98)() )
      {
        v76 = ((int (__fastcall *)(int, int *))loc_169BE4)(v38, a1);
        if ( v76 < 0 )
        {
          v72 = sub_94700(
                  (int)"stack.c",
                  1194,
                  "%s: Assertion `%s' failed.",
                  "void print_frame(frame_info*, int, print_what, int, symtab_and_line)",
                  "numargs >= 0");
          sub_339E78(v72);
          sub_92E60();
        }
      }
      else
      {
        v76 = -1;
      }
      sub_2578AC(v25, 1);
      v39 = sub_92E28();
      v40 = v81;
      v41 = (_DWORD *)sub_242F8C(v39);
      ((void (__fastcall *)(int, int *, int, _DWORD))loc_20D758)(v40, a1, v76, *v41);
      sub_92E40((int)v39);
      v42 = sub_25734C(v25, 1);
      sub_258BD4(v42);
    }
    sub_257380(v25, ")", v36, v37);
    if ( v23 )
    {
      v43 = ((int (__fastcall *)(int))loc_2043D4)(v23);
      sub_B7CD4();
      sub_2573C0(v25, "   ");
      sub_257380(v25, " at ", v44, v45);
      sub_B7CF4();
      sub_2575E8(v25, "file", v43);
      if ( sub_2573F0(v25) )
      {
        v64 = sub_204308(v23);
        sub_2575E8(v25, "fullname", v64);
      }
      sub_B7D14();
      sub_257380(v25, ":", v46, v47);
      sub_B7D34();
      sub_257504(v25, "line", v73);
      sub_B7D54();
      if ( !v74 )
        goto LABEL_48;
      v48 = v79;
      if ( !ptr )
        v48 = 1;
      if ( !v48 )
        goto LABEL_48;
    }
    else if ( !v74 )
    {
LABEL_48:
      sub_256478(v84);
      sub_25734C(v25, 0);
      sub_257380(v25, &word_356638, v54, v55);
      if ( ptr )
        free(ptr);
      goto LABEL_50;
    }
    v49 = sub_15DABC((int)a1);
    v50 = sub_15DDFC((int)a1);
    v51 = sub_20192C(v49, v50);
    if ( v51 )
    {
      sub_B7D74();
      sub_2573C0(v25, "  ");
      sub_257380(v25, " from ", v52, v53);
      sub_2575E8(v25, "from", v51);
    }
    goto LABEL_48;
  }
  sub_2578AC(v10, 0);
  if ( a2 )
    v11 = sub_15DA7C((int)a1);
  else
    v11 = 0;
  v12 = sub_15DDFC((int)a1);
  sub_B7BD0(v11, v9, v12);
  if ( a2 )
  {
    sub_257380(v10, "#", v13, v14);
    v15 = sub_15DA7C((int)a1);
    sub_25754C(v10, 2, -1, "level", v15);
  }
  if ( sub_2573F0(v10) )
  {
    sub_B7C54();
    v16 = sub_15DDFC((int)a1);
    sub_257630(v10, "addr", v9, v16);
    sub_B7C74();
  }
  if ( sub_15DA8C((int)a1) != 1 )
  {
    if ( sub_15DA8C((int)a1) == 4 )
    {
      sub_B7C34();
      sub_2575E8(v10, "func", "<signal handler called>");
    }
    else if ( sub_15DA8C((int)a1) == 5 )
    {
      sub_2575E8(v10, "func", "<cross-architecture call>");
    }
    goto LABEL_14;
  }
LABEL_65:
  sub_B7C14();
  sub_2575E8(v10, "func", "<function called from gdb>");
LABEL_14:
  sub_257380(v10, &word_356638, v17, v18);
  sub_B7D94();
  if ( (dword_489688 & 0xFFFFFFFD) == 0 )
  {
    v19 = sub_15ECB4((int)a1);
    v20 = sub_15DDFC((int)a1);
    v21 = sub_15DDFC((int)a1);
    sub_20C57C(v19, 1, v20, v21 + 1);
  }
  return sub_25734C(v10, 0);
}
