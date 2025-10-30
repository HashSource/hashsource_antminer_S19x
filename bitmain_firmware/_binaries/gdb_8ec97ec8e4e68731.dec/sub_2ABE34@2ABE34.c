int __fastcall sub_2ABE34(int a1, void *s)
{
  _DWORD *v2; // r5
  int (__fastcall *v5)(int, _DWORD, void *); // r3

  v2 = *(_DWORD **)(a1 + 8);
  memset(s, 0, 0x68u);
  v5 = (int (__fastcall *)(int, _DWORD, void *))v2[3];
  if ( v5 )
    return v5(a1, *v2, s);
  else
    return 0;
}
