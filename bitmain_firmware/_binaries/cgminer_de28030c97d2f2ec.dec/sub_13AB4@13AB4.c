int __fastcall sub_13AB4(int result, _DWORD *a2)
{
  int v2; // [sp+Ch] [bp-8h]

  v2 = 0;
  if ( result )
  {
    if ( (dword_96EE8 & 2) != 0 )
      v2 = -1;
    if ( (dword_96EE8 & 4) != 0 )
      v2 = -2;
    return sub_136C8(result, a2, v2);
  }
  return result;
}
