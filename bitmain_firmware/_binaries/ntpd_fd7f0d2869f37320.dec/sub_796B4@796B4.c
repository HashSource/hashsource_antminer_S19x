void *__fastcall sub_796B4(_DWORD *a1, int a2)
{
  unsigned int v4; // r2
  char *v5; // r0
  bool v6; // cc
  char v7; // r3
  char v8; // r3
  int v9; // r1
  int v10; // r6
  unsigned int i; // r2
  unsigned int v12; // r1
  char v13; // r3
  char v15[8]; // [sp+4h] [bp-Ch] BYREF

  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/sha1.c", 329, 2, "digest != 0");
  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/sha1.c", 330, 2, "context != 0");
  v4 = 0;
  v5 = v15;
  do
  {
    v6 = v4 > 3;
    v7 = ~(_BYTE)v4++;
    v8 = v7 & 3;
    if ( v6 )
      v9 = 4;
    else
      v9 = 5;
    *v5++ = a1[v9 + 1] >> (8 * v8);
  }
  while ( v4 != 8 );
  sub_79564(a1, (char *)&unk_9F80F, 1u);
  while ( (a1[5] & 0x1F8) != 0x1C0 )
    sub_79564(a1, byte_9F810, 1u);
  v10 = a2 - 1;
  sub_79564(a1, v15, 8u);
  for ( i = 0; i != 20; ++i )
  {
    v12 = i >> 2;
    v13 = ~(_BYTE)i;
    *(_BYTE *)++v10 = a1[v12] >> (8 * (v13 & 3));
  }
  return memset(a1, 0, 0x5Cu);
}
