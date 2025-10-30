int __fastcall sub_2F5414(int a1, unsigned int *s, int a3, unsigned int a4)
{
  unsigned int v8; // r8
  unsigned int v9; // r0
  unsigned int v10; // r10
  unsigned int v11; // r4
  unsigned int v12; // r11
  __int16 v13; // r0

  v8 = a3 + 4;
  memset(s, 0, 0x20u);
  if ( v8 > a4 )
    return 0;
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a3);
  *s = v9;
  if ( !v9 )
    return 0;
  v10 = a3 + v9;
  if ( a4 < a3 + v9 )
    return 0;
  if ( v9 <= 5 )
  {
    *((_WORD *)s + 14) = 0;
    return 1;
  }
  v11 = a3 + 6;
  if ( v10 < v11 )
    return 0;
  *((_WORD *)s + 14) = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 52))(v8);
  while ( 1 )
  {
    v12 = v11 + 2;
    if ( v10 < v11 + 2 )
      break;
    v13 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 52))(v11);
    switch ( v13 & 0xF )
    {
      case 1:
        v11 += 6;
        if ( v10 >= v11 )
        {
          if ( v13 == 273 )
          {
            s[2] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 40))(v12);
          }
          else if ( v13 == 289 )
          {
            s[3] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 40))(v12);
          }
        }
        break;
      case 2:
      case 6:
        v11 += 6;
        if ( v10 >= v11 )
        {
          if ( v13 == 18 )
          {
            s[1] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 40))(v12);
          }
          else if ( v13 == 262 )
          {
            s[4] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 40))(v12);
            s[6] = 1;
          }
        }
        break;
      case 3:
        if ( v10 >= v11 + 4 )
          v12 += (*(int (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 52))(v12);
        v11 = v12 + 2;
        break;
      case 4:
        if ( v10 >= v11 + 6 )
          v12 += (*(int (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 40))(v12);
        v11 = v12 + 4;
        break;
      case 5:
        v11 += 4;
        break;
      case 7:
        v11 += 10;
        break;
      case 8:
        if ( v13 == 56 )
          s[5] = v12;
        v11 = v12 + strnlen(v11 + 2, v10 - v12) + 1;
        break;
      default:
        v11 += 2;
        break;
    }
  }
  return 1;
}
