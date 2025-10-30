bool __fastcall sub_75F30(int a1)
{
  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 135, 0, "t != ((void *)0)");
  if ( *(_DWORD *)(a1 + 4) > 0x3B9AC9FFu )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 136, 2, "t->nanoseconds < 1000000000");
  return *(_QWORD *)a1 == 0;
}
