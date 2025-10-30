int __fastcall sub_D1044(_DWORD *a1)
{
  int *v2; // r4
  int v3; // r6

  v2 = _errno_location();
  v3 = *v2;
  if ( !sub_DE05C(0x40000, 0, 0) )
    return 0;
  if ( !sub_10C594(&unk_6E1944, sub_CF440) )
    return 0;
  if ( !dword_6DF43C )
    return 0;
  *a1 = sub_10C5B4(&unk_6DF438);
  if ( !sub_10C5BC(&unk_6DF438, -1) )
    return 0;
  *v2 = v3;
  return 1;
}
