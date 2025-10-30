int __fastcall sub_17F7F0(int a1)
{
  int v1; // r0
  int v2; // r4
  _DWORD *v3; // r0

  v1 = sub_183688(a1);
  v2 = *(_DWORD *)(v1 + 52);
  v3 = (_DWORD *)sub_242F8C(v1);
  if ( v2 )
    return sub_25A418(*v3, "Current working directory that will be used when starting the inferior is \"%s\".\n", v2);
  else
    return sub_25A418(
             *v3,
             "You have not set the inferior's current working directory.\n"
             "The inferior will inherit GDB's cwd if native debugging, or the remote\n"
             "server's cwd if remote debugging.\n");
}
