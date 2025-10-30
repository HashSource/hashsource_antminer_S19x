int __fastcall sub_15919C(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int **v9; // r4
  int v10; // r0
  int v11; // r2
  int (__fastcall *v13)(_DWORD *, _DWORD, _DWORD, int); // r4
  int v14; // r4
  int v15; // r4
  int **v16; // r4
  int v17; // r0
  int v18; // r3
  int (__fastcall *v19)(_DWORD *, _DWORD, _DWORD, int); // r4

  if ( *(_DWORD *)(a4 + 20) )
  {
    do
    {
      v9 = (int **)a3[4];
      v10 = sub_B85BC((_DWORD *)a1[10]);
      if ( !sub_136480(v9, v10 - 1, -1, 0) )
      {
        v11 = 701;
LABEL_6:
        sub_D0048(16, 288, 3, (int)"crypto/ec/ec2_smpl.c", v11);
        return 0;
      }
    }
    while ( sub_B85B0(a3[4]) );
    v13 = *(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 152);
    if ( v13 )
    {
      if ( !v13(a1, a3[4], a3[4], a5) )
        return 0;
      v15 = *a1;
    }
    else
    {
      v15 = *a1;
    }
    if ( (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(v15 + 136))(
           a1,
           a3[2],
           *(_DWORD *)(a4 + 8),
           a3[4],
           a5) )
    {
      do
      {
        v16 = (int **)a2[3];
        v17 = sub_B85BC((_DWORD *)a1[10]);
        if ( !sub_136480(v16, v17 - 1, -1, 0) )
        {
          v11 = 716;
          goto LABEL_6;
        }
      }
      while ( sub_B85B0(a2[3]) );
      v18 = *a1;
      v19 = *(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 152);
      if ( v19 )
      {
        if ( !v19(a1, a2[3], a2[3], a5) )
          return 0;
        v18 = *a1;
      }
      if ( (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(v18 + 140))(a1, a2[4], *(_DWORD *)(a4 + 8), a5)
        && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 140))(a1, a2[2], a2[4], a5)
        && sub_174BC8(a2[2], a2[2], a1[18])
        && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(a1, a2[4], a2[4], a2[3], a5)
        && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(a1, a2[2], a2[2], a2[3], a5) )
      {
        v14 = 1;
        a3[5] = 0;
        a2[5] = 0;
        return v14;
      }
    }
  }
  return 0;
}
