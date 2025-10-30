void __fastcall sub_45B48(_DWORD *a1, unsigned int a2)
{
  unsigned int src; // [sp+0h] [bp-14h] BYREF
  _DWORD *v3; // [sp+4h] [bp-10h]
  int dest; // [sp+8h] [bp-Ch] BYREF
  char v5; // [sp+Ch] [bp-8h]

  v3 = a1;
  v5 = 0;
  src = sub_2DE60(a2);
  memcpy(&dest, &src, sizeof(dest));
  sub_45674(v3, (int)&dest);
}
