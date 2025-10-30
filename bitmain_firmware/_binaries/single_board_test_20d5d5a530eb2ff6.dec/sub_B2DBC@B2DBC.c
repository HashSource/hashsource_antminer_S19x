void __noreturn sub_B2DBC()
{
  int v0; // r6
  int v1; // r4
  int v2; // r0

  v0 = sub_B2DB0();
  while ( 1 )
  {
    v1 = *(_DWORD *)(v0 + 4);
    v2 = (*(int (__fastcall **)(_DWORD))(v1 + 4))(*(_DWORD *)(v1 + 8));
    *(_DWORD *)(v1 + 16) = 3;
    *(_DWORD *)(v1 + 12) = v2;
    sub_D0048(51, 104, 102, "crypto/async/async.c", 162);
  }
}
