int __fastcall sub_26EA24(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  _DWORD *v5; // r7
  _DWORD *v6; // r6
  unsigned __int8 *v7; // r0
  unsigned int v8; // r0
  int v9; // r0

  v2 = sub_171258(*(_DWORD **)(a1 + 64));
  result = sub_26DED4(a1);
  if ( !result )
  {
    if ( (unsigned int)**(unsigned __int8 **)(v2 + 24) - 18 <= 1 )
    {
      v4 = sub_171258(*(_DWORD **)(a1 + 68));
      v5 = *(_DWORD **)(a1 + 64);
      v6 = *(_DWORD **)(*(_DWORD *)(v4 + 24) + 20);
      v7 = (unsigned __int8 *)sub_26E978((_DWORD *)a1);
      v8 = sub_26D134(v5, v7);
      v9 = sub_260F84(v6, v8);
      return sub_26DF3C(v9, *(_DWORD *)(v9 + 64), v2, a1);
    }
    else
    {
      return a1;
    }
  }
  return result;
}
