int __fastcall sub_13F9D4(int a1, _DWORD *a2)
{
  int *v3; // r5
  int v4; // r4
  _DWORD *v7; // r0
  int v8; // r8
  int v9; // r3
  int v10; // r10
  int v11; // r9
  void *v12; // r11
  _DWORD *v13; // r6
  int v14; // r1
  int v15; // r0
  int v16; // r2
  _DWORD *v17; // r0
  int v18; // r6
  int v19; // r0
  _DWORD *v20; // r5

  v3 = *(int **)(a1 + 20);
  v4 = v3[6];
  if ( v4 )
  {
    switch ( v4 )
    {
      case 2:
        v16 = sub_13FD48();
        break;
      case 3:
        v16 = sub_13FDA0();
        break;
      case 1:
        v16 = sub_13FCF0();
        break;
      default:
        return -2;
    }
    goto LABEL_24;
  }
  if ( !v3[7] )
  {
    if ( *(_DWORD *)(a1 + 28) )
    {
      v7 = (_DWORD *)sub_B876C();
      v8 = (int)v7;
      if ( !v7 )
        return v4;
      sub_DB0D4(v7, a1);
    }
    else
    {
      v8 = v3[6];
    }
    v9 = v3[2];
    if ( !v9 )
    {
      v17 = sub_BFD20();
      v18 = (int)v17;
      if ( v17 )
      {
        v4 = sub_17B1D8(v17, *v3, v3[1], v8);
        sub_B87A4(v8);
        if ( v4 )
          sub_D9F44(a2, 28, v18);
        else
          sub_BFB8C(v18);
        return v4;
      }
      goto LABEL_20;
    }
    if ( v9 > 2 || (v10 = *v3, v11 = v3[3], v12 = (void *)v3[5], (v13 = DSA_new()) == 0) )
    {
LABEL_20:
      v4 = 0;
      sub_B87A4(v8);
      return v4;
    }
    if ( v11 == -1 )
    {
      if ( v10 >= 2048 )
      {
        v11 = 256;
        if ( v12 )
          goto LABEL_17;
        goto LABEL_33;
      }
      v11 = 160;
      if ( v12 )
      {
LABEL_17:
        v14 = v3[2];
        if ( v14 == 1 )
        {
          v19 = sub_13FF6C((int)v13, v10, v11, (int)v12, 0, 0, 0, 0, 0, v8);
        }
        else
        {
          if ( v14 != 2 )
          {
LABEL_19:
            sub_C09D0((int)v13);
            goto LABEL_20;
          }
          v19 = sub_14059C((int)v13, v10, v11, (int)v12, 0, 0, -1, 0, 0, 0, v8);
        }
        if ( v19 > 0 )
        {
          sub_B87A4(v8);
          v20 = sub_C0BF4(v13);
          sub_C09D0((int)v13);
          v16 = (int)v20;
          if ( !v20 )
            return v4;
LABEL_24:
          sub_D9F44(a2, 920, v16);
          return 1;
        }
        goto LABEL_19;
      }
    }
    else
    {
      if ( v12 )
        goto LABEL_17;
      if ( v10 >= 2048 )
      {
LABEL_33:
        v12 = sub_D93F0();
        goto LABEL_17;
      }
    }
    v12 = sub_D93D8();
    goto LABEL_17;
  }
  v15 = sub_13FDF8();
  if ( !v15 )
    return v4;
  sub_D9F44(a2, 28, v15);
  return 1;
}
