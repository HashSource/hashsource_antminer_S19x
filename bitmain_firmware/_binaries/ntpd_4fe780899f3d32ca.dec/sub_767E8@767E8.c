int __fastcall sub_767E8(_DWORD *a1)
{
  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 329, 0, "t != ((void *)0)");
  if ( a1[1] > 0x3B9AC9FFu )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 330, 2, "t->nanoseconds < 1000000000");
  return *a1;
}
