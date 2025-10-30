_DWORD *__fastcall sub_138474(int *a1, int a2, int a3)
{
  int v5; // r8
  _DWORD *v6; // r4
  int v7; // r0
  int *v8; // r11
  int v9; // r0
  int v10; // r5
  int *v12; // r0
  int *v13; // r6
  int v14; // r2
  int *v15; // r0

  v5 = sub_137864(a1);
  if ( !v5 )
  {
    v6 = 0;
    goto LABEL_10;
  }
  v6 = (_DWORD *)sub_B2018((int)&CMS_RecipientInfo_it);
  if ( !v6 )
    goto LABEL_20;
  v7 = sub_10E89C(a2);
  v8 = (int *)v7;
  if ( !v7 )
  {
    sub_D0048(46, 101, 113, (int)"crypto/cms/cms_env.c", 195);
    goto LABEL_10;
  }
  v9 = sub_138448(v7);
  v10 = v9;
  if ( !v9 )
  {
    v12 = (int *)sub_B2018((int)&CMS_KeyTransRecipientInfo_it);
    v13 = v12;
    v6[1] = v12;
    if ( !v12 )
      goto LABEL_10;
    *v6 = 0;
    if ( (a3 & 0x10000) != 0 )
    {
      v10 = 2;
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    *v12 = v10;
    if ( !sub_139FE8(v12[1], a2, v14) )
      goto LABEL_10;
    sub_10FD18(a2);
    sub_D9C08((int)v8);
    v13[5] = (int)v8;
    v13[4] = a2;
    if ( (a3 & 0x40000) != 0 )
    {
      v15 = sub_DB4F8(v8, 0);
      v13[6] = (int)v15;
      if ( !v15 || sub_DAA54(v15) <= 0 )
        goto LABEL_10;
    }
    else if ( !sub_137898(v6, a3 & 0x40000) )
    {
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  if ( v9 == 1 )
  {
    if ( sub_138B1C(v6, a2, v8, a3) )
    {
LABEL_7:
      if ( sub_10BD3C(*(int **)(v5 + 8), (int)v6) )
        return v6;
LABEL_20:
      sub_D0048(46, 101, 65, (int)"crypto/cms/cms_env.c", 224);
    }
  }
  else
  {
    sub_D0048(46, 101, 125, (int)"crypto/cms/cms_env.c", 213);
  }
LABEL_10:
  sub_B17C4((int)v6, (int)&CMS_RecipientInfo_it);
  return 0;
}
