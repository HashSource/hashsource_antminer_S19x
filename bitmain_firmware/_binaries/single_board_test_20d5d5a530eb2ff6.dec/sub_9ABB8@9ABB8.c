int __fastcall sub_9ABB8(int a1, char a2, int a3, int a4, int a5)
{
  int result; // r0
  __int16 v6; // r4

  result = *(_DWORD *)(a1 + 128);
  if ( a4 )
  {
    v6 = *(_WORD *)(result + 264);
  }
  else
  {
    v6 = *(_WORD *)(result + 266);
    *(_WORD *)(result + 264) = v6;
    *(_WORD *)(result + 266) = v6 + 1;
  }
  *(_BYTE *)(result + 288) = a2;
  *(_WORD *)(result + 296) = v6;
  *(_DWORD *)(result + 304) = a5;
  *(_DWORD *)(result + 292) = a3;
  *(_DWORD *)(result + 300) = a4;
  return result;
}
