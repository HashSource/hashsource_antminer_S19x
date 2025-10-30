int __fastcall sub_CB98C(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r6
  int v8; // r8
  int v9; // r4
  _BOOL4 v10; // r4
  int result; // r0

  v7 = a4;
  v8 = 0;
  if ( !a4 )
  {
    result = sub_130B4C();
    v7 = result;
    if ( !result )
      return result;
    v8 = result;
  }
  sub_130BC0(v7);
  v9 = sub_130CCC(v7);
  if ( v9 )
  {
    while ( sub_1365E8(v9, a1[10]) )
    {
      if ( !sub_B85B0(v9) )
      {
        if ( !(*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, a2, a3, v9, v7) )
          break;
        if ( sub_1330EC(a2, a2, a1[10], v7) )
        {
          v10 = (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, a2, a2, v9, v7) != 0;
        }
        else
        {
          v10 = 0;
          sub_D0048(16, 298, 165, "crypto/ec/ecp_smpl.c", 1401);
        }
        goto LABEL_7;
      }
    }
  }
  v10 = 0;
LABEL_7:
  sub_130C74(v7);
  sub_130B5C(v8);
  return v10;
}
