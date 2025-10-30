_DWORD *__fastcall sub_137B10(int *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v12; // r9
  int v13; // r2
  _DWORD *v14; // r4
  int v15; // r3
  int v16; // r0
  _DWORD *v17; // r7
  int v18; // r0
  int v19; // r2
  _DWORD *v20; // r0
  int v21; // r1
  _DWORD *v22; // r2
  _DWORD *v23; // r5
  char **v24; // r0
  int v26; // [sp+Ch] [bp-8h]

  v12 = sub_137864(a1);
  if ( !v12 )
  {
    v14 = 0;
    goto LABEL_22;
  }
  if ( a2 )
  {
    if ( a2 - 788 > 2 || (v15 = dword_1CD378[a2 - 788]) == 0 )
    {
      sub_D0048(46, 100, 153, (int)"crypto/cms/cms_env.c", 517);
      goto LABEL_8;
    }
    if ( a4 != v15 )
    {
      v13 = 522;
      goto LABEL_7;
    }
  }
  else
  {
    switch ( a4 )
    {
      case 24:
        a2 = 789;
        break;
      case 32:
        a2 = 790;
        break;
      case 16:
        a2 = 788;
        break;
      default:
        v13 = 507;
LABEL_7:
        sub_D0048(46, 100, 118, (int)"crypto/cms/cms_env.c", v13);
LABEL_8:
        v14 = 0;
LABEL_22:
        sub_B17C4((int)v14, (int)&CMS_RecipientInfo_it);
        return 0;
    }
  }
  v14 = (_DWORD *)sub_B2018((int)&CMS_RecipientInfo_it);
  if ( !v14 )
    goto LABEL_21;
  v16 = sub_B2018((int)&CMS_KEKRecipientInfo_it);
  v17 = (_DWORD *)v16;
  v14[1] = v16;
  if ( !v16 )
    goto LABEL_21;
  *v14 = 2;
  if ( a8 )
  {
    v26 = *(_DWORD *)(v16 + 4);
    v18 = sub_B2018((int)&CMS_OtherKeyAttribute_it);
    v19 = v17[1];
    *(_DWORD *)(v26 + 8) = v18;
    if ( !*(_DWORD *)(v19 + 8) )
      goto LABEL_21;
  }
  if ( !sub_10BD3C(*(int **)(v12 + 8), (int)v14) )
  {
LABEL_21:
    sub_D0048(46, 100, 65, (int)"crypto/cms/cms_env.c", 571);
    goto LABEL_22;
  }
  v20 = *(_DWORD **)v17[1];
  v17[4] = a3;
  v17[5] = a4;
  *v17 = 4;
  sub_AE174(v20, a5, a6);
  v21 = v17[1];
  v22 = *(_DWORD **)(v21 + 8);
  *(_DWORD *)(v21 + 4) = a7;
  if ( v22 )
  {
    *v22 = a8;
    v22[1] = a9;
  }
  v23 = (_DWORD *)v17[2];
  v24 = sub_EAA20(a2);
  sub_B28F8(v23, (int)v24, -1, 0);
  return v14;
}
