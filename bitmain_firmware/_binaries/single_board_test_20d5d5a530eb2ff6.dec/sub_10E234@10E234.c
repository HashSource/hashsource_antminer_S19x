int __fastcall sub_10E234(int result, int a2, char *a3, int a4)
{
  int v4; // r10
  int v5; // r4
  size_t *v9; // r0
  int v10; // r8
  _DWORD *v11; // r0
  _DWORD *v12; // r9
  char *v13; // r0
  int v14; // r0
  int v15; // r2

  if ( !result )
    return result;
  v4 = a2 & 0x1000;
  v5 = result;
  if ( (a2 & 0x1000) != 0 )
  {
    v13 = sub_EAC84(*(_DWORD *)result);
    v14 = sub_12A898(0, a3, a4, a2, v13);
    v10 = v14;
    if ( !v14 )
    {
      sub_D0048(11, 138, 13, (int)"crypto/x509/x509_att.c", 257);
      return 0;
    }
    v4 = *(_DWORD *)(v14 + 4);
    v12 = (_DWORD *)sub_B2408();
    if ( !v12 )
      goto LABEL_12;
  }
  else
  {
    if ( a4 == -1 )
    {
      v10 = a2 & 0x1000;
      if ( !a2 )
        goto LABEL_7;
    }
    else
    {
      v9 = (size_t *)sub_AE194(a2);
      v10 = (int)v9;
      if ( !v9 )
      {
        v12 = 0;
        goto LABEL_12;
      }
      v4 = a2;
      if ( !sub_AE088(v9, a3, a4) )
      {
        v12 = 0;
        goto LABEL_12;
      }
      if ( !a2 )
      {
LABEL_7:
        ASN1_STRING_free(v10);
        return 1;
      }
    }
    v11 = (_DWORD *)sub_B2408();
    v12 = v11;
    if ( !v11 )
    {
LABEL_12:
      sub_D0048(11, 138, 65, (int)"crypto/x509/x509_att.c", 290);
      ASN1_TYPE_free((int)v12);
      ASN1_STRING_free(v10);
      return 0;
    }
    if ( a4 == -1 )
    {
      if ( !sub_AD7D8(v11, a2, (int)a3) )
        goto LABEL_12;
      goto LABEL_16;
    }
  }
  v15 = v10;
  v10 = 0;
  sub_AD794(v12, v4, v15);
LABEL_16:
  if ( !sub_10BD3C(*(int **)(v5 + 4), (int)v12) )
    goto LABEL_12;
  return 1;
}
