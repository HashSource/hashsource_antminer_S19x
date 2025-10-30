int __fastcall sub_930F0(_DWORD *a1, int *a2, int a3, int a4)
{
  bool v4; // zf
  int result; // r0
  int v8; // r2
  int v9; // r3
  unsigned __int8 *v10; // r1
  unsigned int v11; // r1
  unsigned __int8 *v12; // r9
  unsigned int v13; // r8
  int v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int v17; // r4
  int v18; // r3
  unsigned __int8 *v19; // r8
  int v20; // r0
  int v21; // r3
  int v22; // r4
  unsigned int v23; // r2
  unsigned __int8 *v24; // r4
  int v25; // r12
  int v26; // r3
  unsigned __int8 *v27; // r4
  unsigned int v28; // r3
  unsigned int v29; // r9
  unsigned __int8 *v30; // r10
  int v31; // r0
  int v32; // r11
  int v33; // r1
  unsigned __int8 *v34; // [sp+Ch] [bp-8h] BYREF

  v4 = a4 == 0;
  if ( !a4 )
    v4 = a1[35] == 0;
  if ( !v4 )
    return 1;
  if ( !a2[1] )
  {
    sub_95494(a1, 50, 577, 110, "ssl/statem/extensions_srvr.c", 347);
    return 0;
  }
  result = *a2;
  v9 = *a2 + 1;
  v8 = *(unsigned __int8 *)*a2;
  a1[335] = v8;
  v10 = (unsigned __int8 *)a2[1];
  if ( v8 != 1 )
    result = 1;
  *a2 = v9;
  a2[1] = (int)(v10 - 1);
  if ( v8 != 1 )
  {
    a1[335] = -1;
    return result;
  }
  if ( (unsigned int)(v10 - 1) <= 1
    || (v11 = (unsigned int)(v10 - 3),
        v12 = (unsigned __int8 *)(result + 3),
        v13 = *(unsigned __int8 *)(result + 2) | (*(unsigned __int8 *)(result + 1) << 8),
        v13 > v11) )
  {
    v21 = 361;
  }
  else
  {
    a2[1] = v11 - v13;
    *a2 = (int)&v12[v13];
    v14 = sub_10BFDC(a1[339], OCSP_RESPID_free);
    if ( v13 )
    {
      v22 = sub_10BFCC(v14);
      a1[339] = v22;
      if ( !v22 )
      {
        sub_95494(a1, 80, 577, 65, "ssl/statem/extensions_srvr.c", 374);
        return 0;
      }
      if ( v13 != 1 )
      {
        v23 = v13;
        v24 = v12;
        do
        {
          v25 = *v24;
          v26 = v24[1];
          v27 = v24 + 2;
          v28 = v26 | (v25 << 8);
          v29 = v23 - 2 - v28;
          v30 = &v27[v28];
          if ( v28 > v23 - 2 || !v28 )
            break;
          v34 = v27;
          v31 = sub_EB7D8(0, &v34, v28);
          v32 = v31;
          if ( !v31 )
          {
            v21 = 399;
            goto LABEL_22;
          }
          v24 = v34;
          if ( v34 != v30 )
          {
            OCSP_RESPID_free(v31, v31);
            v21 = 406;
            goto LABEL_22;
          }
          if ( !sub_10BD3C(a1[339], v31) )
          {
            OCSP_RESPID_free(v32, v33);
            sub_95494(a1, 80, 577, 68, "ssl/statem/extensions_srvr.c", 414);
            return 0;
          }
          v23 = v29;
          if ( !v29 )
            goto LABEL_15;
        }
        while ( v29 != 1 );
      }
      v21 = 389;
    }
    else
    {
      a1[339] = 0;
LABEL_15:
      v15 = a2[1];
      if ( v15 > 1
        && (v16 = v15 - 2, v17 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8), v17 <= v16)
        && (v18 = *a2 + 2, v19 = (unsigned __int8 *)(v18 + v17), v17 == v16) )
      {
        *a2 = (int)v19;
        a2[1] = 0;
        if ( !v17 )
          return 1;
        v34 = (unsigned __int8 *)v18;
        sub_10BFDC(a1[340], X509_EXTENSION_free);
        v20 = sub_115618(0, &v34, v17);
        a1[340] = v20;
        if ( v20 )
        {
          if ( v34 == v19 )
            return 1;
        }
        v21 = 436;
      }
      else
      {
        v21 = 423;
      }
    }
  }
LABEL_22:
  sub_95494(a1, 50, 577, 110, "ssl/statem/extensions_srvr.c", v21);
  return 0;
}
