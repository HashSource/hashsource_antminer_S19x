int __fastcall sub_CBA4C(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r4
  int v7; // r9
  int (__fastcall *v9)(_DWORD *, int, int, int); // r7
  int v10; // r1
  int v11; // r5

  sub_130BC0(a3);
  v6 = sub_130CCC(a3);
  v7 = sub_130CCC(a3);
  if ( v7 )
  {
    do
    {
      sub_D1260();
      v11 = sub_1365E8(v6, a1[10]);
      sub_D128C();
      if ( !v11 )
      {
        v11 = 1;
        goto LABEL_6;
      }
    }
    while ( sub_B85B0(v6) );
    v9 = *(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 152);
    if ( v9 )
    {
      if ( !v9(a1, v6, v6, a3) )
        goto LABEL_6;
      v10 = *a1;
    }
    else
    {
      v10 = *a1;
    }
    if ( (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int, int))(v10 + 136))(a1, a2[4], a2[4], v6, a3)
      && (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v7, v6, a3)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int, int))(*a1 + 136))(a1, a2[2], a2[2], v7, a3)
      && (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v7, v7, v6, a3)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int, int))(*a1 + 136))(a1, a2[3], a2[3], v7, a3) )
    {
      v11 = 1;
      a2[5] = 0;
    }
  }
  else
  {
    v11 = 0;
    sub_D0048(16, 287, 65, "crypto/ec/ecp_smpl.c", 1434);
  }
LABEL_6:
  sub_130C74(a3);
  return v11;
}
