int __fastcall sub_15DEF4(int a1, _DWORD *a2, int a3, int a4, int a5, unsigned int a6, _BYTE *a7, _BYTE *a8)
{
  __int64 v10; // r10
  int v11; // r0
  int result; // r0
  int *v13; // r4
  int v14; // r5
  int v15; // r10
  int v16; // r1
  _BYTE *v17; // r2
  int v18; // r3
  int v19; // r0
  _BYTE *v20; // r2
  int i; // [sp+8h] [bp-54h]
  int v25; // [sp+14h] [bp-48h] BYREF
  _BYTE v26[68]; // [sp+18h] [bp-44h] BYREF

  v25 = 0;
  LODWORD(v10) = sub_D8AD0(a1);
  v11 = sub_D8940(a1);
  if ( (int)v10 > 64 )
    sub_BC328("assertion failed: nkey <= EVP_MAX_KEY_LENGTH", "crypto/evp/evp_key.c", 86);
  HIDWORD(v10) = v11;
  if ( v11 > 16 )
    sub_BC328("assertion failed: niv <= EVP_MAX_IV_LENGTH", "crypto/evp/evp_key.c", 87);
  result = v10;
  if ( a4 )
  {
    v13 = (int *)sub_D14F4();
    if ( v13 )
    {
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          if ( !sub_D1520(v13, a2, 0)
            || i && !sub_D16D8((int)v13, (int)v26, v25)
            || !sub_D16D8((int)v13, a4, a5)
            || a3 && !sub_D16D8((int)v13, a3, 8)
            || !sub_D16E4(v13, (int)v26, &v25) )
          {
            goto LABEL_18;
          }
          if ( a6 > 1 )
          {
            v14 = 1;
            while ( sub_D1520(v13, a2, 0) && sub_D16D8((int)v13, (int)v26, v25) && sub_D16E4(v13, (int)v26, &v25) )
            {
              if ( ++v14 == a6 )
              {
                if ( (_DWORD)v10 )
                  goto LABEL_24;
                v18 = 0;
                goto LABEL_43;
              }
            }
            goto LABEL_18;
          }
          v16 = v10;
          if ( (_DWORD)v10 )
            break;
          if ( !HIDWORD(v10) )
            goto LABEL_39;
LABEL_32:
          v19 = v25;
          if ( v16 != v25 )
          {
            v20 = a8;
            v18 = v16;
            do
            {
LABEL_34:
              if ( v20 )
                *v20++ = v26[v18];
              --HIDWORD(v10);
              ++v18;
            }
            while ( HIDWORD(v10) && v18 != v19 );
            a8 = v20;
          }
LABEL_39:
          ++i;
          if ( !v10 )
            goto LABEL_40;
        }
LABEL_24:
        v16 = v25;
        if ( !v25 )
        {
LABEL_31:
          if ( !HIDWORD(v10) )
            goto LABEL_39;
          goto LABEL_32;
        }
        v17 = a7;
        v18 = 0;
        while ( 1 )
        {
          if ( v17 )
            *v17++ = v26[v18];
          LODWORD(v10) = v10 - 1;
          ++v18;
          if ( !(_DWORD)v10 )
            break;
          if ( v18 == v16 )
          {
            a7 = v17;
            goto LABEL_31;
          }
        }
        a7 = v17;
LABEL_43:
        if ( !HIDWORD(v10) )
        {
LABEL_40:
          v15 = sub_D8AD0(a1);
          goto LABEL_19;
        }
        v19 = v25;
        if ( v25 != v18 )
        {
          LODWORD(v10) = 0;
          v20 = a8;
          goto LABEL_34;
        }
        LODWORD(v10) = 0;
      }
    }
LABEL_18:
    v15 = 0;
LABEL_19:
    sub_D1504(v13);
    sub_E07F8(v26, 0x40u);
    return v15;
  }
  return result;
}
