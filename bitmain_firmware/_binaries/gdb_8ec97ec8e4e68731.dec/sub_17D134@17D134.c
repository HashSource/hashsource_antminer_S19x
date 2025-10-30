int __fastcall sub_17D134(_DWORD *a1)
{
  int **v1; // r5
  int *v3; // r6
  int v5; // r8
  int v6; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r6
  int v11; // r3
  __int64 v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r10
  int v16; // r11
  int v17; // r1
  int v18; // r0
  int v19; // r0
  int v20; // [sp+14h] [bp-8h]

  v1 = (int **)dword_487910;
  if ( dword_487910 != 1 )
    return 1;
  v3 = &dword_4878EC;
  sub_242274();
  v5 = sub_23EA78(dword_4878EC, dword_4878F0, dword_4878F4);
  v6 = a1[5];
  if ( **(_BYTE **)(v6 + 24) == 10 )
  {
    v8 = sub_26BB80(v6);
    v7 = v8;
  }
  else if ( a1[6] )
  {
    if ( v5 )
    {
      v7 = sub_26DD30(v6, 0, a1[7]);
      v8 = ((int (__fastcall *)(int, int, int, int))loc_23EAE4)(dword_4878EC, dword_4878F0, dword_4878F4, v7);
    }
    else
    {
      v12 = sub_26BB80(v6);
      v3 = (int *)a1[7];
      v7 = v12;
      v13 = sub_26BCB8(v12, HIDWORD(v12));
      v8 = sub_260F8C(v7, *(_DWORD *)(a1[5] + 20), 0, 0, 1, v3, v13, *(_DWORD *)(a1[5] + 20));
    }
  }
  else
  {
    v14 = sub_26BB80(v6);
    v1 = (int **)a1[3];
    v15 = a1[4];
    v16 = a1[5];
    v7 = v14;
    v20 = sub_1DDBBC(v14);
    v18 = sub_26BCB8(v7, v17);
    v8 = ((int (__fastcall *)(int **, int, int, int, int, _DWORD))loc_168BA4)(v1, v15, v16, v20, v18, 0);
    if ( v5 )
    {
      v8 = sub_1738E8(a1[5]);
      if ( v8 )
      {
        ((void (__fastcall *)(int, _DWORD))loc_26C6D0)(v7, a1[7]);
        v8 = ((int (__fastcall *)(int, int, int, int))loc_23EAE4)(dword_4878EC, dword_4878F0, dword_4878F4, v7);
      }
    }
  }
  if ( !v7 )
  {
    v19 = sub_94700(
            (int)"infcall.c",
            462,
            "%s: Assertion `%s' failed.",
            "value* get_call_return_value(call_return_meta_info*)",
            "retval != NULL");
    *v1 = v3;
    sub_338FFC(v19);
  }
  v9 = a1[10];
  a1[9] = v7;
  v10 = dword_487668;
  dword_487668 = v9;
  sub_22EFF4(v8);
  v11 = a1[10];
  dword_487668 = v10;
  *(_DWORD *)(v11 + 68) = 1;
  return 1;
}
