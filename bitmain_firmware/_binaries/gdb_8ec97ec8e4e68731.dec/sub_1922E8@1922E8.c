int __fastcall sub_1922E8(int a1, int a2, int a3)
{
  int *v4; // r5
  int v6; // r0
  int v7; // r0
  _DWORD *v9; // r0

  v4 = *(int **)(a1 + 12);
  v6 = sub_15ECB4(v4[1]);
  v7 = ((int (__fastcall *)(int, int))loc_167704)(v6, a2);
  if ( v7 == -1 )
  {
    if ( dword_4879D8 )
    {
      v9 = (_DWORD *)sub_242FC8(-1);
      sub_2594B0(*v9, "Could not recognize DWARF regnum %d", a2);
    }
    return (*(int (__fastcall **)(int))(a3 + 8))(a3);
  }
  else
  {
    sub_1DE1E0(*v4, v7, (void *)(a3 + 12));
    return (*(int (__fastcall **)(int))(a3 + 8))(a3);
  }
}
