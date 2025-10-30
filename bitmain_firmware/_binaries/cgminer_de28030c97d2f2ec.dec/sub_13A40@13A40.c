int __fastcall sub_13A40(int result, _DWORD *a2)
{
  int v2; // [sp+Ch] [bp-8h]

  v2 = 0;
  if ( result )
  {
    if ( (dword_96EE8 & 1) != 0 )
      v2 = -1;
    return sub_136C8(result, a2, v2);
  }
  return result;
}
