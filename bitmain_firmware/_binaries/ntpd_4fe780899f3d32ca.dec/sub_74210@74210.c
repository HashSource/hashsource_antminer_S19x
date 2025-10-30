int __fastcall sub_74210(int a1, _WORD *a2, _WORD *a3)
{
  int v3; // r0

  v3 = (int)a3;
  if ( a3 )
    v3 = 1;
  if ( !a2 )
    v3 = 0;
  if ( !v3 )
    sub_6ECC0((int)"./../lib/isc/unix/net.c", 481, 0, "low != ((void *)0) && high != ((void *)0)");
  *a2 = 1024;
  *a3 = -1;
  return 0;
}
