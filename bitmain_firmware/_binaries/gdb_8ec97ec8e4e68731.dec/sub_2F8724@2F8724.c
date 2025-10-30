int __fastcall sub_2F8724(_DWORD *a1, const char *a2, int a3)
{
  char *v5; // r4
  _DWORD *v6; // r3

  v5 = sub_2AAC2C(a1, a2, 1, 0);
  if ( !v5 )
    return 0;
  v6 = (_DWORD *)sub_2AAEC8((int)a1, 8);
  if ( !v6 )
    return 0;
  *v6 = *((_DWORD *)v5 + 3);
  v6[1] = a3;
  *((_DWORD *)v5 + 3) = v6;
  return 1;
}
