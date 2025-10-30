_DWORD *__fastcall sub_24C078(int a1, __int64 a2, void **a3)
{
  _DWORD *result; // r0
  void *v7; // r2

  result = *a3;
  if ( *a3 )
  {
    while ( 1 )
    {
      while ( *result != a1 )
      {
        result = (_DWORD *)result[18];
        if ( !result )
          goto LABEL_7;
      }
      if ( *((_QWORD *)result + 1) == a2 )
        break;
      result = (_DWORD *)result[18];
      if ( !result )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    result = sub_93094(1u, 0x50u);
    v7 = *a3;
    *result = a1;
    *((_QWORD *)result + 1) = a2;
    result[18] = v7;
    *a3 = result;
    result[9] = 0;
    result[10] = 0;
    result[13] = 0;
  }
  return result;
}
