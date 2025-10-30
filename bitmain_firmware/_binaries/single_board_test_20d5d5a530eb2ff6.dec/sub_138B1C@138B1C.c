int __fastcall sub_138B1C(_DWORD *a1, int a2, int *a3, int a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r4
  int v10; // r0
  _DWORD *v11; // r11
  _DWORD *v12; // r6
  int v13; // r0
  int *v14; // r0
  int *v15; // r5
  int *v16; // r0
  int *v17; // r0
  _DWORD *v19; // r0
  int *v20; // [sp+Ch] [bp-8h] BYREF

  v8 = (_DWORD *)sub_B2018((int)&CMS_KeyAgreeRecipientInfo_it);
  a1[1] = v8;
  if ( !v8 )
    return 0;
  v9 = v8;
  *a1 = 1;
  *v8 = 3;
  v10 = sub_B2018((int)&CMS_RecipientEncryptedKey_it);
  v11 = (_DWORD *)v10;
  if ( !v10 )
    return 0;
  if ( !sub_10BD3C((int *)v9[4], v10) )
  {
    sub_B17C4((int)v11, (int)&CMS_RecipientEncryptedKey_it);
    return 0;
  }
  if ( (a4 & 0x10000) == 0 )
  {
    v19 = (_DWORD *)*v11;
    *v19 = 0;
    if ( sub_139784(v19 + 1, a2) )
      goto LABEL_7;
    return 0;
  }
  v12 = (_DWORD *)*v11;
  *(_DWORD *)*v11 = 1;
  v12[1] = sub_B2018((int)&CMS_RecipientKeyIdentifier_it);
  v13 = *(_DWORD *)(*v11 + 4);
  if ( !v13 || !sub_139800(v13, a2) )
    return 0;
LABEL_7:
  v20 = 0;
  v14 = sub_DB4F8(a3, 0);
  v15 = v14;
  if ( v14 )
  {
    if ( sub_DAFF4(v14) <= 0 || sub_DB03C(v15, (int *)&v20) <= 0 )
      goto LABEL_17;
    sub_DB4BC((int)v15);
    v16 = sub_DB4F8(v20, 0);
    v15 = v16;
    if ( v16 )
    {
      if ( sub_DAC94(v16) > 0 )
      {
        v17 = v20;
        v9[5] = v15;
        sub_DA240((int)v17);
        sub_D9C08((int)a3);
        v11[2] = a3;
        return 1;
      }
      goto LABEL_17;
    }
  }
  v15 = 0;
LABEL_17:
  sub_DB4BC((int)v15);
  sub_DA240((int)v20);
  return 0;
}
