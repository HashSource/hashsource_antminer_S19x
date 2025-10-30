int __fastcall sub_1E1768(_BYTE *a1, _DWORD *a2)
{
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  unsigned int v6; // r4
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  const char *v11; // r3

  v3 = a2[2];
  if ( v3 )
  {
    v4 = a2[3];
    if ( v4 == 2 )
    {
      v10 = sub_94700((int)"remote.c", 1330, "packet_ok: attempt to use a disabled packet");
      return sub_25A418(v10, "Debugger's willingness to use range stepping is %s.\n", v11);
    }
    v5 = sub_1E1700(a1);
    v6 = v5;
    if ( v5 > 1 )
    {
      if ( v5 == 2 )
      {
        if ( v3 == 2 && v4 == 1 )
          sub_946E0("Protocol error: %s (%s) conflicting enabled responses.", (const char *)*a2, (const char *)a2[1]);
        if ( dword_48A590 )
        {
          v9 = (_DWORD *)sub_242FC8(2);
          sub_2594B0(*v9, "Packet %s (%s) is NOT supported\n", *a2, a2[1]);
        }
        a2[3] = 2;
      }
      return v6;
    }
  }
  else
  {
    v5 = sub_1E1700(a1);
    v6 = v5;
    if ( v5 > 1 )
    {
      if ( v5 == 2 )
        sub_946E0("Enabled packet %s (%s) not recognized by stub", (const char *)*a2, (const char *)a2[1]);
      return v6;
    }
    v4 = a2[3];
  }
  if ( v4 )
    return v6;
  if ( dword_48A590 )
  {
    v8 = (_DWORD *)sub_242FC8(v5);
    sub_2594B0(*v8, "Packet %s (%s) is supported\n", *a2, a2[1]);
  }
  a2[3] = 1;
  return v6;
}
