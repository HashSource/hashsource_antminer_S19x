void __noreturn sub_1A4034()
{
  int v0; // r4
  int v1; // r3
  int v2; // r0
  void *v3; // r0

  v0 = dword_487668;
  v1 = *(_DWORD *)(dword_487668 + 68);
  *(_DWORD *)(dword_487668 + 36) = 1;
  if ( v1 )
  {
    v2 = sub_191AC0();
    ((void (__fastcall *)(int))loc_19178C)(v2);
  }
  sub_152C84();
  v3 = sub_92614();
  sub_92620(v3);
  sub_4EFCC(0, *(_DWORD *)(v0 + 48) == *(_DWORD *)(v0 + 44));
}
