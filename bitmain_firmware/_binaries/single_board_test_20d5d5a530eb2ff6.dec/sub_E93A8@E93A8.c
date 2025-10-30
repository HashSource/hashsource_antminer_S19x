size_t __fastcall sub_E93A8(
        int a1,
        unsigned __int8 *a2,
        char *a3,
        int *a4,
        int a5,
        void (__fastcall *a6)(int *, int *, int))
{
  size_t v8; // r4
  _DWORD v10[3]; // [sp+8h] [bp-Ch] BYREF

  v8 = sub_E91C0(a1, v10, a3, a4, a5, a6);
  if ( v8 )
  {
    if ( !a2 )
      a2 = (unsigned __int8 *)&unk_1B65D8;
    if ( !sub_BC33C((unsigned __int8 *)v10, a2, 8) )
      return v8;
    sub_E07F8(a3, v8);
  }
  return 0;
}
