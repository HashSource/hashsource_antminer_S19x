int __fastcall sub_16E7AC(int a1, _DWORD *a2)
{
  _DWORD *v3; // r5
  int v4; // r4
  int result; // r0

  v3 = (_DWORD *)sub_16E790(a1);
  switch ( sub_D9B60(v3, a2) )
  {
    case -2:
      if ( sub_DA19C((int)a2) == 408 )
      {
        v4 = 0;
        sub_D0048(11, 144, 16, (int)"crypto/x509/x509_req.c", 102);
        goto LABEL_3;
      }
      if ( sub_DA19C((int)a2) == 28 )
      {
        v4 = 0;
        sub_D0048(11, 144, 114, (int)"crypto/x509/x509_req.c", 110);
        goto LABEL_3;
      }
      sub_D0048(11, 144, 117, (int)"crypto/x509/x509_req.c", 114);
      sub_DA240((int)v3);
      result = 0;
      break;
    case -1:
      sub_D0048(11, 144, 115, (int)"crypto/x509/x509_req.c", 97);
      sub_DA240((int)v3);
      result = 0;
      break;
    case 0:
      sub_D0048(11, 144, 116, (int)"crypto/x509/x509_req.c", 94);
      sub_DA240((int)v3);
      result = 0;
      break;
    case 1:
      v4 = 1;
      goto LABEL_3;
    default:
      v4 = 0;
LABEL_3:
      sub_DA240((int)v3);
      result = v4;
      break;
  }
  return result;
}
