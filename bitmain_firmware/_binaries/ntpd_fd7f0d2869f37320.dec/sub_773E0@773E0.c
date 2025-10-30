int __fastcall sub_773E0(unsigned int *a1, unsigned int *a2)
{
  bool v2; // zf
  int v3; // r2
  unsigned int v4; // lr
  unsigned int v5; // r2
  unsigned int v6; // r0

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  v3 = !v2;
  if ( v2 )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 240, v3, "t1 != ((void *)0) && t2 != ((void *)0)");
  v4 = a1[1];
  if ( v4 > 0x3B9AC9FF || (v5 = a2[1], v5 > 0x3B9AC9FF) )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 241, 2, "t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000");
  v6 = *a1;
  if ( v6 < *a2 )
    return -1;
  if ( v6 > *a2 )
    return 1;
  if ( v4 < v5 )
    return -1;
  else
    return v4 > v5;
}
