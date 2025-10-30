_DWORD *__fastcall sub_11D040(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r2
  bool v6; // zf

  *(_BYTE *)(a1 + 10) |= 1u;
  result = sub_93028(0xCu);
  *result = a1;
  v5 = dword_4872DC;
  result[1] = a2;
  result[2] = 0;
  v6 = v5 == 0;
  if ( v5 )
    v5 = dword_4872E0;
  else
    dword_4872DC = (int)result;
  dword_4872E0 = (int)result;
  if ( !v6 )
    *(_DWORD *)(v5 + 8) = result;
  return result;
}
