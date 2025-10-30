int __fastcall sub_EB3A8(int a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // r0
  int result; // r0
  int v7; // r3
  _DWORD v8[4]; // [sp+Ch] [bp+0h] BYREF

  v8[0] = a1;
  if ( dword_6E1AAC && (v5 = sub_10BC4C(dword_6E1AAC, v8), (result = sub_10C01C(dword_6E1AAC, v5)) != 0)
    || (result = sub_EAC70((int)v8, (int)"\a", 48, 12, (int (__fastcall *)(int, int))sub_EB34C)) != 0 )
  {
    if ( a2 )
      *a2 = *(_DWORD *)(result + 4);
    if ( a3 )
    {
      v7 = *(_DWORD *)(result + 8);
      *a3 = v7;
      return 1;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
