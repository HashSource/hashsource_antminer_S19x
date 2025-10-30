void __fastcall sub_D9044(int a1, int *a2, int a3)
{
  int v3; // r5
  int v5; // r12
  bool v6; // cc
  int v7; // r2
  int v8; // r1
  int v9; // r2
  int v10; // r7
  unsigned int v11; // r3
  __int64 v12; // r0
  int v13; // r7
  __int64 v14; // r0

  v3 = *a2;
  v5 = dword_478348;
  if ( dword_478348 )
  {
    while ( *(_DWORD *)(v5 + 8) )
      v5 = *(_DWORD *)(v5 + 8);
    *a2 = 0;
    *(_DWORD *)(v5 + 8) = v3;
  }
  else
  {
    *a2 = 0;
    dword_478348 = v3;
  }
  if ( a1 )
  {
    v6 = (unsigned int)(*(_DWORD *)(v3 + 12) - 27) > 2;
    v7 = dword_46C098 - 1;
    *(_DWORD *)(v3 + 24) = dword_46C098;
    dword_46C098 = v7;
    if ( !v6 )
    {
      v13 = dword_478360;
      dword_478898 = dword_478360;
      v14 = sub_26CBF4("tpnum");
      sub_26CC80(v14, HIDWORD(v14), v13, v13 >> 31);
    }
  }
  else
  {
    sub_C8514(dword_478360 + 1);
    v10 = dword_478360;
    v11 = *(_DWORD *)(v3 + 12) - 27;
    *(_DWORD *)(v3 + 24) = dword_478360;
    if ( v11 <= 2 )
    {
      dword_478898 = v10;
      v12 = sub_26CBF4("tpnum");
      sub_26CC80(v12, HIDWORD(v12), v10, v10 >> 31);
    }
    sub_C7A04(v3);
  }
  sub_1B9BD8(v3);
  if ( a3 )
    sub_D72EC(1, v8, v9);
}
