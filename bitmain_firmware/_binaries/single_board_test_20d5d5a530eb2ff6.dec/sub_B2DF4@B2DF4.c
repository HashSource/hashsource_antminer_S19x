int sub_B2DF4()
{
  int v0; // r0
  int v1; // r3

  v0 = sub_B2DB0();
  if ( !v0 )
    return 1;
  v1 = *(_DWORD *)(v0 + 4);
  if ( !v1 || *(_DWORD *)(v0 + 8) )
    return 1;
  *(_DWORD *)(v1 + 16) = 1;
  sub_D0048(51, 103, 102, "crypto/async/async.c", 275);
  return 0;
}
