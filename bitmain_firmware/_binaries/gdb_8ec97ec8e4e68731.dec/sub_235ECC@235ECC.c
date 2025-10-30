void sub_235ECC()
{
  int v0; // r4
  _DWORD *v1; // r0
  void *v2; // r0
  int v3; // r4
  _DWORD *v4; // r0

  v0 = sub_183688();
  v1 = *(_DWORD **)(v0 + 164);
  if ( !v1 )
  {
    v1 = sub_93094(1u, 0xCu);
    *(_DWORD *)(v0 + 164) = v1;
  }
  v2 = (void *)v1[2];
  if ( v2 )
    free(v2);
  v3 = sub_183688();
  v4 = *(_DWORD **)(v3 + 164);
  if ( !v4 )
  {
    v4 = sub_93094(1u, 0xCu);
    *(_DWORD *)(v3 + 164) = v4;
  }
  v4[2] = 0;
  sub_235DE8();
  JUMPOUT(0x2359FC);
}
