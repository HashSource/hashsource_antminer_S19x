void __fastcall __noreturn sub_8AAD0(char *a1)
{
  char *v1; // r1
  int v2; // r2

  v1 = a1;
  v2 = dword_487CC4;
  if ( dword_487CC4 )
    dword_487CC0 = dword_487CC4;
  else
    v2 = dword_487CC0;
  if ( !a1 )
    v1 = "error";
  sub_946E0("A %s in expression, near `%s'.", v1, v2);
}
