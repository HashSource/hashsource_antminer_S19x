void *__fastcall sub_79564(_DWORD *a1, char *a2, unsigned int a3)
{
  unsigned int v5; // r3
  unsigned int v7; // r2
  int v8; // r6
  int v9; // r1
  char *v10; // r0
  int v12; // r4
  bool v13; // cc

  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/sha1.c", 296, 2, "context != 0");
  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/sha1.c", 297, 2, "data != 0");
  v5 = a1[5];
  v7 = v5 + 8 * a3;
  a1[5] = v7;
  v8 = (v5 >> 3) & 0x3F;
  if ( v5 > v7 )
    a1[6] += 1 + (a3 >> 29);
  if ( v8 + a3 > 0x3F )
  {
    v12 = 64 - v8;
    memcpy((char *)a1 + v8 + 28, a2, 64 - v8);
    sub_77D0C(a1, a1 + 7);
    if ( a3 <= 127 - v8 )
    {
      v10 = (char *)(a1 + 7);
      v9 = 64 - v8;
    }
    else
    {
      do
      {
        sub_77D0C(a1, (unsigned int *)&a2[v12]);
        v9 = v12 + 64;
        v13 = a3 > v12 + 127;
        v12 += 64;
      }
      while ( v13 );
      v10 = (char *)(a1 + 7);
    }
  }
  else
  {
    v9 = 0;
    v10 = (char *)a1 + v8 + 28;
  }
  return memcpy(v10, &a2[v9], a3 - v9);
}
