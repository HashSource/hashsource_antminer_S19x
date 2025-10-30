bool __fastcall sub_62F0C(int a1, int *a2)
{
  _DWORD *v2; // r4
  int v3; // r5

  v2 = (_DWORD *)(a1 + 8);
  v3 = *a2;
  return v3 == ps_getpid_0(a1 + 8) && sub_23F1C4(*v2, v2[1], v2[2]) == 0;
}
