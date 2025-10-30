int __fastcall sub_158F2C(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, int ***a5)
{
  int **v9; // r1
  int **v10; // r10
  int **v11; // r1
  int **v12; // r1
  int v13; // r4
  int v15; // r0
  int **v16; // [sp+Ch] [bp-8h]

  if ( sub_B85B0(a2[4]) )
    return sub_C6A30((int)a1, a2);
  if ( !sub_B85B0(*(_DWORD *)(a3 + 16)) )
  {
    sub_130BC0((int)a5);
    v10 = sub_130CCC(a5, v9);
    v16 = sub_130CCC(a5, v11);
    v13 = (int)sub_130CCC(a5, v12);
    if ( v13 )
    {
      if ( (*(int (__fastcall **)(_DWORD *, int **, _DWORD, _DWORD, int ***))(*a1 + 136))(
             a1,
             v10,
             a2[4],
             *(_DWORD *)(a3 + 16),
             a5)
        && (*(int (__fastcall **)(_DWORD *, int **, _DWORD, _DWORD, int ***))(*a1 + 136))(a1, v16, a4[2], a2[4], a5)
        && sub_174BC8(v16, a2[2], v16)
        && (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int ***))(*a1 + 136))(
             a1,
             v13,
             a4[2],
             *(_DWORD *)(a3 + 16),
             a5)
        && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int, int ***))(*a1 + 136))(a1, a2[4], a2[2], v13, a5)
        && sub_174BC8(v13, v13, *(_DWORD *)(a3 + 8))
        && (*(int (__fastcall **)(_DWORD *, int **, int **, int, int ***))(*a1 + 136))(a1, v16, v16, v13, a5)
        && (*(int (__fastcall **)(_DWORD *, int, _DWORD, int ***))(*a1 + 140))(a1, v13, a4[2], a5)
        && sub_174BC8(v13, a4[3], v13)
        && (*(int (__fastcall **)(_DWORD *, int, int, int **, int ***))(*a1 + 136))(a1, v13, v13, v10, a5)
        && sub_174BC8(v16, v13, v16)
        && (*(int (__fastcall **)(_DWORD *, int, _DWORD, int **, int ***))(*a1 + 136))(a1, v13, a4[2], v10, a5)
        && (*(int (__fastcall **)(_DWORD *, int, int, int ***))(*a1 + 148))(a1, v13, v13, a5)
        && (*(int (__fastcall **)(_DWORD *, int **, int **, int, int ***))(*a1 + 136))(a1, v16, v16, v13, a5)
        && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int, int ***))(*a1 + 136))(a1, a2[2], a2[4], v13, a5)
        && sub_174BC8(v13, a4[2], a2[2])
        && (*(int (__fastcall **)(_DWORD *, int, int, int **, int ***))(*a1 + 136))(a1, v13, v13, v16, a5)
        && sub_174BC8(a2[3], a4[3], v13)
        && sub_B8930((int **)a2[4], 1) )
      {
        v13 = 1;
        v15 = a2[2];
        a2[5] = 1;
        sub_B86BC(v15, 0);
        sub_B86BC(a2[3], 0);
      }
      else
      {
        v13 = 0;
      }
    }
    else
    {
      sub_D0048(16, 285, 65, (int)"crypto/ec/ec2_smpl.c", 796);
    }
    sub_130C74(a5);
    return v13;
  }
  if ( sub_C6594(a2, a4) && sub_C6C74(a1, a2) )
    return 1;
  sub_D0048(16, 285, 16, (int)"crypto/ec/ec2_smpl.c", 785);
  return 0;
}
