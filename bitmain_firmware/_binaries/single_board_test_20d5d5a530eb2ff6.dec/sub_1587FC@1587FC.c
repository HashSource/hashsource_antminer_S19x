int __fastcall sub_1587FC(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int *v7; // r4
  int *v8; // r0
  int v9; // r4

  if ( sub_C6CD4(a1, a2) )
  {
    sub_D0048(16, 162, 106, (int)"crypto/ec/ec2_smpl.c", 320);
    return 0;
  }
  else
  {
    v7 = (int *)a2[4];
    v8 = (int *)sub_B81FC();
    v9 = sub_B8354(v7, v8);
    if ( !v9 )
    {
      if ( a3 )
      {
        if ( !sub_B89E4(a3, a2[2]) )
          return v9;
        sub_B86BC(a3, 0);
      }
      if ( !a4 )
        return 1;
      if ( sub_B89E4(a4, a2[3]) )
      {
        v9 = 1;
        sub_B86BC(a4, 0);
      }
      return v9;
    }
    sub_D0048(16, 162, 66, (int)"crypto/ec/ec2_smpl.c", 326);
    return 0;
  }
}
