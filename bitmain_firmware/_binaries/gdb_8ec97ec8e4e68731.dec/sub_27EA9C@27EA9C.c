__sighandler_t sub_27EA9C()
{
  int v0; // r4
  __sighandler_t result; // r0

  v0 = sub_183688();
  result = (__sighandler_t)sub_27E298(v0);
  if ( *(_BYTE *)(v0 + 120) || *(_DWORD *)result )
  {
    result = signal(2, (__sighandler_t)sub_27E27C);
    dword_48AA98 = (int)result;
    dword_48AA9C = 1;
  }
  else
  {
    dword_48AA9C = 0;
  }
  return result;
}
