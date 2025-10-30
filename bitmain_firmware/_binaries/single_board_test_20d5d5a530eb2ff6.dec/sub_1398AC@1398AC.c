_DWORD *__fastcall sub_1398AC(int *a1, int a2, int a3, int a4, char *s, size_t a6, _DWORD *a7)
{
  _DWORD *v9; // r10
  _DWORD *result; // r0
  int v11; // r8
  _DWORD *v12; // r4
  int *v13; // r6
  int v14; // r1
  _DWORD *v15; // r0
  int v16; // r0
  unsigned int v17; // r0
  _DWORD *v18; // r5
  int v19; // r0
  _DWORD *v20; // r6
  int v21; // r0
  char ***v22; // r10
  int v23; // r10
  int v24; // r0
  int v25; // r3
  int v26; // r2
  int *v27; // r0
  int *v28; // r0
  int v29; // r2
  _BYTE v30[20]; // [sp+8h] [bp-14h] BYREF

  v9 = a7;
  result = (_DWORD *)sub_137864(a1);
  v11 = (int)result;
  if ( result )
  {
    if ( a3 <= 0 )
    {
      if ( !a7 )
      {
        v9 = *(_DWORD **)(result[3] + 12);
        if ( !v9 )
          goto LABEL_23;
      }
    }
    else
    {
      if ( !a7 )
      {
        v9 = *(_DWORD **)(result[3] + 12);
        if ( !v9 )
        {
LABEL_23:
          sub_D0048(46, 165, 126, (int)"crypto/cms/cms_pwri.c", 68);
          return 0;
        }
      }
      if ( a3 != 893 )
      {
        sub_D0048(46, 165, 179, (int)"crypto/cms/cms_pwri.c", 73);
        return 0;
      }
    }
    v12 = (_DWORD *)sub_B2888();
    if ( !v12 )
      goto LABEL_34;
    v13 = (int *)sub_D7A5C();
    if ( sub_D875C(v13, v9, 0, 0, 0) <= 0 )
    {
      v29 = 85;
    }
    else
    {
      v14 = sub_D8944(v13);
      if ( v14 <= 0 )
        goto LABEL_12;
      if ( sub_F497C((int)v30, v14) <= 0 )
        goto LABEL_26;
      if ( sub_D875C(v13, 0, 0, 0, v30) > 0 )
      {
        v15 = (_DWORD *)sub_B2408();
        v12[1] = v15;
        if ( v15 )
        {
          if ( sub_D8BA8(v13, v15) > 0 )
          {
LABEL_12:
            v16 = sub_D8920((int)v13);
            v17 = sub_D8ADC(v16);
            *v12 = sub_EAA20(v17);
            sub_D7A6C(v13);
            v18 = (_DWORD *)sub_B2018((int)&CMS_RecipientInfo_it);
            if ( v18 )
            {
              v19 = sub_B2018((int)&CMS_PasswordRecipientInfo_it);
              v20 = (_DWORD *)v19;
              v18[1] = v19;
              if ( v19 )
              {
                v21 = *(_DWORD *)(v19 + 8);
                *v18 = 3;
                X509_ALGOR_free(v21);
                v22 = (char ***)sub_B2888();
                v20[2] = v22;
                if ( v22 )
                {
                  *v22 = sub_EAA20(0x37Du);
                  v23 = v20[2];
                  v24 = sub_B2408();
                  v25 = v20[2];
                  *(_DWORD *)(v23 + 4) = v24;
                  v26 = *(_DWORD *)(v25 + 4);
                  if ( v26 )
                  {
                    if ( sub_AE2BC((int)v12, (int)X509_ALGOR_it, (int **)(v26 + 4)) )
                    {
                      **(_DWORD **)(v20[2] + 4) = 16;
                      X509_ALGOR_free((int)v12);
                      v27 = (int *)sub_1733B0(a2, 0);
                      v12 = v27;
                      v20[1] = v27;
                      if ( !v27 )
                      {
LABEL_30:
                        sub_D7A6C(v27);
                        sub_B17C4((int)v18, (int)&CMS_RecipientInfo_it);
                        goto LABEL_27;
                      }
                      sub_139860(v18, s, a6);
                      v28 = *(int **)(v11 + 8);
                      *v20 = 0;
                      if ( sub_10BD3C(v28, (int)v18) )
                        return v18;
                      v12 = 0;
                    }
                  }
                }
              }
              sub_D0048(46, 165, 65, (int)"crypto/cms/cms_pwri.c", 161);
              v27 = 0;
              goto LABEL_30;
            }
LABEL_34:
            sub_D0048(46, 165, 65, (int)"crypto/cms/cms_pwri.c", 161);
            sub_D7A6C(0);
            goto LABEL_27;
          }
          sub_D0048(46, 165, 102, (int)"crypto/cms/cms_pwri.c", 105);
        }
        else
        {
          sub_D0048(46, 165, 65, (int)"crypto/cms/cms_pwri.c", 100);
        }
LABEL_26:
        sub_D7A6C(v13);
LABEL_27:
        X509_ALGOR_free((int)v12);
        return 0;
      }
      v29 = 95;
    }
    sub_D0048(46, 165, 6, (int)"crypto/cms/cms_pwri.c", v29);
    goto LABEL_26;
  }
  return result;
}
