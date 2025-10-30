int __fastcall sub_75248(int a1, _WORD *a2, _WORD *a3)
{
  bool v3; // zf

  v3 = a2 == 0;
  if ( a2 )
    v3 = a3 == 0;
  if ( v3 )
    sub_6FC54((int)"./../lib/isc/unix/net.c", 481, 0, "low != ((void *)0) && high != ((void *)0)");
  *a2 = 1024;
  *a3 = -1;
  return 0;
}
