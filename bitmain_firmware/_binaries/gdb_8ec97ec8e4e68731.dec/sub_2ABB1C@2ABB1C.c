bool __fastcall sub_2ABB1C(int a1, unsigned __int8 *a2)
{
  int v2; // r3

  if ( *(_BYTE *)(*(_DWORD *)(a1 + 4) + 24) == 95 )
    v2 = 76;
  else
    v2 = 46;
  return *a2 == v2;
}
