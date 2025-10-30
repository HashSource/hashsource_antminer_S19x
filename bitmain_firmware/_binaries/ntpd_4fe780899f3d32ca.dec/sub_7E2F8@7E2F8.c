char *__fastcall sub_7E2F8(int a1)
{
  int v1; // r7
  int v2; // r5
  char *v3; // lr
  _DWORD *v4; // r3
  char *v5; // r2
  int v6; // t1

  v1 = a1;
  v2 = dword_9F184[a1 + 150];
  v3 = (char *)calloc(0x100u, 1u);
  if ( !v3 )
  {
    fwrite("no memory for char-mapper span map\n", 1u, 0x23u, stderr);
    exit(1);
  }
  v4 = &unk_9F188;
  v5 = v3 + 2;
  while ( v4 != (_DWORD *)&unk_9F380 )
  {
    v6 = v4[1];
    ++v4;
    ++v5;
    if ( (v2 & v6) != 0 )
      *(v5 - 1) = 1;
  }
  dword_1072C0[v1 + 17] = (int)v3;
  return v3;
}
