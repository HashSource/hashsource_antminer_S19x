_DWORD *__fastcall sub_2AC530(int a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int (**v4)(); // r3
  int (**v5)(); // r2
  bool v6; // zf
  int v7; // r2
  char v8; // r1
  unsigned int v9; // r2

  result = sub_2AC474();
  if ( result )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = off_412128;
    result[3] = *(_DWORD *)(a1 + 12);
    v5 = *(int (***)())(a1 + 12);
    result[1] = v3;
    v6 = v5 == off_412128;
    v7 = *((unsigned __int8 *)result + 43);
    if ( v6 )
      v4 = *(int (***)())(a1 + 8);
    result[35] = a1;
    if ( v6 )
      result[2] = v4;
    v8 = *((_BYTE *)result + 44);
    *((_BYTE *)result + 40) = result[10] & 0xE7 | 8;
    v9 = v7 & 0xFFFFFFFB | (4 * ((*(unsigned __int8 *)(a1 + 43) >> 2) & 1));
    *((_BYTE *)result + 43) = v9;
    *((_BYTE *)result + 44) = v8 & 0xBF | (((*(_BYTE *)(a1 + 44) & 0x40) != 0) << 6);
    *((_BYTE *)result + 43) = v9 & 0xDF | (32 * ((*(_BYTE *)(a1 + 43) & 0x20) != 0));
  }
  return result;
}
