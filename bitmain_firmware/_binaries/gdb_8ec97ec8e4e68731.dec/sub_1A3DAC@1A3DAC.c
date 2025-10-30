int __fastcall sub_1A3DAC(int *a1, int a2)
{
  _DWORD *v3; // r4
  void *v5; // r7
  int v6; // r6

  v3 = (_DWORD *)*a1;
  v5 = (void *)sub_1A37A0(*(int **)(*a1 + 8));
  v6 = sub_1A31BC((int)v5, v3[3], a1[1]);
  if ( v5 )
    free(v5);
  (*(void (__fastcall **)(_DWORD, _DWORD, int, _DWORD, _DWORD))(a2 + 4))(*(_DWORD *)a2, v3[1], v6, v3[2], v3[3]);
  return 0;
}
