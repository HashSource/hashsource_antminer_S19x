int __fastcall sub_15EFFC(int *a1, int a2, int a3, int *a4)
{
  int *v6; // r5
  int v7; // r4
  int v9; // r11
  int *v10; // r0
  int *v11; // r0
  int *v12; // r10
  int v13; // [sp+Ch] [bp-48h] BYREF
  _BYTE v14[68]; // [sp+10h] [bp-44h] BYREF

  v13 = 0;
  if ( sub_D8DB8((int)a1, 512) )
  {
    if ( !sub_D16E4(a1, (int)v14, &v13) )
    {
      v6 = 0;
      v7 = 0;
LABEL_4:
      sub_DB4BC((int)v6);
      return v7;
    }
LABEL_6:
    v10 = sub_DB4F8(a4, 0);
    v6 = v10;
    if ( v10 && sub_DA898(v10) > 0 && (sub_D8D8C((int)a1), sub_DB77C((int)v6, -1, 248) > 0) )
      v7 = sub_DA8E0(v6);
    else
      v7 = -1;
    goto LABEL_4;
  }
  v11 = (int *)sub_D14F4();
  v12 = v11;
  if ( v11 )
  {
    if ( sub_D17B4(v11, a1) )
    {
      v9 = sub_D16E4(v12, (int)v14, &v13);
      sub_D1504(v12);
      if ( v9 )
        goto LABEL_6;
    }
    else
    {
      sub_D1504(v12);
    }
  }
  else
  {
    sub_D0048(6, 108, 65, (int)"crypto/evp/p_verify.c", 32);
  }
  return 0;
}
