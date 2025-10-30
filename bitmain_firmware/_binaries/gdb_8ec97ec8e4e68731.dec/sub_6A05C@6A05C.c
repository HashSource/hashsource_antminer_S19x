void __fastcall __noreturn sub_6A05C(int a1)
{
  _BYTE *v1; // r0

  v1 = (_BYTE *)sub_9360C(a1);
  if ( v1 )
  {
    if ( *v1 )
      sub_946E0("guile-repl currently does not take any arguments.");
  }
  sub_946E0("Guile scripting is not supported in this copy of GDB.");
}
