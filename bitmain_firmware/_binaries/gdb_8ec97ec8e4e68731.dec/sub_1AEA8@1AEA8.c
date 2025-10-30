int __fastcall sub_1AEA8(_DWORD *a1)
{
  int v1; // r3
  int v2; // r3
  int v4; // r3
  void *v6; // r0
  int v7; // r2
  _DWORD v8[8]; // [sp+0h] [bp-20h] BYREF

  v1 = (a1[3] >> 11) & 3;
  if ( (unsigned int)(v1 - 2) <= 1 )
  {
    v8[0] = 14;
    v4 = 4;
    a1[8] = 1;
  }
  else if ( v1 == 1 )
  {
    v8[0] = 25;
    v8[1] = 14;
    v4 = 8;
    a1[8] = 2;
  }
  else
  {
    v2 = a1[8];
    if ( !v2 )
      return 0;
    v4 = 4 * v2;
  }
  v6 = (void *)sub_93028(v4);
  v7 = a1[8];
  a1[9] = v6;
  memcpy(v6, v8, 4 * v7);
  return 0;
}
