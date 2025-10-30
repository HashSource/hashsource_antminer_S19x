int __fastcall sub_112910(int a1, int a2, int a3, int a4)
{
  int v8; // r9
  int v9; // r0
  int v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r9
  bool v16; // cc
  int v17; // r1
  int v18; // r0
  int v19; // r5
  _DWORD *v20; // r10
  unsigned int v21; // r1
  int v22; // r9
  int v23; // r3
  bool v25; // zf
  int v26; // [sp+Ch] [bp-8h] BYREF

  if ( *(_DWORD *)(a1 + 96) || *(_DWORD *)(a2 + 96) )
  {
    sub_D0048(11, 105, 127, (int)"crypto/x509/x509_vfy.c", 1993);
    return 0;
  }
  else if ( *(_DWORD *)(a1 + 92) && *(_DWORD *)(a2 + 92) )
  {
    v8 = sub_113BC4(a1);
    v9 = sub_113BC4(a2);
    if ( sub_10E6E0(v8, v9) )
    {
      sub_D0048(11, 105, 129, (int)"crypto/x509/x509_vfy.c", 2003);
      return 0;
    }
    else if ( sub_110644(a1, a2) )
    {
      if ( sub_110644(a1, a2) )
      {
        if ( sub_126528(*(_DWORD *)(a2 + 92), *(_DWORD *)(a1 + 92)) <= 0 )
        {
          sub_D0048(11, 105, 132, (int)"crypto/x509/x509_vfy.c", 2017);
          return 0;
        }
        else if ( a3 && (sub_1154C8(a1, a3) <= 0 || sub_1154C8(a2, a3) <= 0) )
        {
          sub_D0048(11, 105, 131, (int)"crypto/x509/x509_vfy.c", 2023);
          return 0;
        }
        else
        {
          v10 = sub_115438();
          v11 = v10;
          if ( !v10 )
            goto LABEL_28;
          if ( !sub_113B10(v10, 1) )
            goto LABEL_28;
          v12 = sub_113BC4(a2);
          if ( !sub_113B40(v11, v12) )
            goto LABEL_28;
          v13 = sub_113BB4(a2);
          if ( !sub_113B4C(v11, v13) )
            goto LABEL_28;
          v14 = sub_113BB8(a2);
          if ( !sub_113B58(v11, v14) )
            goto LABEL_28;
          v15 = 0;
          if ( !sub_10ED50(v11, 140, *(_DWORD *)(a1 + 92), 1, 0) )
            goto LABEL_28;
          while ( 1 )
          {
            v16 = v15 < sub_10ED18(a2);
            v17 = v15;
            v18 = a2;
            ++v15;
            if ( !v16 )
              break;
            sub_10ED38(a2);
            if ( !sub_10ED58(v11) )
              goto LABEL_28;
          }
          v19 = 0;
          v20 = (_DWORD *)sub_113BCC(v18, v17);
          while ( 1 )
          {
            v16 = v19 < sub_10C010((int)v20);
            v21 = v19++;
            if ( !v16 )
              break;
            v22 = sub_10C01C(v20, v21);
            if ( !sub_1154D4(a1, &v26, v22) )
            {
              v23 = sub_115398(v22);
              v26 = v23;
              if ( !v23 )
                goto LABEL_28;
              if ( !sub_115478(v11, v23) )
              {
                sub_115384(v26);
                goto LABEL_28;
              }
            }
          }
          v25 = a3 == 0;
          if ( a3 )
            v25 = a4 == 0;
          if ( v25 )
          {
            return v11;
          }
          else
          {
            if ( !sub_114320(v11, a3, a4) )
            {
LABEL_28:
              sub_D0048(11, 105, 65, (int)"crypto/x509/x509_vfy.c", 2085);
              X509_CRL_free(v11);
              return 0;
            }
            return v11;
          }
        }
      }
      else
      {
        sub_D0048(11, 105, 128, (int)"crypto/x509/x509_vfy.c", 2012);
        return 0;
      }
    }
    else
    {
      sub_D0048(11, 105, 110, (int)"crypto/x509/x509_vfy.c", 2008);
      return 0;
    }
  }
  else
  {
    sub_D0048(11, 105, 130, (int)"crypto/x509/x509_vfy.c", 1998);
    return 0;
  }
}
