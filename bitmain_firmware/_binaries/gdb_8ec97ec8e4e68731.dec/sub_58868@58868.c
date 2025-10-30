_DWORD *__fastcall sub_58868(_DWORD *result, const char *a2, const char *a3, int a4)
{
  _DWORD *v5; // r1
  _DWORD *v6; // r4
  int v7; // r6
  int v8; // r5
  _DWORD *v9; // r0
  int **v10; // r5
  int *v12; // r0

  v5 = (_DWORD *)result[13];
  if ( v5 )
  {
    v6 = (_DWORD *)*v5;
    if ( *v5 )
    {
      v7 = result[14];
      if ( v6[2] == 14 )
        goto LABEL_7;
      while ( 1 )
      {
        if ( v6[13] )
          goto LABEL_7;
        while ( 1 )
        {
          v6 = (_DWORD *)*v6;
          if ( !v6 )
            return result;
          if ( v6[2] != 14 )
            break;
LABEL_7:
          v8 = v6[1];
          v9 = (_DWORD *)sub_242F8C(result);
          result = (_DWORD *)sub_58868(v6, v7, v8, *v9);
        }
      }
    }
  }
  else
  {
    v10 = (int **)result[21];
    result = (_DWORD *)sub_25A418(a4, "User command \"%s%s\":\n", a2, a3);
    if ( v10 )
    {
      v12 = (int *)sub_242FDC(result);
      sub_57ADC(*v12, v10, 1);
      return (_DWORD *)sub_25A6BC(&word_356638, a4);
    }
  }
  return result;
}
