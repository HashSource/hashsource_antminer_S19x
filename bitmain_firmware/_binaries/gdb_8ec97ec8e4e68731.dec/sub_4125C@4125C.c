int __fastcall sub_4125C(int a1)
{
  int v1; // r0
  int v2; // r0

  v1 = sub_183688(a1);
  if ( !*(_BYTE *)(v1 + 16) && (v2 = *(_DWORD *)(v1 + 12)) != 0 )
    return sub_4D208(v2, 1);
  else
    return 1;
}
