int __fastcall sub_1AD8C(_DWORD *a1)
{
  unsigned int v1; // r3
  void *v3; // r0
  int v4; // r2
  _DWORD v6[10]; // [sp+0h] [bp-28h] BYREF

  v1 = a1[3];
  if ( (unsigned __int16)v1 >> 12 == 15 )
    return 1;
  a1[8] = 3;
  v6[0] = (unsigned __int16)v1 >> 12;
  v6[1] = HIWORD(v1) & 0xF;
  v6[2] = 25;
  v3 = (void *)sub_93028(12);
  v4 = a1[8];
  a1[9] = v3;
  memcpy(v3, v6, 4 * v4);
  return 0;
}
