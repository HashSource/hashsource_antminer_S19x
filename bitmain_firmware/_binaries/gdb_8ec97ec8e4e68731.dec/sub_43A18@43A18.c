int __fastcall sub_43A18(_DWORD *a1)
{
  int v1; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r1
  int v8; // r8
  const char *v9; // r7
  int v10; // r0
  const char *v11; // r9
  int v12; // r0
  const char *v13; // r0
  int v14; // r0
  int v15; // r4
  const char *v16; // r0

  v1 = a1[6];
  if ( v1 )
  {
    v1 = a1[8];
    if ( v1 )
    {
      if ( (unsigned int)(a1[11] - 1) > 1 )
        return 1;
    }
    else
    {
      if ( a1[15] == 11 )
        return v1;
      if ( (unsigned int)(a1[11] - 1) > 1 )
        return 1;
    }
    v4 = sub_1DDB40(*a1, a1[1], a1[2]);
    v5 = sub_1DFB3C(v4);
    v6 = v5;
    if ( v5 == a1[9] )
      return 1;
    if ( dword_47202C )
    {
      v8 = *(_DWORD *)sub_242FC8(v5);
      v9 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
      v10 = sub_16F654(v9);
      v11 = (const char *)sub_25AC8C(v10, a1[9]);
      v12 = sub_16F654(v11);
      v13 = (const char *)sub_25AC8C(v12, v6);
      v14 = sub_2594B0(v8, "SC: PC of %s changed.  was=%s, now=%s\n", v9, v11, v13);
      if ( dword_47202C )
      {
        v15 = *(_DWORD *)sub_242FC8(v14);
        v16 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
        sub_2594B0(v15, "SC: pending event of %s cancelled.\n", v16);
      }
    }
    v1 = 0;
    v7 = a1[10];
    a1[8] = 0;
    sub_42C80(a1, v7, 0);
  }
  return v1;
}
