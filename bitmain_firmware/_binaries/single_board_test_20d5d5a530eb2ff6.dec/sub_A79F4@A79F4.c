int __fastcall sub_A79F4(int a1)
{
  int v2; // r5
  int v3; // r6
  unsigned int v4; // r5
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r3
  unsigned int v11; // r6
  int v12; // r6
  int v13; // r0

  v2 = *(_DWORD *)(a1 + 128);
  v3 = *(_DWORD *)(v2 + 280);
  if ( v3 )
  {
    v6 = sub_882E4(a1);
    *(_DWORD *)(v2 + 284) = v3 - sub_B6ECC(v6, 49, 0, 0);
    v2 = *(_DWORD *)(a1 + 128);
    *(_DWORD *)(v2 + 280) = 0;
  }
  v4 = *(_DWORD *)(v2 + 284);
  if ( v4 >= sub_A79DC(a1) )
    return 1;
  if ( (sub_8B860(a1) & 0x1000) == 0 )
  {
    v7 = *(_DWORD *)(a1 + 128);
    v8 = sub_882E4(a1);
    v9 = sub_B6ECC(v8, 40, 0, 0);
    v10 = *(_DWORD *)(a1 + 128);
    *(_DWORD *)(v7 + 284) = v9;
    v11 = *(_DWORD *)(v10 + 284);
    if ( v11 < sub_A79DC(a1) )
    {
      v12 = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v12 + 284) = sub_A79DC(a1);
      v13 = sub_882E4(a1);
      sub_B6ECC(v13, 42, *(_DWORD *)(*(_DWORD *)(a1 + 128) + 284), 0);
    }
    return 1;
  }
  return 0;
}
