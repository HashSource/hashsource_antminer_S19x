int __fastcall sub_1816A0(int *a1, int a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r0
  __int64 v11; // r0

  if ( a1[4] && sub_CE098(*(_DWORD **)(a2 + 136), a1[3]) )
  {
    v4 = sub_242274(a1);
    v5 = a1[4];
    v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 24) + 24) + 20);
    a1[6] = v6;
    if ( v6 )
    {
      if ( **(_BYTE **)(v6 + 24) != 10 )
      {
        v7 = sub_15F70C(v4);
        v8 = ((int (__fastcall *)(int, _DWORD, int))loc_15B3A0)(v5, 0, v7);
        v9 = ((int (__fastcall *)(int, int))loc_18154C)(v8, a1[6]);
        a1[5] = v9;
        if ( v9 )
          a1[7] = sub_26EEB8();
      }
      return 1;
    }
    v11 = sub_94700((int)"infcmd.c", 1808, "finish_command: function has no target type");
    return sub_18176C(v11, HIDWORD(v11));
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 132) )
      return 1;
    sub_242274(a1);
    return 1;
  }
}
