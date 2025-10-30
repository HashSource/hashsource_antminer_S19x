void __fastcall __noreturn sub_1E152C(int a1)
{
  int v2; // r0
  char *v3; // r0

  if ( (unsigned int)(a1 - 1) <= 0x5A )
  {
    v2 = aBreak_0[a1 + 15];
    if ( v2 != -1 )
    {
      v3 = sub_6FF98(v2);
      sub_946E0("Remote I/O error: %s", v3);
    }
  }
  sub_946E0("Unknown remote I/O error %d", a1);
}
