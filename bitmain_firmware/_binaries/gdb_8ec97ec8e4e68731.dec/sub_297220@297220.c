int __fastcall sub_297220(int a1)
{
  int v1; // r0
  int v2; // r0
  _DWORD *v3; // r4
  void *v4; // r0

  v1 = sub_297918(a1);
  if ( v1 && *(_DWORD *)(v1 + 8) != dword_48B6E0 )
  {
    v2 = sub_2978A8(v1);
    v3 = (_DWORD *)sub_297D10(v2, dword_48AAD4, dword_48B6E0);
    sub_297758(*v3);
    v4 = (void *)v3[1];
    if ( v4 )
      free(v4);
    sub_297758(v3);
  }
  return 0;
}
