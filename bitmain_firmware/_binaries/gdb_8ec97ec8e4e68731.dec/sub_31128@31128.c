_DWORD *sub_31128()
{
  int v0; // r5
  int v1; // r1
  int v2; // r2
  int v3; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r4

  v0 = sub_31060();
  sub_946B0("Probes-based dynamic linker interface failed.\nReverting to original interface.\n", v1, v2, v3);
  if ( *(_DWORD *)(v0 + 40) )
  {
    sub_323B84();
    *(_DWORD *)(v0 + 40) = 0;
  }
  result = *(_DWORD **)(v0 + 44);
  if ( result )
  {
    do
    {
      v5 = (_DWORD *)*result;
      sub_200A30();
      result = v5;
    }
    while ( v5 );
  }
  *(_DWORD *)(v0 + 44) = 0;
  return result;
}
