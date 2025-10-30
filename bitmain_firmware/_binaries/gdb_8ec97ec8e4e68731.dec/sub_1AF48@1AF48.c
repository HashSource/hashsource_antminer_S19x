int __fastcall sub_1AF48(_DWORD *a1)
{
  int v2; // r3
  void *v3; // r0
  int v4; // r2
  _DWORD v6[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (a1[3] >> 8) & 7;
  a1[8] = 2;
  v6[0] = 25;
  v6[1] = v2;
  v3 = (void *)sub_93028(8);
  v4 = a1[8];
  a1[9] = v3;
  memcpy(v3, v6, 4 * v4);
  return 0;
}
