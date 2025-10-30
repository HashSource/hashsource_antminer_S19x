_DWORD *__fastcall sub_21CF28(_DWORD *a1, int a2, const char *a3, int a4)
{
  int v8; // r4
  int v9; // r1
  int v11[3]; // [sp+8h] [bp-Ch] BYREF

  if ( a2 )
  {
    v8 = a2;
    while ( 1 )
    {
      sub_21C464(v11, v8, 0, a3, a4);
      if ( v11[0] )
        break;
      v8 = ((int (__fastcall *)(int, int))loc_1B7308)(a2, v8);
      if ( !v8 )
        goto LABEL_6;
    }
    v9 = v11[1];
    *a1 = v11[0];
    a1[1] = v9;
    return a1;
  }
  else
  {
LABEL_6:
    *a1 = 0;
    a1[1] = 0;
    return a1;
  }
}
