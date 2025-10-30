_DWORD *__fastcall sub_B19F4(_DWORD *result, int a2)
{
  int v2; // r3
  int (__fastcall *v3)(_DWORD *); // r3
  _DWORD *v4; // r3
  int v5; // r3

  while ( 2 )
  {
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v4 = *(_DWORD **)(a2 + 8);
        if ( v4 )
        {
          if ( (*v4 & 0x306) != 0 )
            goto LABEL_4;
          a2 = v4[4];
          continue;
        }
        v5 = *(_DWORD *)(a2 + 16);
        if ( v5 )
          goto LABEL_9;
        if ( *(_DWORD *)(a2 + 4) != 1 )
          goto LABEL_4;
        *result = *(_DWORD *)(a2 + 20);
        return result;
      case 1:
      case 2:
      case 6:
        goto LABEL_4;
      case 4:
        v2 = *(_DWORD *)(a2 + 16);
        if ( !v2 )
          goto LABEL_4;
        v3 = *(int (__fastcall **)(_DWORD *))(v2 + 12);
        if ( !v3 )
          goto LABEL_4;
        return (_DWORD *)v3(result);
      case 5:
        v5 = *(_DWORD *)(a2 + 16);
        if ( !v5 )
          goto LABEL_4;
LABEL_9:
        v3 = *(int (__fastcall **)(_DWORD *))(v5 + 16);
        if ( v3 )
          return (_DWORD *)v3(result);
LABEL_4:
        *result = 0;
        return result;
      default:
        return result;
    }
  }
}
