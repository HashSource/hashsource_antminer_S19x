int __fastcall sub_61730(int a1, int a2)
{
  int result; // r0
  int v4; // [sp+Ch] [bp-8h]

  v4 = a1 - 8;
  result = sub_5FB30(*(_DWORD *)(a1 + 12));
  *(_DWORD *)(v4 + 20) = a2;
  return result;
}
