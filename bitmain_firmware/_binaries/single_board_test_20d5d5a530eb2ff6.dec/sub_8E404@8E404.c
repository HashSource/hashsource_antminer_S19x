int __fastcall sub_8E404(int result, int a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r0
  int v5; // r5
  _DWORD v6[2]; // [sp+4h] [bp-10h] BYREF
  int v7; // [sp+Ch] [bp-8h]

  v2 = *(_DWORD *)(result + 20);
  v6[0] = result;
  v7 = v2;
  if ( v2 )
  {
    v3 = result;
    v4 = *(_DWORD *)(result + 536);
    v6[1] = a2;
    sub_10C554(v4);
    v5 = sub_DFC34(*(_DWORD *)(v3 + 20));
    sub_DFC38(*(_DWORD *)(v3 + 20), 0);
    sub_DFB9C(v7, sub_8DA7C, v6);
    sub_DFC38(*(_DWORD *)(v3 + 20), v5);
    return sub_10C564(*(_DWORD *)(v3 + 536));
  }
  return result;
}
