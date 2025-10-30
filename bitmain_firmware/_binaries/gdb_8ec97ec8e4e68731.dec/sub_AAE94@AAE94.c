int __fastcall sub_AAE94(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r2

  while ( 1 )
  {
    v2 = sub_26BC70(a1);
    v3 = sub_A0870(v2);
    if ( !sub_A2514(v3) )
      break;
    a1 = sub_A93B4(a1, "F", 0);
    v10 = sub_26BC70(a1);
    v11 = sub_A0870(v10);
    v12 = *(_DWORD *)(v11 + 24);
    if ( !v11 || !*(_DWORD *)(v12 + 8) && !*(_DWORD *)(v12 + 12) )
    {
      if ( v3 )
      {
        v13 = *(_DWORD *)(v3 + 24);
        v3 = *(_DWORD *)(v13 + 8);
        if ( !v3 )
          v3 = *(_DWORD *)(v13 + 12);
      }
      *(_DWORD *)(v12 + 8) = v3;
    }
  }
  v4 = sub_A2598(v3);
  v5 = sub_A0870(v4);
  v6 = v5;
  if ( v3 == v5 && !sub_A0E38(v5, "___XVE") )
    return a1;
  v7 = ((int (__fastcall *)(int))loc_26C09C)(a1);
  v8 = sub_A9EE8(v6, 0, v7, 0, 1);
  return sub_A14D4(a1, v8);
}
