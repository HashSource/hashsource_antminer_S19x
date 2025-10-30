void sub_235F44()
{
  int v0; // r4
  _DWORD *v1; // r0
  void *v2; // r0
  int v3; // r6
  int v4; // r0
  _DWORD *v5; // r4
  int v6; // r5

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
  v3 = dword_48A4D0;
  v4 = sub_183688();
  v5 = *(_DWORD **)(v4 + 164);
  v6 = v4;
  if ( !v5 )
  {
    v5 = sub_93094(1u, 0xCu);
    *(_DWORD *)(v6 + 164) = v5;
  }
  v5[2] = sub_327254(v3);
  sub_235DE8();
  JUMPOUT(0x2359FC);
}
