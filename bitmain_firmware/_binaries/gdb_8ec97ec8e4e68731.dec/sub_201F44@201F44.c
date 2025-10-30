int __fastcall sub_201F44(int a1, int (__fastcall *a2)(int, int), int a3)
{
  signed int v6; // r0
  int v7; // r4
  int *v8; // r5
  void *v9; // r11
  int v10; // r9
  int v11; // r4
  int v12; // r6
  int v13; // t1
  int v14; // r0
  int v15; // r5
  int v16; // r4
  _DWORD v18[13]; // [sp+0h] [bp-34h] BYREF

  v6 = (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 260))();
  if ( v6 <= 0 )
    return 0;
  v8 = (int *)sub_93028(v6);
  v9 = sub_9253C((int)sub_1FFD3C, (int)v8);
  v10 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)(a1 + 4) + 264))(a1, v8);
  if ( v10 )
  {
    v11 = 0;
    while ( 1 )
    {
      v13 = *v8++;
      v12 = v13;
      ++v11;
      v14 = a2(v13, a3);
      if ( v14 )
        break;
      if ( v10 == v11 )
        goto LABEL_11;
    }
    v15 = sub_16F654(v14);
    v16 = *(_DWORD *)(v12 + 8);
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) == 5 && ((int (*)(void))loc_16A6AC)() )
    {
      memset(v18, 0, 0x30u);
      v18[2] = v16;
      ((void (__fastcall *)(int, int, _DWORD *))loc_16A6F8)(v15, v12, v18);
      v16 = v18[2];
    }
    v7 = v16 + *(_DWORD *)(*(_DWORD *)(v12 + 16) + 28);
  }
  else
  {
LABEL_11:
    v7 = 0;
  }
  sub_92620(v9);
  return v7;
}
