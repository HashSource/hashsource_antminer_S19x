int __fastcall sub_15EF08(int *a1, int a2, int *a3, int *a4)
{
  int *v8; // r5
  int v9; // r4
  int v11; // r11
  int *v12; // r0
  int *v13; // r0
  int *v14; // r10
  int v15; // [sp+8h] [bp-4Ch] BYREF
  int v16; // [sp+Ch] [bp-48h] BYREF
  _BYTE v17[68]; // [sp+10h] [bp-44h] BYREF

  *a3 = 0;
  v15 = 0;
  if ( sub_D8DB8((int)a1, 512) )
  {
    if ( !sub_D16E4(a1, (int)v17, &v15) )
      goto LABEL_3;
    goto LABEL_6;
  }
  v13 = (int *)sub_D14F4();
  v14 = v13;
  if ( v13 )
  {
    if ( sub_D17B4(v13, a1) )
    {
      v11 = sub_D16E4(v14, (int)v17, &v15);
      sub_D1504(v14);
      if ( v11 )
      {
LABEL_6:
        v16 = sub_D9AF8((int)a4);
        v12 = sub_DB4F8(a4, 0);
        v8 = v12;
        if ( v12 )
        {
          if ( sub_DA780(v12) > 0 )
          {
            v9 = 0;
            sub_D8D8C((int)a1);
            if ( sub_DB77C((int)v8, -1, 248) > 0 && sub_DA7C8(v8, a2, (unsigned int *)&v16, (int)v17, v15) > 0 )
            {
              v9 = 1;
              *a3 = v16;
            }
          }
          else
          {
            v9 = 0;
          }
          goto LABEL_4;
        }
LABEL_3:
        v8 = 0;
        v9 = 0;
LABEL_4:
        sub_DB4BC((int)v8);
        return v9;
      }
    }
    else
    {
      sub_D1504(v14);
    }
  }
  else
  {
    sub_D0048(6, 107, 65, (int)"crypto/evp/p_sign.c", 34);
  }
  return 0;
}
