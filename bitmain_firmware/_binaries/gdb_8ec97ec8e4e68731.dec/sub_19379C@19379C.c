void __fastcall sub_19379C(int a1)
{
  int v2; // r0
  int v3; // r5
  _DWORD *v4; // r6
  const char *v5; // r0
  int v6; // [sp+0h] [bp-28h] BYREF
  int v7; // [sp+4h] [bp-24h]
  int v8; // [sp+8h] [bp-20h]
  _DWORD v9[6]; // [sp+10h] [bp-18h] BYREF

  v2 = sub_1924F0();
  if ( sub_192C58(a1, &v6, v2) )
  {
    v3 = v8;
    if ( v7 == 1 )
    {
      sub_192010(a1, v8, (int)v9, 1);
      sub_192FD0(a1, v3, v9);
    }
    else if ( v7 )
    {
      if ( v7 != 2 )
        sub_946E0("Unknown action_flag value in JIT descriptor!");
      v4 = sub_191FB0(v8);
      if ( v4 )
      {
        ((void (*)(void))loc_1B7600)();
        sub_33AC04(v4);
      }
      else
      {
        v5 = (const char *)sub_25AC8C(a1, v3);
        sub_259858("Unable to find JITed code entry at address: %s\n", v5);
      }
    }
  }
}
