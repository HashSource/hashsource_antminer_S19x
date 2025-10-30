unsigned int __fastcall sub_76950(int a1)
{
  unsigned int result; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 374, 0, "t != ((void *)0)");
  result = *(_DWORD *)(a1 + 4);
  if ( result > 0x3B9AC9FF )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 376, 1, "t->nanoseconds < 1000000000");
  return result;
}
