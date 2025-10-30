int __fastcall sub_5C260(int result)
{
  int v1; // [sp+4h] [bp-10h]
  int i; // [sp+Ch] [bp-8h]

  v1 = result;
  for ( i = 0; i <= 7; ++i )
    result = sub_52EA0(i + 49, *(_DWORD *)(v1 + 4 * i));
  return result;
}
