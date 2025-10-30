int __fastcall sub_8895C(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r0

  v4 = sub_887B8(a1, a2, a3, a4);
  return v4 & ~(v4 >> 31);
}
