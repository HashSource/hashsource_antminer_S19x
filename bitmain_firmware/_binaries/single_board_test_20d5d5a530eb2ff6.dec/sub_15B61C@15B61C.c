int __fastcall sub_15B61C(int result, int a2, int a3)
{
  _DWORD v3[3]; // [sp+0h] [bp-Ch] BYREF

  v3[0] = a2;
  v3[1] = a3;
  if ( result )
    return sub_DFB9C(result, (int (__fastcall *)(_DWORD, int))sub_15B2F8, (int)v3);
  return result;
}
