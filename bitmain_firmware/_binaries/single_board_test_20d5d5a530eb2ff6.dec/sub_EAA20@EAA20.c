char **__fastcall sub_EAA20(unsigned int a1)
{
  int v1; // r1
  int v3; // r0
  int v4; // r2
  _DWORD v5[2]; // [sp+8h] [bp-20h] BYREF
  char v6; // [sp+10h] [bp-18h] BYREF
  unsigned int v7; // [sp+18h] [bp-10h]

  if ( a1 <= 0x4AA )
  {
    v1 = a1;
    if ( !a1 )
      return &(&off_2078B0[2 * a1])[2 * v1];
    v1 = 2 * a1;
    if ( off_2078B0[6 * a1 + 2] )
      return &(&off_2078B0[2 * a1])[2 * v1];
    v4 = 227;
    goto LABEL_10;
  }
  if ( !dword_6E1AA8 )
  {
    v4 = 232;
LABEL_10:
    sub_D0048(8, 103, 101, (int)"crypto/objects/obj_dat.c", v4);
    return 0;
  }
  v7 = a1;
  v5[0] = 3;
  v5[1] = &v6;
  v3 = sub_DFA98(dword_6E1AA8, (int)v5);
  if ( !v3 )
  {
    v4 = 242;
    goto LABEL_10;
  }
  return *(char ***)(v3 + 4);
}
