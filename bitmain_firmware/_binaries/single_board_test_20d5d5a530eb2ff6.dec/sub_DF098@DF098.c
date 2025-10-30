int __fastcall sub_DF098(_DWORD *a1, int a2, int a3, int a4, int a5, char *dest, size_t n)
{
  int *v11; // r4
  int *v12; // r5
  int v13; // r0
  bool v14; // zf
  int *v15; // r6
  int v16; // r11
  _DWORD *v17; // r0
  int v18; // r8
  int v19; // r0
  int v20; // r7
  int v22; // [sp+Ch] [bp-50h]
  int v23; // [sp+10h] [bp-4Ch] BYREF
  int v24; // [sp+14h] [bp-48h] BYREF
  _BYTE v25[68]; // [sp+18h] [bp-44h] BYREF

  v22 = sub_D8C78((int)a1);
  if ( v22 <= 0 )
  {
    v20 = 0;
    v18 = 0;
    v15 = 0;
    v12 = 0;
    v11 = 0;
  }
  else
  {
    v11 = (int *)sub_D14F4();
    v12 = (int *)sub_D14F4();
    v13 = sub_D14F4();
    v14 = v12 == 0;
    if ( v12 )
      v14 = v11 == 0;
    v15 = (int *)v13;
    v16 = v14;
    if ( v14 )
    {
      v20 = 0;
      v18 = 0;
    }
    else if ( v13 )
    {
      sub_D8DA4(v13, 8);
      v17 = sub_DA2B8(855, (_DWORD *)v16, a2, a3);
      v18 = (int)v17;
      if ( v17 )
      {
        v19 = sub_D9454(v15, (_DWORD *)v16, a1, (_DWORD *)v16, (int)v17);
        if ( v19 && (v19 = sub_D17B4(v11, v15)) != 0 && (!a4 || (v19 = sub_D16D8((int)v11, a4, a5)) != 0) )
        {
          if ( sub_D9644(v11, (int)v25, (int)&v23) )
          {
            while ( sub_D17B4(v11, v15) && sub_D16D8((int)v11, (int)v25, v23) )
            {
              if ( n <= v22 )
              {
                if ( (!a4 || sub_D16D8((int)v11, a4, a5)) && sub_D9644(v11, (int)v25, (int)&v23) )
                {
                  v20 = 1;
                  memcpy(dest, v25, n);
                  goto LABEL_13;
                }
                break;
              }
              if ( sub_D17B4(v12, v11) && (!a4 || sub_D16D8((int)v11, a4, a5)) )
              {
                if ( sub_D9644(v11, (int)dest, (int)&v24) )
                {
                  dest += v24;
                  n -= v24;
                  if ( sub_D9644(v12, (int)v25, (int)&v23) )
                    continue;
                }
              }
              break;
            }
          }
          v20 = 0;
        }
        else
        {
          v20 = v19;
        }
      }
      else
      {
        v20 = 0;
      }
    }
    else
    {
      v20 = 0;
      v18 = 0;
    }
  }
LABEL_13:
  sub_DA240(v18);
  sub_D1504(v11);
  sub_D1504(v12);
  sub_D1504(v15);
  sub_E07F8((int)v25, 0x40u);
  return v20;
}
