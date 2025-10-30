int *__fastcall sub_121440(int a1, int a2, _DWORD *a3)
{
  int *v4; // r8
  signed int i; // r5
  unsigned int v6; // r0
  int v7; // r11
  int v8; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r0
  char *v12; // r4
  _DWORD *v13; // r6
  int v14; // r0
  char *endptr; // [sp+1Ch] [bp-8h] BYREF

  v4 = (int *)sub_10BFCC();
  if ( v4 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= sub_10C010((int)a3) )
        return v4;
      v11 = sub_10C01C(a3, i);
      v12 = *(char **)(v11 + 8);
      v13 = (_DWORD *)v11;
      if ( v12 )
      {
        if ( !strcasecmp(*(const char **)(v11 + 8), "status_request") )
          goto LABEL_16;
      }
      else
      {
        v12 = *(char **)(v11 + 4);
        if ( !strcasecmp(v12, "status_request") )
        {
LABEL_16:
          v9 = sub_B20A4();
          v7 = 5;
          v10 = v9;
          if ( !v9 )
            goto LABEL_17;
          goto LABEL_10;
        }
      }
      if ( !strcasecmp(v12, "status_request_v2") )
      {
        v7 = 17;
      }
      else
      {
        v6 = strtol(v12, &endptr, 10);
        v7 = v6;
        v8 = v12 == endptr;
        if ( *endptr )
          v8 |= 1u;
        if ( v8 || v6 >= 0x10000 )
        {
          sub_D0048(34, 165, 143, (int)"crypto/x509v3/v3_tlsf.c", 119);
          sub_D1240(6, "section:", *v13, ",name:", v13[1], ",value:", v13[2]);
          goto LABEL_18;
        }
      }
      v9 = sub_B20A4();
      v10 = v9;
      if ( !v9 )
        goto LABEL_17;
LABEL_10:
      if ( !sub_126EFC(v9, v7) || sub_10BD3C(v4, v10) <= 0 )
      {
LABEL_17:
        sub_D0048(34, 165, 65, (int)"crypto/x509v3/v3_tlsf.c", 128);
LABEL_18:
        v14 = (int)v4;
        v4 = 0;
        sub_10BFDC(v14, (void (__fastcall *)(int))ASN1_INTEGER_free);
        return v4;
      }
    }
  }
  sub_D0048(34, 165, 65, (int)"crypto/x509v3/v3_tlsf.c", 99);
  return v4;
}
