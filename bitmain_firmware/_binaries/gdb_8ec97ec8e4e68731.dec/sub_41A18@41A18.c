void __fastcall sub_41A18(_DWORD *a1)
{
  const char *v2; // r0

  if ( sub_23E408(*a1, a1[1], a1[2]) )
  {
    if ( dword_46DCD4 )
    {
      v2 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
      sub_259858("[%s exited]\n", v2);
    }
    sub_23E38C(*a1, a1[1], a1[2]);
  }
  JUMPOUT(0x41958);
}
