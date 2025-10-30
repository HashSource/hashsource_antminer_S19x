_DWORD *__fastcall sub_FAAF8(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r7
  _DWORD *v6; // r5
  _DWORD *v7; // r0
  int v8; // r4
  int v9; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int **v14; // r0

  v3 = *(_DWORD **)(a1 + 20);
  if ( !v3[1] )
  {
    v14 = (int **)sub_B822C();
    v3[1] = v14;
    if ( !v14 || !sub_B8930(v14, 65537) )
      return 0;
  }
  v5 = RSA_new();
  if ( !v5 )
    return 0;
  v6 = *(_DWORD **)(a1 + 28);
  if ( !v6 )
    goto LABEL_6;
  v7 = (_DWORD *)sub_B876C();
  v6 = v7;
  if ( v7 )
  {
    sub_DB0D4(v7, a1);
LABEL_6:
    v8 = sub_165DAC(v5, *v3, v3[2], v3[1], v6);
    sub_B87A4((int)v6);
    if ( v8 <= 0 )
    {
      sub_F8154((int)v5);
      return (_DWORD *)v8;
    }
    if ( **(_DWORD **)a1 != 912 )
    {
LABEL_8:
      v9 = **(_DWORD **)a1;
LABEL_9:
      sub_D9F44(a2, v9, (int)v5);
      return (_DWORD *)v8;
    }
    v11 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24);
    v12 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 28);
    v13 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 32);
    if ( v11 || v12 )
    {
      if ( v13 == -2 )
        v13 = 0;
    }
    else if ( v13 == -2 )
    {
      goto LABEL_8;
    }
    v6 = sub_F6BAC(v11, v12, v13);
    v5[13] = v6;
    if ( v6 )
    {
      v9 = **(_DWORD **)a1;
      goto LABEL_9;
    }
  }
  sub_F8154((int)v5);
  return v6;
}
