char *__fastcall sub_EAB40(unsigned int a1)
{
  int v2; // r1
  char *result; // r0
  int v4; // r0
  int v5; // r2
  _DWORD v6[2]; // [sp+8h] [bp-20h] BYREF
  char v7; // [sp+10h] [bp-18h] BYREF
  unsigned int v8; // [sp+18h] [bp-10h]

  if ( a1 <= 0x4AA )
  {
    v2 = a1;
    if ( !a1 )
      return (&off_2078B0[2 * a1])[2 * v2 + 1];
    v2 = 2 * a1;
    if ( off_2078B0[6 * a1 + 2] )
      return (&off_2078B0[2 * a1])[2 * v2 + 1];
    v5 = 282;
LABEL_10:
    sub_D0048(8, 102, 101, (int)"crypto/objects/obj_dat.c", v5);
    return 0;
  }
  result = (char *)dword_6E1AA8;
  if ( dword_6E1AA8 )
  {
    v8 = a1;
    v6[0] = 3;
    v6[1] = &v7;
    v4 = sub_DFA98(dword_6E1AA8, (int)v6);
    if ( v4 )
      return *(char **)(*(_DWORD *)(v4 + 4) + 4);
    v5 = 296;
    goto LABEL_10;
  }
  return result;
}
