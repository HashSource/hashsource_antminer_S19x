int __fastcall sub_13AD10(int *a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int *v8; // r5
  int v9; // r6
  int v10; // r0
  int v11; // r2
  signed int i; // r4
  _DWORD *v13; // r0
  char *v14; // r11
  int *v15; // r0
  int v17; // r2
  bool v18; // cc
  int *v19; // r0
  int v20; // r3
  int (*v21)(void); // r4
  int v22; // r0
  int v23; // r2
  int v24; // r4
  _DWORD *v25; // r11
  unsigned int v26; // r1
  int v27; // r0
  int v28; // r8
  char **v29; // r0
  int v30; // r0
  _DWORD *v31; // r0
  char ***v32; // r5
  int v33; // r0
  char **v34; // r0
  _DWORD *v35; // r0
  int v36; // r4
  char *v37; // r0
  int v38; // r4
  void **v39; // r0
  size_t *v41; // [sp+24h] [bp-8h] BYREF

  if ( sub_10E8B4(a2, a3) )
  {
    if ( a1[1] )
    {
      if ( sub_EAC84(*a1) != (char *)22 )
      {
        sub_D0048(46, 133, 108, (int)"crypto/cms/cms_sd.c", 26);
        goto LABEL_60;
      }
      v8 = (int *)a1[1];
    }
    else
    {
      v31 = (_DWORD *)sub_B2018((int)&CMS_SignedData_it);
      a1[1] = (int)v31;
      if ( !v31 )
      {
        sub_D0048(46, 149, 65, (int)"crypto/cms/cms_sd.c", 37);
        goto LABEL_60;
      }
      v32 = (char ***)v31[2];
      *v31 = 1;
      *v32 = sub_EAA20(0x15u);
      v33 = *a1;
      *(_DWORD *)(*(_DWORD *)(a1[1] + 8) + 8) = 1;
      ASN1_OBJECT_free(v33);
      v34 = sub_EAA20(0x16u);
      v8 = (int *)a1[1];
      *a1 = (int)v34;
    }
    if ( v8 )
    {
      v9 = sub_B2018((int)&CMS_SignerInfo_it);
      if ( v9 )
      {
        sub_120C28(a2, -1, -1);
        sub_10FD18(a2);
        sub_D9C08((int)a3);
        *(_DWORD *)(v9 + 32) = a3;
        *(_DWORD *)(v9 + 28) = a2;
        v10 = sub_D14F4();
        *(_DWORD *)(v9 + 36) = v10;
        *(_DWORD *)(v9 + 40) = 0;
        if ( !v10 )
        {
          v23 = 272;
          goto LABEL_45;
        }
        v11 = a5 & 0x10000;
        if ( (a5 & 0x10000) != 0 )
        {
          v17 = *v8;
          *(_DWORD *)v9 = 3;
          v18 = v17 <= 2;
          v11 = 1;
          if ( v18 )
            *v8 = 3;
        }
        else
        {
          *(_DWORD *)v9 = 1;
        }
        if ( !sub_139FE8(*(_DWORD **)(v9 + 4), a2, v11) )
          goto LABEL_36;
        if ( !a4 )
        {
          if ( sub_DA710((int)a3, (int)&v41) <= 0 )
            goto LABEL_36;
          v37 = sub_EAAB4((unsigned int)v41);
          a4 = (_DWORD *)sub_D99DC((int)v37);
          if ( !a4 )
          {
            sub_D0048(46, 102, 128, (int)"crypto/cms/cms_sd.c", 295);
            goto LABEL_36;
          }
        }
        sub_B2974(*(_DWORD **)(v9 + 8), (int)a4);
        for ( i = 0; i < sub_10C010(v8[1]); ++i )
        {
          v13 = (_DWORD *)sub_10C01C((_DWORD *)v8[1], i);
          sub_B294C(&v41, 0, 0, v13);
          v14 = sub_EAC84((int)v41);
          if ( v14 == (char *)sub_D8C70((int)a4) )
            break;
        }
        if ( i == sub_10C010(v8[1]) )
        {
          v35 = (_DWORD *)sub_B2888();
          v36 = (int)v35;
          if ( !v35 )
            goto LABEL_44;
          sub_B2974(v35, (int)a4);
          if ( !sub_10BD3C((int *)v8[1], v36) )
          {
            X509_ALGOR_free(v36);
            goto LABEL_44;
          }
        }
        if ( (a5 & 0x40000) == 0 )
        {
          v20 = *(_DWORD *)(*(_DWORD *)(v9 + 32) + 12);
          if ( v20 )
          {
            v21 = *(int (**)(void))(v20 + 92);
            if ( v21 )
            {
              v22 = v21();
              if ( v22 == -2 )
              {
                sub_D0048(46, 170, 125, (int)"crypto/cms/cms_sd.c", 231);
                goto LABEL_36;
              }
              if ( v22 <= 0 )
              {
                sub_D0048(46, 170, 111, (int)"crypto/cms/cms_sd.c", 235);
LABEL_36:
                sub_B17C4(v9, (int)&CMS_SignerInfo_it);
                return 0;
              }
            }
          }
        }
        if ( (a5 & 0x100) != 0 )
          goto LABEL_24;
        if ( !*(_DWORD *)(v9 + 12) )
        {
          v39 = sub_10BFCC();
          *(_DWORD *)(v9 + 12) = v39;
          if ( !v39 )
            goto LABEL_44;
        }
        if ( (a5 & 0x200) != 0 )
        {
LABEL_23:
          if ( (a5 & 0x8000) != 0 )
          {
            v24 = 0;
            v25 = (_DWORD *)sub_13A08C(a1);
            do
            {
              v18 = v24 < sub_10C010((int)v25);
              v26 = v24++;
              if ( !v18 )
              {
                sub_D0048(46, 108, 131, (int)"crypto/cms/cms_sd.c", 168);
                goto LABEL_36;
              }
              v27 = sub_10C01C(v25, v26);
              v28 = v27;
            }
            while ( v9 == v27 || sub_178E08(v27) < 0 || sub_EB338(**(_DWORD **)(v9 + 8), **(_DWORD **)(v28 + 8)) );
            v29 = sub_EAA20(0x33u);
            v30 = sub_178E88(v28, v29, -3, 4);
            if ( !v30 )
            {
              sub_D0048(46, 108, 114, (int)"crypto/cms/cms_sd.c", 157);
              goto LABEL_36;
            }
            if ( !sub_178E58(v9, 51, 4, v30, -1)
              || sub_178E58(v9, 50, 6, **(_DWORD **)(a1[1] + 8), -1) <= 0
              || (a5 & 0x44000) == 0 && !sub_13A278(v9) )
            {
              goto LABEL_36;
            }
          }
LABEL_24:
          if ( (a5 & 2) != 0 || sub_1394E8(a1, a2) )
          {
            if ( (a5 & 0x40000) != 0 )
            {
              if ( (a5 & 0x100) != 0 )
              {
                v19 = sub_DB4F8(*(int **)(v9 + 32), 0);
                *(_DWORD *)(v9 + 40) = v19;
                if ( !v19 || sub_DA780(v19) <= 0 || sub_DB77C(*(_DWORD *)(v9 + 40), -1, 248) <= 0 )
                  goto LABEL_36;
              }
              else if ( sub_D9454(*(_DWORD **)(v9 + 36), (_DWORD *)(v9 + 40), a4, 0, (int)a3) <= 0 )
              {
                goto LABEL_36;
              }
            }
            v15 = (int *)v8[5];
            if ( v15 || (v15 = (int *)sub_10BFCC(), (v8[5] = (int)v15) != 0) )
            {
              if ( sub_10BD3C(v15, v9) )
                return v9;
            }
          }
          goto LABEL_44;
        }
        v41 = (size_t *)(a5 & 0x200);
        if ( sub_13ABD8((int **)&v41) )
        {
          v38 = sub_13AAE8(v9, v41);
          sub_10BFDC((int)v41, (void (__fastcall *)(int))X509_ALGOR_free);
          if ( v38 )
            goto LABEL_23;
        }
        else
        {
          sub_10BFDC((int)v41, (void (__fastcall *)(int))X509_ALGOR_free);
        }
      }
LABEL_44:
      v23 = 388;
LABEL_45:
      sub_D0048(46, 102, 65, (int)"crypto/cms/cms_sd.c", v23);
      sub_B17C4(v9, (int)&CMS_SignerInfo_it);
      return 0;
    }
LABEL_60:
    sub_B17C4(0, (int)&CMS_SignerInfo_it);
    return 0;
  }
  sub_D0048(46, 102, 136, (int)"crypto/cms/cms_sd.c", 251);
  return 0;
}
