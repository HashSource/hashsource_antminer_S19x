__int16 *__fastcall sub_24150(int a1, __int16 a2)
{
  int v2; // r2

  if ( (a2 & 0x400) != 0 )
    v2 = 2;
  else
    v2 = 1;
  if ( !sub_240C0((unsigned __int16 *)(a1 + 4), *(_DWORD *)(a1 + 60), v2) )
    sub_1F4D0(4);
  return sub_1EBA4(0);
}
