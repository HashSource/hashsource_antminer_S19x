__int64 __fastcall sub_77740(unsigned int *a1, unsigned int *a2)
{
  bool v2; // zf
  int v3; // r2
  unsigned int v4; // r2
  unsigned int v5; // lr
  unsigned __int64 v6; // r2
  unsigned __int64 v7; // r0

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  v3 = !v2;
  if ( v2 )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 308, v3, "t1 != ((void *)0) && t2 != ((void *)0)");
  v4 = a1[1];
  if ( v4 > 0x3B9AC9FF || (v5 = a2[1], v5 > 0x3B9AC9FF) )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 309, 2, "t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000");
  v6 = 1000000000LL * *a1 + v4;
  v7 = 1000000000LL * *a2 + v5;
  if ( v6 > v7 )
    return sub_8D518((int)v6 - (int)v7, (v6 - v7) >> 32, 1000, 0);
  else
    return 0;
}
