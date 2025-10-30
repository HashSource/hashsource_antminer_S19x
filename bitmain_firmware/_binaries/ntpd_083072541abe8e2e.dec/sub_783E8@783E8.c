void *__fastcall sub_783E8(int *a1, int a2)
{
  unsigned int v4; // r2
  char *v5; // r0
  char v6; // r3
  int v7; // r1
  int v8; // r0
  unsigned int i; // r2
  unsigned int v10; // r1
  char v11; // r3
  char v13; // [sp+3h] [bp-11h] BYREF
  char src[8]; // [sp+4h] [bp-10h] BYREF

  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/sha1.c", 329, 2, "digest != 0");
  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/sha1.c", 330, 2, "context != 0");
  v4 = 0;
  v5 = &v13;
  do
  {
    v6 = ~(_BYTE)v4;
    if ( v4 > 3 )
      v7 = 4;
    else
      v7 = 5;
    ++v4;
    *++v5 = (unsigned int)a1[v7 + 1] >> (8 * (v6 & 3));
  }
  while ( v4 != 8 );
  sub_782A0(a1, (char *)&unk_9E23F, 1u);
  while ( (a1[5] & 0x1F8) != 0x1C0 )
    sub_782A0(a1, byte_9E240, 1u);
  sub_782A0(a1, src, 8u);
  v8 = a2 - 1;
  for ( i = 0; i != 20; ++i )
  {
    v10 = a1[i >> 2];
    v11 = 8 * (~(_BYTE)i & 3);
    *(_BYTE *)++v8 = v10 >> v11;
  }
  return memset(a1, 0, 0x5Cu);
}
