int __fastcall sub_344E8(int a1)
{
  int v2; // [sp+Ch] [bp-8h]

  v2 = sub_34898(a1, 0);
  *(_BYTE *)(v2 + 273) = 1;
  sub_21AC0((__time_t *)(v2 + 416));
  *(_BYTE *)(v2 + 280) = 0;
  *(_BYTE *)(v2 + 282) = 0;
  --*(_DWORD *)(v2 + 264);
  return v2;
}
