int __fastcall sub_2A2E1C(int a1, int a2)
{
  int *v2; // r3
  int v3; // r4
  bool v4; // zf
  int result; // r0
  char v6; // r2
  char v7; // r3

  v2 = (int *)*(unsigned __int8 *)(a2 + 43);
  v3 = a2;
  v4 = ((unsigned __int8)v2 & 4) == 0;
  if ( ((unsigned __int8)v2 & 4) != 0 )
    a2 = 0;
  else
    v2 = *(int **)(a2 + 4);
  if ( v4 )
    a2 = *v2;
  result = sub_2AC764(a1, a2);
  if ( result )
  {
    v6 = *(_BYTE *)(result + 43);
    *(_BYTE *)(result + 44) = *(_BYTE *)(result + 44) & 0xBF | (((*(_BYTE *)(v3 + 44) & 0x40) != 0) << 6);
    v7 = *(_BYTE *)(v3 + 43);
    *(_DWORD *)(result + 140) = v3;
    *(_BYTE *)(result + 43) = v6 & 0xDF | (32 * ((v7 & 0x20) != 0));
  }
  return result;
}
