int __fastcall sub_1AD00(_DWORD *a1)
{
  unsigned int v1; // r3
  int v3; // r2
  unsigned int v4; // r3
  int v5; // r3
  bool v6; // zf
  int v7; // r0
  void *v8; // r0
  int v9; // r2
  _DWORD v11[8]; // [sp+0h] [bp-20h] BYREF

  v1 = a1[3];
  v3 = (v1 >> 8) & 0xF;
  v4 = v1 >> 21;
  if ( (v4 & 0xB) != 0 )
  {
    v5 = v4 & 0xF;
    v6 = v5 == 13;
    if ( v5 != 13 )
      v6 = v5 == 8;
    if ( !v6 )
      goto LABEL_5;
  }
  if ( v3 == 15 )
  {
    v11[0] = 25;
    v7 = 4;
    a1[8] = 1;
  }
  else
  {
LABEL_5:
    v7 = 8;
    v11[0] = v3;
    v11[1] = 25;
    a1[8] = 2;
  }
  v8 = (void *)sub_93028(v7);
  v9 = a1[8];
  a1[9] = v8;
  memcpy(v8, v11, 4 * v9);
  return 0;
}
