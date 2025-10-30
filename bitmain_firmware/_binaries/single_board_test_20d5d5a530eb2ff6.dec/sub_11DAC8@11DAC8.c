int __fastcall sub_11DAC8(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v7; // r4

  result = sub_11D890();
  v7 = (_DWORD *)result;
  if ( result )
  {
    ASN1_TYPE_free(*(_DWORD *)(result + 4));
    *v7 = a2;
    v7[1] = a3;
    sub_11DA88(a1, 0, (int)v7);
    return 1;
  }
  return result;
}
