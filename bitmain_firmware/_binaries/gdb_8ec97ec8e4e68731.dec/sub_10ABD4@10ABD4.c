int __fastcall sub_10ABD4(int a1, int a2)
{
  _DWORD *v3; // r11
  int v5; // r0
  int v6; // r8
  int v7; // r4
  int (__fastcall *v8)(int, int, _DWORD); // r9
  int v9; // r5
  int v10; // r6
  int v11; // r0

  v3 = *(_DWORD **)a2;
  v5 = sub_194570(**(_DWORD **)a2, a1);
  v6 = v3[2];
  v7 = *(_DWORD *)(a2 + 4) + 1;
  if ( v6 <= v7 )
  {
LABEL_6:
    v10 = 0;
  }
  else
  {
    v8 = (int (__fastcall *)(int, int, _DWORD))v5;
    v9 = 4 * v7;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v3[3] + v9);
      v9 += 4;
      v11 = sub_21B7DC(v10);
      if ( v8(v11, a1, 0) )
        break;
      if ( v6 == ++v7 )
        goto LABEL_6;
    }
  }
  *(_DWORD *)(a2 + 4) = v7;
  return v10;
}
