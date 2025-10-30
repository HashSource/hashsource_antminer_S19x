int __fastcall sub_11C384(int *a1, _DWORD **a2)
{
  int v2; // r2
  _DWORD *v4; // r3

  v2 = *a1;
  v4 = *a2;
  *v4 = v2;
  *a2 = v4 + 1;
  return 1;
}
