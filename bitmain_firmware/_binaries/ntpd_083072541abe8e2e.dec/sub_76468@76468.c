int __fastcall sub_76468(int *a1, int *a2, int *a3)
{
  int v3; // r3
  unsigned int v4; // r12
  unsigned int v5; // r6
  int v6; // r0
  int v7; // r3
  unsigned int v8; // r1
  int v9; // r3
  bool v10; // cc
  int result; // r0

  v3 = (int)a3;
  if ( a3 )
    v3 = 1;
  if ( !a2 )
    v3 = 0;
  if ( !a1 )
    v3 = 0;
  if ( !v3 )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 257, 0, "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
  v4 = a1[1];
  if ( v4 > 0x3B9AC9FF || (v5 = a2[1], v5 > 0x3B9AC9FF) )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 258, 2, "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
  v6 = *a1;
  v7 = *a2;
  if ( (v6 < 0 || v7 < 0) && (int)(((unsigned int)v7 + (unsigned __int64)(unsigned int)v6) >> 32) >= 1 )
    return 41;
  v8 = v4 + v5;
  v9 = v7 + v6;
  v10 = v4 + v5 > 0x3B9AC9FF;
  *a3 = v9;
  if ( v4 + v5 > 0x3B9AC9FF )
    v4 = -1000000000;
  result = 0;
  if ( v10 )
  {
    ++v9;
    v4 += v8;
  }
  a3[1] = v8;
  if ( v10 )
  {
    *a3 = v9;
    a3[1] = v4;
  }
  return result;
}
