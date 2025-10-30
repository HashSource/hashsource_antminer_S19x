int __fastcall sub_16A83C(char *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v8; // r0
  int v9; // r4
  int v10; // r10
  int result; // r0
  int v12; // r2
  int *v13; // r0
  int *v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r5
  int (__fastcall *v18)(int, _DWORD, int *); // r6
  int v19; // r8
  int i; // r4
  int v21; // r0
  int v22; // r10
  int v23; // r4
  int v24; // r7
  int v25; // [sp+4h] [bp-20h]
  _DWORD v26[2]; // [sp+Ch] [bp-18h] BYREF
  int v27; // [sp+14h] [bp-10h] BYREF
  int *v28; // [sp+18h] [bp-Ch] BYREF
  int v29; // [sp+1Ch] [bp-8h] BYREF

  v26[0] = a3;
  if ( a1 )
  {
    if ( !strcmp(a1, "PRIVATE KEY") )
    {
      v8 = d2i_PKCS8_PRIV_KEY_INFO(0, (int)v26, a4);
      v9 = v8;
      v10 = v8;
      *a6 = 1;
      if ( v8 )
        v10 = sub_D8E18(v8);
      sub_AE5FC(v9);
    }
    else
    {
      v12 = sub_EE81C(a1, "PRIVATE KEY");
      if ( v12 <= 0 )
        return 0;
      v13 = (int *)sub_AD9B8(0, a1, v12);
      if ( !v13 )
        return 0;
      *a6 = 1;
      v10 = sub_AE3A8(*v13, 0, v26, a4);
    }
  }
  else
  {
    v14 = (int *)sub_CE32C();
    v17 = (int)v14;
    if ( v14 )
    {
      v25 = 0;
      do
      {
        v18 = (int (__fastcall *)(int, _DWORD, int *))sub_CEDFC(v17);
        if ( v18 )
        {
          v27 = 0;
          v19 = v18(v17, 0, &v27);
          if ( v19 > 0 )
          {
            for ( i = 0; i != v19; ++i )
            {
              while ( 1 )
              {
                v28 = 0;
                v29 = v26[0];
                if ( ((int (__fastcall *)(int, int **, _DWORD, _DWORD))v18)(v17, &v28, 0, *(_DWORD *)(v27 + 4 * i)) )
                {
                  if ( v28 )
                  {
                    if ( (v28[2] & 1) == 0 )
                    {
                      v21 = sub_AE3A8(*v28, 0, &v29, a4);
                      if ( v21 )
                        break;
                    }
                  }
                }
                if ( v19 == ++i )
                  goto LABEL_29;
              }
              if ( v25 )
                sub_DA240(v21);
              else
                v25 = v21;
              ++*a6;
            }
          }
        }
LABEL_29:
        v14 = (int *)sub_CE484(v17);
        v17 = (int)v14;
      }
      while ( v14 );
      v22 = v25;
    }
    else
    {
      v22 = 0;
    }
    v23 = 0;
    v24 = v22;
    while ( v23 < sub_AD8E0((int)v14, v15, v16) )
    {
      v29 = v26[0];
      v14 = (int *)sub_AD8FC(v23);
      v15 = v14[2] & 1;
      if ( !v15 )
      {
        v14 = (int *)sub_AE3A8(*v14, 0, &v29, a4);
        if ( v14 )
        {
          if ( v24 )
            v14 = (int *)sub_DA240((int)v14);
          else
            v24 = (int)v14;
          ++*a6;
        }
      }
      ++v23;
    }
    v10 = v24;
    if ( *a6 > 1 )
    {
      sub_DA240(v24);
      return 0;
    }
  }
  if ( !v10 )
    return 0;
  result = sub_16BF9C(v10);
  if ( !result )
  {
    sub_DA240(v10);
    return 0;
  }
  return result;
}
