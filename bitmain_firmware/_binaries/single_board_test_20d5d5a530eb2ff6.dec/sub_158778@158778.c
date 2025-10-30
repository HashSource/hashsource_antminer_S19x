int __fastcall sub_158778(int a1, _DWORD *a2, int a3, int a4)
{
  bool v4; // zf
  int v7; // r5
  _UNKNOWN **v8; // r0

  v4 = a4 == 0;
  if ( a4 )
    v4 = a3 == 0;
  if ( v4 )
  {
    sub_D0048(16, 163, 67, (int)"crypto/ec/ec2_smpl.c", 287);
    return 0;
  }
  else if ( sub_B89E4(a2[2], a3)
         && (sub_B86BC(a2[2], 0), sub_B89E4(a2[3], a4))
         && (sub_B86BC(a2[3], 0), v7 = a2[4], v8 = sub_B81FC(), sub_B89E4(v7, (int)v8)) )
  {
    sub_B86BC(a2[4], 0);
    a2[5] = 1;
    return 1;
  }
  else
  {
    return 0;
  }
}
