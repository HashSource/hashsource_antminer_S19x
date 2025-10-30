int *__fastcall sub_DB4F8(int *result, _DWORD *a2)
{
  int v2; // r6
  _DWORD *v3; // r5
  int v4; // r7
  int v5; // r7
  int *v6; // r0
  int *v7; // r4
  int (__fastcall *v8)(int *); // r3

  v2 = (int)result;
  if ( !result )
    return result;
  v3 = a2;
  v4 = *result;
  if ( a2 || (v3 = (_DWORD *)result[5]) != 0 || (v3 = (_DWORD *)result[4]) != 0 )
  {
    if ( !sub_CDD6C(v3) )
    {
      sub_D0048(6, 157, 38, (int)"crypto/evp/pmeth_lib.c", 119);
      return 0;
    }
    goto LABEL_4;
  }
  v3 = (_DWORD *)sub_CF2F0(*result);
  if ( v3 )
  {
LABEL_4:
    v5 = sub_CF304((int)v3, v4);
    goto LABEL_5;
  }
  v5 = sub_DB290(v4);
LABEL_5:
  if ( v5 )
  {
    v6 = (int *)sub_E0740(40, "crypto/evp/pmeth_lib.c", 144);
    v7 = v6;
    if ( v6 )
    {
      v6[1] = (int)v3;
      *v6 = v5;
      v6[2] = v2;
      v6[4] = 0;
      sub_D9C08(v2);
      v8 = *(int (__fastcall **)(int *))(v5 + 8);
      result = v7;
      if ( v8 )
      {
        if ( v8(v7) <= 0 )
        {
          *v7 = 0;
          sub_DB4BC((int)v7);
          return 0;
        }
        else
        {
          return v7;
        }
      }
    }
    else
    {
      sub_CDDF8((int)v3);
      sub_D0048(6, 157, 65, (int)"crypto/evp/pmeth_lib.c", 149);
      return 0;
    }
  }
  else
  {
    sub_CDDF8((int)v3);
    sub_D0048(6, 157, 156, (int)"crypto/evp/pmeth_lib.c", 140);
    return 0;
  }
  return result;
}
