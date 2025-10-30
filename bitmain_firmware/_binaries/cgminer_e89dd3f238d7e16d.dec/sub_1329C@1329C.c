int __fastcall sub_1329C(int result, _DWORD *a2)
{
  int v2; // [sp+Ch] [bp-8h]

  v2 = 0;
  if ( result )
  {
    if ( (dword_95D50 & 1) != 0 )
      v2 = -1;
    return sub_12F18(result, a2, v2);
  }
  return result;
}
