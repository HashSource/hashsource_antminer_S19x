int __fastcall sub_778FC(int *a1, int *a2)
{
  bool v2; // nf

  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 339, 0, "t != ((void *)0)");
  if ( (unsigned int)a1[1] > 0x3B9AC9FF )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 340, 2, "t->nanoseconds < 1000000000");
  v2 = *a1 < 0;
  if ( *a1 >= 0 )
    *a2 = *a1;
  if ( v2 )
    return 41;
  else
    return 0;
}
