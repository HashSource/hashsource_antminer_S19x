int __fastcall sub_D9FA8(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  int result; // r0

  if ( *a1 == 1061 )
  {
    v3 = (_DWORD *)sub_D9F64((int)a1);
    result = v3[2];
    *a2 = *v3;
  }
  else
  {
    sub_D0048(6, 184, 164, (int)"crypto/evp/p_lib.c", 438);
    return 0;
  }
  return result;
}
