bool __fastcall sub_1585C0(int a1, int ***a2)
{
  int ***v3; // r4
  void **v4; // r7
  int **v5; // r1
  int **v6; // r0
  _BOOL4 v7; // r5

  v3 = a2;
  v4 = 0;
  if ( a2 || (v3 = (int ***)sub_130B08(), (v4 = (void **)v3) != 0) )
  {
    sub_130BC0((int)v3);
    v6 = sub_130CCC(v3, v5);
    v7 = (_BOOL4)v6;
    if ( v6 )
    {
      if ( sub_174D98(v6, *(_DWORD *)(a1 + 72), a1 + 44) )
        v7 = !sub_B85B0(v7);
      else
        v7 = 0;
    }
  }
  else
  {
    v4 = 0;
    sub_D0048(16, 159, 65, (int)"crypto/ec/ec2_smpl.c", 185);
    v7 = 0;
  }
  sub_130C74(v3);
  sub_130B5C(v4);
  return v7;
}
