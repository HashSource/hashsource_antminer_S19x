int __fastcall sub_9B184(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // r1
  int v6; // r0
  __int16 v7; // r4
  _BYTE v8[4]; // [sp+Ch] [bp-4h] BYREF

  if ( a3 == 257 )
  {
    v5 = *(_DWORD *)(a1 + 128);
    v6 = a2;
    v7 = *(_WORD *)(v5 + 266);
    *(_BYTE *)(v5 + 288) = 1;
    *(_DWORD *)(v5 + 292) = 0;
    *(_WORD *)(v5 + 264) = v7;
    *(_WORD *)(v5 + 296) = v7;
    *(_DWORD *)(v5 + 300) = 0;
    *(_DWORD *)(v5 + 304) = 0;
    return sub_A8450(v6, v5, 1, 0, 1) != 0;
  }
  else
  {
    sub_9ABB8(a1, a3, 0, 0, 0);
    result = sub_A82B8(a2, 12, v8);
    if ( result )
      return sub_A8418(a2) != 0;
  }
  return result;
}
