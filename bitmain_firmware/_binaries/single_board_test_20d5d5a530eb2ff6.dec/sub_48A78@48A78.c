int __fastcall sub_48A78(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  if ( a3 == 1 )
    return *(_DWORD *)(a2 + 4 * a1);
  if ( a3 == 2 )
    v4 = *(_DWORD *)(a2 + 4 * a1);
  else
    v4 = *(unsigned __int16 *)(a2 + 2 * a1);
  return v4 + a4;
}
