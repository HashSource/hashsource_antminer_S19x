int __fastcall sub_EEEAC(
        int a1,
        int a2,
        _DWORD *a3,
        char *a4,
        int a5,
        int (__fastcall *a6)(char *, int, int, char *),
        char *a7)
{
  int v7; // r4

  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 && !*(_DWORD *)(v7 + 40) )
    return sub_EEE34(a1, a2, a3, a4, a5, a6, a7);
  else
    return sub_161B1C(a1, a2, (int)a3, (int)a4, a5, (int)a6, a7);
}
