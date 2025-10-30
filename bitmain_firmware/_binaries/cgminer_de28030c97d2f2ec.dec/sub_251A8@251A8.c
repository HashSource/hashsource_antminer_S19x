int __fastcall sub_251A8(int a1, int a2)
{
  int v2; // r0
  unsigned int i; // [sp+Ch] [bp-10h]

  for ( i = 0; i < sub_66B34(a2); ++i )
  {
    v2 = sub_66B80(a2, i);
    *(_DWORD *)(a1 + 4 * (i + 166) + 4) = sub_67C98(v2);
  }
  return 1;
}
