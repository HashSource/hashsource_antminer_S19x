int sub_3209C()
{
  _DWORD *v0; // r4
  int v1; // r1
  int result; // r0
  int v3; // r7
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r3
  _DWORD **v8; // r0
  int v9; // r1
  _DWORD *v10; // r5
  int v11; // r0
  unsigned int v12; // r8
  int v13; // r9
  int v14; // r10
  unsigned int v15; // r9
  int v16; // r10
  int v17; // r9
  int v18; // r11
  int v19; // r9
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r5
  int v24; // r8
  int v25; // r11
  int v26; // r8
  _DWORD *v27; // r5
  int v28; // r3
  int v29; // r9
  const char *v30; // r8
  const char *v31; // r0
  int v32; // r1
  __int64 v33; // r0
  _DWORD *v34; // r4
  _DWORD *v35; // r0
  int v36; // r0
  int v37; // r0
  _DWORD v38[3]; // [sp+Ch] [bp-50h] BYREF
  _DWORD *v39[17]; // [sp+18h] [bp-44h] BYREF

  v0 = (_DWORD *)sub_31060();
  result = sub_15F70C(v0, v1);
  if ( v0[10] )
  {
    v3 = result;
    v4 = sub_9253C(sub_31128, 0);
    v5 = sub_1DDBBC();
    v6 = (_DWORD *)sub_1DFB3C(v5);
    v7 = v0[10];
    v39[1] = v6;
    v8 = (_DWORD **)sub_324030(v7, v39, 0);
    if ( !v8 )
      return sub_92620(v4);
    v10 = *v8;
    if ( !*v8 )
      return sub_92620(v4);
    v11 = sub_15F70C(v8, v9);
    v12 = v10[2];
    v13 = v11;
    if ( v12 <= 1 )
    {
      if ( v12 )
        return sub_92640(v4);
      return sub_92620(v4);
    }
    if ( v12 - 2 <= 1 )
    {
      v14 = sub_92E28();
      v15 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v10 + 12))(*v10, v13);
      sub_92E40(v14);
      if ( v15 == 2 )
      {
        v12 = 2;
        goto LABEL_8;
      }
      if ( v15 > 1 )
      {
LABEL_8:
        sub_1B85F4(dword_487D2C);
        v16 = sub_9253C(sub_1B861C, dword_487D2C);
        v17 = sub_92E28();
        v18 = (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)*v10 + 20))(*v10, 1, v3);
        sub_92E40(v17);
        if ( v18 )
        {
          v19 = sub_26EBA8(v18);
          if ( v19 )
          {
            *v0 = 0;
            sub_31684(v0);
            if ( v20 )
            {
              if ( *v0 != v19 )
              {
                sub_92620(v16);
                return sub_92640(v4);
              }
              if ( v12 == 3
                && (v24 = sub_92E28(),
                    v25 = (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)*v10 + 20))(*v10, 2, v3),
                    sub_92E40(v24),
                    v25) )
              {
                v26 = sub_26EBA8(v25);
                v21 = v16;
                if ( v26 )
                {
                  sub_92620(v16);
                  v27 = (_DWORD *)v0[11];
                  if ( !v27 )
                  {
LABEL_17:
                    v0[11] = 0;
                    v0[11] = sub_31E70(v0);
                    return sub_92640(v4);
                  }
                  v28 = v0[9];
                  if ( !v28 )
                    goto LABEL_32;
                  if ( off_489C6C() )
                  {
                    v27 = (_DWORD *)v0[11];
                    v28 = v0[9];
LABEL_32:
                    while ( *v27 )
                      v27 = (_DWORD *)*v27;
                    v29 = *(_DWORD *)(v27[1] + 12);
                    if ( v28 )
                    {
                      v30 = (const char *)sub_989F0(v26, *v27, 4);
                      v31 = (const char *)sub_989F0(v29, 0, 4);
                      sub_93170(v39, 64, "start=%s;prev=%s", v30, v31);
                      if ( sub_31D5C(v38, (int)v39) )
                      {
                        *v27 = v38[0];
                        return sub_92640(v4);
                      }
                    }
                    else
                    {
                      v32 = *(_DWORD *)(v27[1] + 12);
                      v39[0] = v27;
                      if ( sub_314B8(v26, v32, v39, 0) )
                        return sub_92640(v4);
                    }
                  }
LABEL_15:
                  v22 = (_DWORD *)v0[11];
                  if ( v22 )
                  {
                    do
                    {
                      v23 = (_DWORD *)*v22;
                      sub_200A30(v22);
                      v22 = v23;
                    }
                    while ( v23 );
                  }
                  goto LABEL_17;
                }
              }
              else
              {
                v21 = v16;
              }
              sub_92620(v21);
              goto LABEL_15;
            }
          }
        }
      }
      return sub_92620(v4);
    }
    v33 = sub_94700(
            "solib-svr4.c",
            1761,
            "%s: Assertion `%s' failed.",
            "probe_action solib_event_probe_action(probe_and_action*)",
            "action == FULL_RELOAD || action == UPDATE_OR_RELOAD");
    if ( HIDWORD(v33) != 1 )
    {
      v37 = sub_339E78(v33);
      sub_92E60(v37);
    }
    v34 = (_DWORD *)sub_339E78(v33);
    v35 = (_DWORD *)sub_242FB4();
    sub_154B38(*v35, *v34, v34[1], v34[2]);
    v36 = sub_92620(v4);
    return sub_339EF8(v36);
  }
  return result;
}
