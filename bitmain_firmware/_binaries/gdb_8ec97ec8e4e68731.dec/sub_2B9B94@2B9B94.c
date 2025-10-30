int __fastcall sub_2B9B94(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // r4
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v9; // r11
  int v11; // r7
  unsigned int v12; // r9
  int v13; // t1
  _DWORD *v14; // r3
  int result; // r0
  _BOOL4 v16; // r1

  v5 = *a1;
  if ( !*a1 )
    return 0;
  v6 = 0;
  v7 = a1;
  v9 = a3;
  v11 = 0;
  v12 = 0;
  do
  {
    switch ( *(_BYTE *)(v5 + 36) & 0xF )
    {
      case 0:
      case 2:
      case 0xD:
        if ( (*(_DWORD *)(v5 + 12) & 1) == 0 || !sub_2FC434(*(_DWORD *)(v5 + 4), -1) )
        {
          a3 = *(_DWORD **)(v5 + 16);
          if ( a3 == a2 )
          {
            a3 = *(_DWORD **)(v5 + 8);
            v16 = (unsigned int)a3 >= v12;
            if ( a3 > v9 )
              v16 = 0;
            if ( v16 )
            {
              v12 = *(_DWORD *)(v5 + 8);
              v6 = v5;
            }
          }
        }
        break;
      case 4:
        v11 = *(_DWORD *)(v5 + 4);
        break;
      default:
        break;
    }
    v13 = v7[1];
    ++v7;
    v5 = v13;
  }
  while ( v13 );
  if ( !v6 )
    return 0;
  v14 = a5;
  if ( a4 )
    *a4 = v11;
  if ( a5 )
  {
    v14 = *(_DWORD **)(v6 + 4);
    result = 1;
    a3 = a5;
  }
  else
  {
    result = 1;
  }
  if ( a5 )
    *a3 = v14;
  return result;
}
