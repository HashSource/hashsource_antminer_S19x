int sub_45AF4()
{
  int *v1; // r12
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r12
  _DWORD v7[513]; // [sp+0h] [bp-804h] BYREF

  if ( dword_4B6CC8 == 540 )
    return 1;
  if ( dword_4B6CC8 != 565 )
  {
    if ( dword_4B6CC8 != 590 )
      return 0;
    sub_24608(565);
    sub_459D8();
    dword_4B6CC8 = 565;
    if ( (unsigned int)off_AFC24 <= 3 )
      return 0;
    v1 = (int *)&unk_964F8;
LABEL_10:
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v5 = v1[3];
    v6 = v1[4];
    v7[0] = v2;
    v7[1] = v3;
    v7[2] = v4;
    v7[3] = v5;
    v7[4] = v6;
    sub_3AF5C(3, (const char *)v7, 0, v5);
    return 0;
  }
  sub_24608(540);
  sub_459D8();
  dword_4B6CC8 = 540;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    v1 = (int *)&unk_9650C;
    goto LABEL_10;
  }
  return 0;
}
