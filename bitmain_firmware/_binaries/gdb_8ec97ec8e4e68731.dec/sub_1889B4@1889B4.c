int sub_1889B4()
{
  void *v0; // r8
  int v1; // r7
  int v2; // r0
  _DWORD *v3; // r9
  int v4; // r10
  int v5; // r3
  int v6; // r0
  _DWORD **v7; // r6
  int v8; // r9
  int v9; // r0
  _DWORD *i; // r6
  int v11; // r0
  _BOOL4 v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _QWORD *v16; // r6
  __int64 v17; // r0
  int v18; // r2
  void *v19; // r4
  void *v20; // r8
  bool v22; // zf
  _DWORD *v23; // r10
  int v24; // r3
  int v25; // r0
  int v26; // r0
  int v27; // r8
  int v28; // r3
  int v29; // r0
  int v30; // r0
  _BOOL4 v31; // r0
  int *v32; // r0
  int v33; // r3
  int v34; // r4
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // [sp+Ch] [bp-28h]
  _DWORD v41[5]; // [sp+10h] [bp-24h] BYREF
  _DWORD v42[4]; // [sp+24h] [bp-10h] BYREF

  v0 = sub_9253C((int)nullsub_39, 0);
  v1 = dword_487960;
  ++qword_487998;
  if ( dword_487950 )
  {
    if ( (dword_487960 & 0xFFFFFFFD) != 0 )
    {
      if ( dword_487960 != 13 )
        goto LABEL_62;
      v2 = sub_240794();
      if ( !dword_487950 )
        goto LABEL_29;
      goto LABEL_7;
    }
    if ( !sub_98F78(&qword_4878EC, &qword_475848) )
    {
      v35 = ps_getpid_0((int)&qword_4878EC);
      sub_98F50(v41, v35);
      v42[0] = v41[0];
      v42[1] = v41[1];
      v42[2] = v41[2];
      sub_9253C((int)dword_23F744, (int)v42);
    }
  }
  else
  {
    sub_9253C((int)dword_23F744, (int)&dword_46BBCC);
  }
  while ( 1 )
  {
    v2 = sub_240794();
    if ( v1 != 1 )
    {
      if ( !dword_487950 )
      {
LABEL_29:
        v2 = sub_98F78(&qword_4879A0, &qword_4878EC);
        if ( !v2 )
        {
          v2 = sub_22EBBC(0);
          if ( v2 )
          {
            if ( v1 == 2 )
              goto LABEL_14;
            v22 = v1 == 0;
            if ( v1 )
              v22 = v1 == 13;
            if ( !v22 )
            {
              v23 = (_DWORD *)dword_48769C;
              v24 = dword_487668;
              dword_487668 = dword_48769C;
              v40 = v24;
              if ( dword_48769C )
              {
                sub_22F048(v2);
                while ( 1 )
                {
                  v25 = sub_23095C(qword_4878EC, HIDWORD(qword_4878EC), dword_4878F4);
                  sub_259F10("[Switching to %s]\n", v25);
                  v26 = sub_B77B4();
                  v23 = (_DWORD *)*v23;
                  if ( !v23 )
                    break;
                  dword_487668 = (int)v23;
                  sub_22F048(v26);
                }
              }
              v2 = qword_4878EC;
              qword_4879A0 = qword_4878EC;
              unk_4879A8 = dword_4878F4;
              dword_487668 = v40;
            }
          }
        }
      }
LABEL_7:
      if ( v1 == 13 )
      {
        v3 = (_DWORD *)dword_48769C;
        v4 = dword_487668;
        dword_487668 = dword_48769C;
        if ( dword_48769C )
        {
          if ( !*(_DWORD *)(dword_48769C + 68) )
            goto LABEL_12;
          while ( 1 )
          {
            v3 = (_DWORD *)*v3;
            if ( !v3 )
              break;
            while ( 1 )
            {
              v5 = v3[17];
              dword_487668 = (int)v3;
              if ( v5 )
                break;
LABEL_12:
              sub_22F048(v2);
              v2 = sub_259F10("No unwaited-for children left.\n");
              v3 = (_DWORD *)*v3;
              if ( !v3 )
                goto LABEL_13;
            }
          }
        }
LABEL_13:
        dword_487668 = v4;
      }
LABEL_14:
      v6 = sub_188978(v2);
      if ( dword_48790C )
        goto LABEL_56;
      goto LABEL_15;
    }
    if ( dword_48790C )
    {
      v36 = ((int (__fastcall *)(int))loc_23DBE4)(v2);
      v2 = sub_1B8CE0(*(_DWORD *)(v36 + 144));
    }
    if ( !dword_487950 )
      goto LABEL_29;
    v6 = sub_188978(v2);
    if ( dword_48790C )
LABEL_56:
      v6 = sub_1C7810(v6);
LABEL_15:
    v7 = (_DWORD **)dword_48769C;
    v8 = dword_487668;
    dword_487668 = dword_48769C;
    if ( dword_48769C )
    {
      v9 = sub_1541C0(v6);
      for ( i = *v7; i; i = (_DWORD *)*i )
      {
        dword_487668 = (int)i;
        v9 = sub_1541C0(v9);
      }
    }
    dword_487668 = v8;
    sub_92620(v0);
    v12 = sub_15D504(v11);
    if ( v12 )
    {
      if ( dword_487910 == 1 )
      {
        v34 = sub_15F70C(v12);
        if ( sub_15DA8C(v34) != 1 )
        {
          v38 = sub_94700(
                  (int)"infrun.c",
                  8290,
                  "%s: Assertion `%s' failed.",
                  "int normal_stop()",
                  "get_frame_type (frame) == DUMMY_FRAME");
          v39 = sub_339EF8(v38);
          sub_338FFC(v39);
        }
        sub_1601BC(v34);
      }
      v13 = sub_15F70C(v12);
      v14 = sub_15E10C(v13);
      v15 = sub_15F70C(v14);
      sub_20DB1C(v15);
    }
    if ( !dword_4879AC )
      goto LABEL_44;
    v16 = sub_93028(0x20u);
    v17 = qword_4878EC;
    v18 = dword_4878F4;
    v0 = (void *)qword_487998;
    *v16 = qword_487998;
    v16[1] = v17;
    *((_DWORD *)v16 + 4) = v18;
    *((_DWORD *)v16 + 6) = *(_DWORD *)(sub_183688() + 8);
    if ( sub_98F78(&qword_4878EC, &qword_475848) )
    {
      *((_DWORD *)v16 + 5) = 0;
      goto LABEL_25;
    }
    v32 = (int *)((int (*)(void))loc_23DBE4)();
    v33 = *v32;
    *((_DWORD *)v16 + 5) = v32;
    if ( v33 >= 0 )
      break;
    sub_94700(
      (int)"common/refcounted-object.h",
      34,
      "%s: Assertion `%s' failed.",
      "void refcounted_object::incref()",
      "m_refcount >= 0");
LABEL_62:
    sub_9253C((int)dword_23F744, (int)&qword_4878EC);
  }
  *v32 = v33 + 1;
LABEL_25:
  v19 = sub_9253C((int)&loc_18647C, (int)v16);
  v20 = sub_92E28();
  sub_5952C(dword_4879AC);
  sub_92E40((int)v20);
  if ( sub_98F78((_DWORD *)v16 + 2, &qword_4878EC)
    && (v27 = *((_DWORD *)v16 + 6), v27 == *(_DWORD *)(sub_183688() + 8))
    && ((v28 = *((_DWORD *)v16 + 5)) == 0 || !*(_DWORD *)(v28 + 44))
    && qword_487998 == *v16 )
  {
    sub_92620(v19);
LABEL_44:
    if ( sub_98F78(&qword_4878EC, &qword_475848) )
    {
      sub_1B8C20(0, dword_4879B0);
    }
    else
    {
      v29 = ((int (*)(void))loc_23DBE4)();
      sub_1B8C20(*(_DWORD *)(v29 + 136), dword_4879B0);
    }
    v30 = sub_B7530();
    if ( sub_22EBBC(v30) )
      v31 = (v1 & 0xFFFFFFFD) != 0;
    else
      v31 = 0;
    if ( v31 )
    {
      v37 = ((int (*)(void))loc_23DBE4)();
      sub_DBBA0(*(int **)(v37 + 136));
    }
    sub_1849C0();
    return 0;
  }
  else
  {
    sub_92620(v19);
    return 1;
  }
}
