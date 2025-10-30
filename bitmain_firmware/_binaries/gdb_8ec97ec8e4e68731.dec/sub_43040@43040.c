int __fastcall sub_43040(_DWORD *a1, int a2)
{
  int v4; // r5
  const char *v5; // r0
  int v6; // r5
  const char *v7; // r0
  int v8; // r5
  const char *v9; // r0
  int v11; // r6
  int v12; // r9
  int v13; // r7
  int v14; // r8
  int v15; // r0
  int v16; // r5
  const char *v17; // r6
  const char *v18; // r0

  if ( a1[5] )
  {
    if ( a1[6] )
    {
      if ( a1[8] || a1[15] != 11 )
      {
        if ( dword_47202C )
        {
          v6 = *(_DWORD *)sub_242FC8(a1);
          v7 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
          sub_2594B0(v6, "RSRL: NOT resuming LWP %s, has pending status\n", v7);
        }
      }
      else
      {
        v11 = sub_1DDB40(*a1, a1[1], a1[2]);
        v12 = sub_1DD58C(v11);
        v13 = sub_92E28(v12);
        v14 = sub_1DFB3C(v11);
        v15 = sub_9904C(a1, a2);
        if ( v15 || (v15 = sub_CF680(*(_DWORD *)(v11 + 4), v14)) == 0 )
        {
          if ( dword_47202C )
          {
            v16 = *(_DWORD *)sub_242FC8(v15);
            v17 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
            v18 = (const char *)sub_25AC8C(v12, v14);
            sub_2594B0(v16, "RSRL: resuming stopped-resumed LWP %s at %s: step=%d\n", v17, v18, a1[10]);
          }
          sub_40DF8(a1, a1[10], 0);
        }
        sub_92E40(v13);
      }
    }
    else if ( dword_47202C )
    {
      v4 = *(_DWORD *)sub_242FC8(a1);
      v5 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
      sub_2594B0(v4, "RSRL: NOT resuming LWP %s, not resumed\n", v5);
    }
    return 0;
  }
  if ( !dword_47202C )
    return 0;
  v8 = *(_DWORD *)sub_242FC8(a1);
  v9 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
  sub_2594B0(v8, "RSRL: NOT resuming LWP %s, not stopped\n", v9);
  return 0;
}
