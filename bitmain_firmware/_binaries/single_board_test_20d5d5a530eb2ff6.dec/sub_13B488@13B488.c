int __fastcall sub_13B488(int a1, int a2, int a3, int *a4)
{
  int result; // r0
  int v6; // r2
  bool (__fastcall *v7)(int, unsigned int); // r7
  int (__fastcall *v8)(int, int); // r9
  unsigned __int8 *v9; // r4
  int v10; // r11
  int v11; // r0
  bool v12; // cc
  int v13; // r1
  unsigned __int8 *v14; // r6

  if ( a4 )
  {
    result = sub_13B3F8(a1, a2, a3);
    if ( result )
    {
      if ( a1 )
      {
        v7 = *(bool (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 28);
        if ( !v7 )
          v7 = sub_13B190;
        v8 = *(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 32);
        if ( !v8 )
          v8 = sub_13B188;
      }
      else
      {
        v8 = sub_13B188;
        v7 = sub_13B190;
      }
      v9 = (unsigned __int8 *)result;
      v10 = 0;
      while ( 1 )
      {
        v13 = *v9;
        v14 = v9++;
        if ( !((int (__fastcall *)(int, int, int))v7)(a1, v13, v6) )
          break;
        v11 = v8(a1, *v14);
        v6 = 1717986919 * (0x7FFFFFFF - v11);
        v12 = v10 <= (0x7FFFFFFF - v11) / 10;
        v10 = v11 + 10 * v10;
        if ( !v12 )
        {
          sub_D0048(14, 112, 121, (int)"crypto/conf/conf_lib.c", 316);
          return 0;
        }
      }
      result = 1;
      *a4 = v10;
    }
  }
  else
  {
    sub_D0048(14, 112, 67, (int)"crypto/conf/conf_lib.c", 297);
    return 0;
  }
  return result;
}
