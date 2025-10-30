char *__fastcall sub_158A34(int a1)
{
  int v1; // r3
  int v2; // r0

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 == 1 )
  {
    sub_170040(a1);
    return sub_EEBE8();
  }
  else
  {
    if ( v1 != 4 )
      sub_946E0("unrecognized character type");
    v2 = sub_170040(a1);
    if ( ((int (__fastcall *)(int))loc_165BB8)(v2) )
      return "UTF-32LE";
    else
      return "UTF-32BE";
  }
}
