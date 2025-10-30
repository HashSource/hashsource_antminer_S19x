int __fastcall sub_6E6CC(int result)
{
  int v1; // [sp+4h] [bp-18h]
  int v2; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v1 = result;
  for ( i = *(_DWORD *)(result + 16); i != v1 + 12; i = v2 )
  {
    v2 = *(_DWORD *)(i + 4);
    sub_6D34C(*(_DWORD *)(i + 20));
    result = sub_718D4(i);
  }
  return result;
}
