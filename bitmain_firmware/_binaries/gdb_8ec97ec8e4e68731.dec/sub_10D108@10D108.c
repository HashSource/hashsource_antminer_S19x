void __fastcall sub_10D108(int a1)
{
  _DWORD *v2; // r5
  _DWORD *i; // r4
  void (__fastcall *v4)(int, _DWORD); // r3
  int v5; // r0
  void *v6; // r0

  v2 = *(_DWORD **)a1;
  for ( i = *(_DWORD **)(*(_DWORD *)a1 + 40); i; i = (_DWORD *)v2[10] )
  {
    v4 = (void (__fastcall *)(int, _DWORD))i[1];
    v5 = i[2];
    v2[10] = *i;
    v4(v5, 0);
    free(i);
  }
  v6 = (void *)v2[9];
  *(_DWORD *)a1 = *v2;
  sub_1891F4(v6);
  free(v2);
}
