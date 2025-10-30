int __fastcall sub_7F738(int a1)
{
  int v1; // r6
  int v2; // r5
  void *v3; // r0
  int v4; // r8
  int v5; // r2
  _DWORD *v6; // r3
  int v7; // t1

  v1 = a1;
  v2 = dword_A0784[a1 + 150];
  v3 = malloc(0x100u);
  v4 = (int)v3;
  if ( !v3 )
  {
    fwrite("no memory for char-mapper span map\n", 1u, 0x23u, stderr);
    exit(1);
  }
  memset(v3, 0, 0x100u);
  v5 = v4 + 1;
  v6 = dword_A0784;
  do
  {
    v7 = v6[1];
    ++v6;
    ++v5;
    if ( (v2 & v7) != 0 )
      *(_BYTE *)(v5 - 1) = 1;
  }
  while ( v6 != (_DWORD *)&unk_A0980 );
  dword_1082E4[v1 + 17] = v4;
  return v4;
}
