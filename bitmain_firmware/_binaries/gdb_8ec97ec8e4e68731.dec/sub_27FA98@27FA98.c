int __fastcall sub_27FA98(int result, int *a2, int a3, int a4)
{
  int v5; // r6
  int v6; // r7
  int v7; // r12
  int v8; // r4
  char v9; // r8
  int *v10; // r1
  int v11; // r5
  int v12; // r2

  v5 = a3;
  if ( result != -2 )
  {
    if ( result )
    {
      if ( a2[513] )
      {
        sub_292D9C(a3);
        dword_4900CC = (int)a2;
        return -2;
      }
      else if ( a4 )
      {
        sub_292D9C(a3);
        result = -1;
        dword_4900CC = (int)a2;
      }
    }
    return result;
  }
  v6 = dword_4900CC;
  if ( *(_BYTE *)(dword_4900CC + 2048) )
    return sub_27F46C(256, (int *)dword_4900CC, 0);
  v7 = *(_DWORD *)(dword_4900CC + 2052);
  if ( v7 != 2710432 )
  {
    if ( v7 == 2711208 )
    {
      v8 = dword_4900CC + 8 * a3;
      v9 = *(_BYTE *)v8;
      v10 = (int *)dword_4900CC;
      v11 = *(_DWORD *)(v8 + 4);
      v12 = *(unsigned __int8 *)(dword_4900CC + 2048);
      *(_BYTE *)(dword_4900CC + 8 * v5) = 0;
      *(_DWORD *)(v8 + 4) = 2711208;
      result = sub_27F46C(v5, v10, v12);
      *(_BYTE *)(v6 + 8 * v5) = v9;
      *(_DWORD *)(v8 + 4) = v11;
      return result;
    }
    return sub_27F46C(256, (int *)dword_4900CC, 0);
  }
  if ( (a3 & 0xFFFFFF00) == 0 && ((*_ctype_b_loc())[a3] & 0x100) != 0 )
    v5 = (*_ctype_tolower_loc())[v5];
  dword_4900CC = (int)a2;
  return sub_27F46C(v5, a2, 0);
}
