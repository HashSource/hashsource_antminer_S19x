int __fastcall sub_1BD2D8(int a1)
{
  int v2; // r2
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r2
  int v7; // r3

  if ( dword_487C2C )
  {
    if ( (unsigned int)dword_487C30 > 0x13 )
      LOWORD(v2) = -24400;
    else
      LOWORD(v2) = -24788;
    HIWORD(v2) = 60;
    if ( (unsigned int)dword_487C30 <= 0x13 )
      v2 = *(_DWORD *)(v2 + 8 * dword_487C30);
    sub_25A418(a1, "The current OS ABI is \"%s\".\n", v2);
  }
  else
  {
    v4 = sub_B894C(a1);
    v5 = ((int (__fastcall *)(int))loc_165C98)(v4);
    if ( v5 > 0x13 )
      v6 = 41136;
    else
      v7 = 40748;
    if ( v5 > 0x13 )
      HIWORD(v6) = 60;
    else
      HIWORD(v7) = 60;
    if ( v5 <= 0x13 )
      v6 = *(_DWORD *)(v7 + 8 * v5);
    sub_25A418(a1, "The current OS ABI is \"auto\" (currently \"%s\").\n", v6, v7);
  }
  return sub_25A418(a1, "The default OS ABI is \"%s\".\n", "GNU/Linux");
}
