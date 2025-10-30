int __fastcall sub_1AE40(_DWORD *a1)
{
  int v1; // r3
  void *v3; // r0
  int v4; // r2
  int v6; // r3
  int v7[8]; // [sp+0h] [bp-20h] BYREF

  if ( (a1[3] & 0x1000000) != 0 )
  {
    v7[0] = 14;
    v1 = 4;
    a1[8] = 1;
  }
  else
  {
    v6 = a1[8];
    if ( !v6 )
      return 0;
    v1 = 4 * v6;
  }
  v3 = (void *)sub_93028(v1);
  v4 = a1[8];
  a1[9] = v3;
  memcpy(v3, v7, 4 * v4);
  return 0;
}
