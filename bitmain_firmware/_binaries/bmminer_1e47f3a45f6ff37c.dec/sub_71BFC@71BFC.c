int __fastcall sub_71BFC(int result)
{
  int v1; // [sp+4h] [bp-18h]
  int v2; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v1 = result;
  for ( i = *(_DWORD *)(result + 16); v1 + 12 != i; i = v2 )
  {
    v2 = *(_DWORD *)(i + 4);
    sub_70880(*(_DWORD *)(i + 20));
    result = sub_74DE8(i);
  }
  return result;
}
