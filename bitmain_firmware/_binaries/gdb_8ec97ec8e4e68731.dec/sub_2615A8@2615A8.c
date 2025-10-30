int __fastcall sub_2615A8(int a1)
{
  bool v2; // zf
  int result; // r0
  _DWORD *v4; // r0
  int v5; // r6
  _DWORD *v6; // r0
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r0

  v2 = !sub_261524(a1);
  result = a1;
  if ( !v2 )
  {
    v4 = (_DWORD *)sub_26BC70(a1);
    v5 = *(_DWORD *)(sub_171258(v4) + 20);
    v6 = sub_2612F8(v5);
    v7 = sub_26EB1C(v6);
    v8 = sub_26E978(a1);
    sub_FAAE0(v7, v8, v5);
    v9 = (_DWORD *)sub_26BC70(a1);
    return sub_25F714(v9, v7, 1);
  }
  return result;
}
