_DWORD *__fastcall sub_152410(_DWORD *result, int a2)
{
  _DWORD *v2; // r5
  int v4; // r4
  int (*v5)(void); // r3

  v2 = result;
  if ( !byte_46D454 )
  {
    if ( (a2 & 8) != 0 )
    {
      result = (_DWORD *)sub_259858("Exception condition detected on fd %d\n", *result);
      v2[5] = 1;
    }
    else
    {
      result[5] = 0;
    }
    if ( (a2 & v2[1]) == 0 )
      return result;
    return (_DWORD *)((int (__fastcall *)(_DWORD, _DWORD))v2[3])(v2[5], v2[4]);
  }
  v4 = a2 & (result[1] | 0x38);
  if ( (v4 & 0x28) == 0 )
  {
    result[5] = 0;
    if ( !v4 )
      return result;
    return (_DWORD *)((int (__fastcall *)(_DWORD, _DWORD))v2[3])(v2[5], v2[4]);
  }
  if ( (v4 & 8) != 0 )
    sub_259858("Error detected on fd %d\n", *result);
  if ( (v4 & 0x20) != 0 )
    sub_259858("Invalid or non-`poll'able fd %d\n", *v2);
  v5 = (int (*)(void))v2[3];
  v2[5] = 1;
  return (_DWORD *)v5();
}
