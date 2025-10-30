void sub_94C5C()
{
  int v0; // r3
  int v1; // r0
  int v2; // r3
  void *v3; // r0

  if ( *(_DWORD *)(dword_487D2C + 8) )
  {
    ((void (*)(void))loc_1625A8)();
    v0 = dword_487D2C;
    v1 = dword_487D2C + 8;
    *(_DWORD *)(dword_487D2C + 8) = 0;
    *(_DWORD *)(v0 + 12) = 0;
    ((void (__fastcall *)(int))loc_94B40)(v1);
    v2 = dword_487D2C;
    v3 = *(void **)(dword_487D2C + 16);
    if ( v3 )
    {
      free(v3);
      v2 = dword_487D2C;
    }
    *(_DWORD *)(v2 + 16) = 0;
  }
}
